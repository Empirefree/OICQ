#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include <QSqlQuery>
#include "register.h"
#include "database.h"
#include <QMovie>

namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = 0);
    ~LoginDialog();

signals:
    void transmitdb(QSqlDatabase db);

private slots:
    //这就是不改写PushButton命名的后果，被自己蠢哭
    void on_loginBtn_clicked();             //登录
    void on_pushButton_clicked();           //数据库
    void on_pushButton_2_clicked();         //注册

private:
    //获取用户名和密码
    bool matchFlag;
    QString name;
    QString pwd;
    int usr_id;
    QString usr_name;
    QString usr_passwd;
    QString usr_email;
    QSqlDatabase db;
    QSqlQuery *query;
    Ui::LoginDialog *ui;
    bool OpenDatabase();            //打开数据库SQL Server
};

#endif // LOGINDIALOG_H
