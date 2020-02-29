//drawer.h功能：类似聊天群，点击头像，即可实现与各个用户聊天
//UDP广播在这里实现了单播的功能


/*本文件功能：点击一个头像，即进入widget的聊天窗口*/
#ifndef DRAWER_H
#define DRAWER_H
#include <QToolBox>       //聊天群
#include <QToolButton>    //聊天对象
#include "widget.h"
#include <QPalette>

class Drawer : public QToolBox
{
    Q_OBJECT

public:
    Drawer(QWidget *parent = 0, Qt::WindowFlags f = 0);

private slots:
    //显示点击各个头像，即可聊天的函数
    void showChatWidget1();
    void showChatWidget2();
    void showChatWidget3();
    void showChatWidget4();
    void showChatWidget5();
    void showChatWidget6();
    void showChatWidget7();
    void showChatWidget8();
    void showChatWidget9();
private:
    //各个头像聊天的指针,聊天窗口为widget
    Widget *chatWidget1;
    Widget *chatWidget2;
    Widget *chatWidget3;
    Widget *chatWidget4;
    Widget *chatWidget5;
    Widget *chatWidget6;
    Widget *chatWidget7;
    Widget *chatWidget8;
    Widget *chatWidget9;



    //9个聊天对象
    QToolButton *toolBtn1;
    QToolButton *toolBtn2;
    QToolButton *toolBtn3;
    QToolButton *toolBtn4;
    QToolButton *toolBtn5;
    QToolButton *toolBtn6;
    QToolButton *toolBtn7;
    QToolButton *toolBtn8;
    QToolButton *toolBtn9;
};

#endif // DRAWER_H
