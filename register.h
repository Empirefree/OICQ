#ifndef REGISTER_H
#define REGISTER_H

#include <QDialog>
#include <QSqlDatabase>             //接受从登录界面传来的同一个数据库
#include "logindialog.h"            //调用logindialog函数
#include <QtSql>
namespace Ui {
class Register;
}

class Register : public QDialog
{
    Q_OBJECT

public:
    explicit Register(QWidget *parent = 0);
    ~Register();

private:
    Ui::Register *ui;
    QSqlDatabase database;
    bool tableFlag;
    int max_id;

private slots:
    void receivedb(QSqlDatabase db);        //连接logindialog中的同一个数据库
    void on_pushButton_clicked();           //退出按钮
    void on_registerputton_clicked();       //注册按钮
};

#endif // REGISTER_H
