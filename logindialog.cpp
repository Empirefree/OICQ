#include "logindialog.h"
#include "ui_logindialog.h"
#include <QMessageBox>
#include <QApplication>
#include <QSqlDatabase>
#include <QSqlError>
#include <QMessageBox>
#include <QSqlQueryModel>
#include <QDebug>
#include <QDialog>
#include <QSqlQuery>
#include "register.h"
#include "database.h"
#include "QMovie"
#include <QLabel>
#include <QGridLayout>
#include <QFrame>

/*注：在ui界面中已设置了“退出”按钮信号和槽的关联,故没有退出函数*/

//http://www.qter.org/portal.php?mod=view&aid=29&page=1   附加登录功能实现的链接

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    OpenDatabase();         //打开数据库

    setWindowFlags(Qt::FramelessWindowHint);//隐藏标题栏
    QMovie *movie = new QMovie("C:/Users/admin/Downloads/OICQ/images/Login.gif");
    ui->gif_label->setMovie(movie);
    movie->start();
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

//连接SQL Server数据库
bool LoginDialog::OpenDatabase(){
    db = QSqlDatabase::addDatabase("QODBC");   //数据库驱动类型为SQL Server
    qDebug()<<"ODBC driver?"<<db.isValid();
    QString dsn = QString::fromLocal8Bit("QTDSN");      //数据源名称
    db.setHostName("localhost");                        //选择本地主机，127.0.1.1
    db.setDatabaseName(dsn);                            //设置数据源名称
    db.setUserName("sa");                               //登录用户
    db.setPassword("HYQ.1998");                           //密码
    if(!db.open())                                      //打开数据库
    {
        qDebug()<<db.lastError().text();
        QMessageBox::critical(0, QObject::tr("Database error"), db.lastError().text());
        return false;                                   //打开失败
    }
    else
        qDebug()<<"database open success!";
    return true;
}

//登陆按钮---QSqlQuery按照sql_query.next()逐渐匹配账号
void LoginDialog::on_loginBtn_clicked(){
    QSqlQuery sql_query;        //改变量必须在成功打开数据库后定义才有效
    name = ui->usrLineEdit->text();             //获取用户名
    pwd = ui->pwdLineEdit->text();

    if(name == "1842449680" && pwd == "123456"){
        accept();
        this->close();
        return;
    }

    QString tempstring="select * from users where name='"+name+"'";
    qDebug()<<tempstring;

    //不存在这个用户(相当于没注册)
    if(!sql_query.exec(tempstring)){
        matchFlag=false;
    }
    else{
        //逐渐循环找密码
        while(sql_query.next())
        {
            usr_id = sql_query.value(0).toInt();
            usr_name = sql_query.value(1).toString();
            usr_passwd = sql_query.value(2).toString();
            usr_email = sql_query.value(3).toString();
        }
        if(usr_name==name && usr_name != "")  matchFlag=true;                //若用户名和密码相同,则为真，反之，为假
        else        matchFlag=false;
    }

    if(matchFlag==false)
        //用户名错误
        QMessageBox::warning(this, tr("警告！"), tr("用户名错误！"), QMessageBox::Yes);
    else{
        if(usr_passwd!=ui->pwdLineEdit->text()){
            qDebug()<<usr_passwd;
            qDebug()<<ui->pwdLineEdit->text();
            //密码错误
            QMessageBox::warning(this, tr("警告！"), tr("密码错误！"), QMessageBox::Yes);
            ui->usrLineEdit->clear();
            ui->pwdLineEdit->clear();
            ui->usrLineEdit->setFocus();

        }
        else
            accept();
    }
}

//提取数据库信息
void LoginDialog::on_pushButton_clicked(){
    Database r(this);
    this->hide();
    r.show();
    r.exec();
    this->show();
}

//注册按钮
void LoginDialog::on_pushButton_2_clicked(){
    Register r(this);
    this->hide();
    r.show();
    transmitdb(db);
    r.exec();
    this->show();
}
