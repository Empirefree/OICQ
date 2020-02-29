#include "register.h"
#include "ui_register.h"
#include "logindialog.h"
#include "QSqlDatabase"
#include "QMessageBox"

Register::Register(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Register)
{

    ui->setupUi(this);
    connect((LoginDialog *)parent,SIGNAL(transmitdb(QSqlDatabase)),this,SLOT(receivedb(QSqlDatabase)));
}

Register::~Register()
{
    delete ui;
}

//SQL操作语句
QString create_sql = "create table users (chatid int primary key, name varchar(30), passwd varchar(30), email varchar(30))";
QString select_max_sql = "select max(chatid) from users";
QString insert_sql = "insert into users values (?, ?, ?, ?)";
QString select_sql = "select name from users";


//打开数据库，存入数据
void Register::receivedb(QSqlDatabase db){
    qDebug()<<"received db";
    database=db;
    if(!database.isOpen())
    {
        if(!database.open())
        {
            qDebug()<<database.lastError();
            qFatal("failed to connect.") ;
            return;
        }
        else
        {
        }
    }
}

//关闭窗口
void Register::on_pushButton_clicked(){
    this->close();
}

//注册按钮
void Register::on_registerputton_clicked(){
    bool nameFlag=false;    //用户名有效标志
    bool passwdFlag=false;  //密码有效标志
    int newchatid=max_id+1;
    QString newpasswd=NULL;
    QString newname=NULL;
    QString newemail=ui->emailLineEdit->text();

    //判断密码是否2次一致
    if(ui->passwd1LineEdit->text()==""||ui->passwd2LineEdit->text()=="")
        passwdFlag=false;

    else if(ui->passwd1LineEdit->text()==ui->passwd2LineEdit->text())    //两次密码相同
        passwdFlag=true;
    else{
         QMessageBox::warning(this, tr("警告！"), tr("密码不一致！"), QMessageBox::Yes);
        passwdFlag=false;
        //return;
    }

    //以下为数据库的操作
    QSqlQuery sql_query;

    //查询最大id
    max_id = 0;
    sql_query.prepare(select_max_sql);
    if(!sql_query.exec())
        qDebug()<<sql_query.lastError();
    else{
        while(sql_query.next()){
            max_id = sql_query.value(0).toInt();
            qDebug()<<QString("max chatid:%1").arg(max_id);
        }
    }


    //检查用户名是否存在
    //查询部分数据(name)
    if(!sql_query.exec(select_sql))
        qDebug()<<sql_query.lastError();
    else{
        while(1){
            if(sql_query.next()){    //name有数据
                QString name = sql_query.value("name").toString();
                qDebug()<<QString("name=%1").arg(name);

                if(ui->nameLineEdit->text() == name){    //用户名已经存在
                    QMessageBox::warning(this, tr("警告！"), tr("用户名已存在！"), QMessageBox::Yes);
                    nameFlag=false;
                    break;
                }
                else
                    nameFlag=true;
            }
            else{       //name列为空
                nameFlag=true;
                break;
            }
        }
    }

    newchatid=max_id+1;
    if(nameFlag==true) newname=ui->nameLineEdit->text();
    else                return;
    if(passwdFlag==true)    newpasswd=ui->passwd1LineEdit->text();
    else                    return;

    //插入数据
    sql_query.prepare(insert_sql);
    sql_query.addBindValue(newchatid);              //chatid
    sql_query.addBindValue(newname);                //name
    sql_query.addBindValue(newpasswd);              //passwd
    sql_query.addBindValue(newemail);               //email
    if(!sql_query.exec())
        qDebug()<<sql_query.lastError();
    else
        qDebug()<<"inserted!";
    this->close();
}
