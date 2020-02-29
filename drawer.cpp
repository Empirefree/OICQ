/*本函数功能：设置头像间距、名称位置以及实现点击头像即能聊天的功能(connect聊天功能即可)*/

//联想QQ:想一想具体功能,理解起来更加容易
#include "drawer.h"
#include <QGroupBox>     //组合按钮
#include <QVBoxLayout>   //垂直布局
#include <QPalette>

Drawer::Drawer(QWidget *parent, Qt::WindowFlags f): QToolBox(parent, f)
{
    //群里面共9个成员
    setWindowTitle(tr("OICQ QQ 2018"));                     //群名
    setWindowIcon(QPixmap(":/images/LightApple.png"));      //群头像

    toolBtn1 = new QToolButton;
    toolBtn1->setText(tr("胡宇乔"));                                     //群成员名称
    toolBtn1->setIcon(QPixmap(":/images/LightApple.png"));              //群成员头像
    toolBtn1->setIconSize(QPixmap(";/images/LightApple.png").size());   //群成员头像的大小
    toolBtn1->setAutoRaise(true);                                       //鼠标离开，头像弹起，具有动态感
    toolBtn1->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);         //让群成员名字显示在头像右边

    connect(toolBtn1, SIGNAL(clicked(bool)),this,SLOT(showChatWidget1()));    //将定义的显示窗口的函数和对应用户按钮绑定

    //梅馨月
    toolBtn2 = new QToolButton;
    toolBtn2->setText(tr("梅馨月"));
    toolBtn2->setIcon(QPixmap(":/images/doughnut.png"));
    toolBtn2->setIconSize(QPixmap(";/images/doughnut.png").size());
    toolBtn2->setAutoRaise(true);
    toolBtn2->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

    connect(toolBtn2, SIGNAL(clicked(bool)),this,SLOT(showChatWidget2()));

    //杨淑
    toolBtn3 = new QToolButton;
    toolBtn3->setText(tr("杨淑"));
    toolBtn3->setIcon(QPixmap(":/images/spaghetti.png"));
    toolBtn3->setIconSize(QPixmap(";/images/spaghetti.png").size());
    toolBtn3->setAutoRaise(true);
    toolBtn3->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

    connect(toolBtn3, SIGNAL(clicked(bool)),this,SLOT(showChatWidget3()));

    toolBtn4 = new QToolButton;
    toolBtn4->setText(tr("胡一天"));
    toolBtn4->setIcon(QPixmap(":/images/CoolApple.png"));
    toolBtn4->setIconSize(QPixmap(";/images/CoolApple.png").size());
    toolBtn4->setAutoRaise(true);
    toolBtn4->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

    connect(toolBtn4, SIGNAL(clicked(bool)),this,SLOT(showChatWidget4()));

    toolBtn5 = new QToolButton;
    toolBtn5->setText(tr("陈小希"));
    toolBtn5->setIcon(QPixmap(":/images/giraffe.png"));
    toolBtn5->setIconSize(QPixmap(";/images/giraffe.png").size());
    toolBtn5->setAutoRaise(true);
    toolBtn5->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

    connect(toolBtn5, SIGNAL(clicked(bool)),this,SLOT(showChatWidget5()));

    toolBtn6 = new QToolButton;
    toolBtn6->setText(tr("张一山"));
    toolBtn6->setIcon(QPixmap(":/images/egg.png"));
    toolBtn6->setIconSize(QPixmap(";/images/egg.png").size());
    toolBtn6->setAutoRaise(true);
    toolBtn6->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

    connect(toolBtn6, SIGNAL(clicked(bool)),this,SLOT(showChatWidget6()));

    toolBtn7 = new QToolButton;
    toolBtn7->setText(tr("吴亦凡"));
    toolBtn7->setIcon(QPixmap(":/images/dolphin.png"));
    toolBtn7->setIconSize(QPixmap(";/images/dolphin.png").size());
    toolBtn7->setAutoRaise(true);
    toolBtn7->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

    connect(toolBtn7, SIGNAL(clicked(bool)),this,SLOT(showChatWidget7()));


    toolBtn8 = new QToolButton;
    toolBtn8->setText(tr("娑娜"));
    toolBtn8->setIcon(QPixmap(":/images/Shana.png"));
    toolBtn8->setIconSize(QPixmap(";/images/Shana.png").size());
    toolBtn8->setAutoRaise(true);
    toolBtn8->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

    connect(toolBtn8, SIGNAL(clicked(bool)),this,SLOT(showChatWidget8()));

    toolBtn9 = new QToolButton;
    toolBtn9->setText(tr("李易峰"));
    toolBtn9->setIcon(QPixmap(":/images/cake.png"));
    toolBtn9->setIconSize(QPixmap(";/images/cake.png").size());
    toolBtn9->setAutoRaise(true);
    toolBtn9->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

    connect(toolBtn9, SIGNAL(clicked(bool)),this,SLOT(showChatWidget9()));

    //设置布局
    QGroupBox *groupBox = new QGroupBox;
    QVBoxLayout *layout = new QVBoxLayout(groupBox);

    layout->setMargin(20);                  //设置头像的间距
    layout->setAlignment(Qt::AlignLeft);    //设置头像位置
    layout->addWidget(toolBtn1);
    layout->addWidget(toolBtn2);
    layout->addWidget(toolBtn3);
    layout->addWidget(toolBtn4);
    layout->addWidget(toolBtn5);
    layout->addWidget(toolBtn6);
    layout->addWidget(toolBtn7);
    layout->addWidget(toolBtn8);
    layout->addWidget(toolBtn9);
    layout->addStretch();                   //插入一个占位符
    this->addItem((QWidget*)groupBox, tr("群成员"));         //标题栏名称
}

void Drawer::showChatWidget1(){

    chatWidget1 = new Widget(0, toolBtn1->text());//以按钮toolBtn1的文本为用户名创建一个widget类的实例，对应一个聊天窗口
    chatWidget1->setWindowTitle(toolBtn1->text());//设置聊天窗的标题文字为对应用户图片按钮的文本
    chatWidget1->setWindowIcon(toolBtn1->icon());//设置聊天窗的窗口图标为对应用户图片按钮上的图片，即用户头像
    chatWidget1->show();
}

void Drawer::showChatWidget2(){

    chatWidget2 = new Widget(0, toolBtn2->text());
    chatWidget2->setWindowTitle(toolBtn2->text());
    chatWidget2->setWindowIcon(toolBtn2->icon());
    chatWidget2->show();
}

void Drawer::showChatWidget3(){

    chatWidget3 = new Widget(0, toolBtn3->text());
    chatWidget3->setWindowTitle(toolBtn3->text());
    chatWidget3->setWindowIcon(toolBtn3->icon());
    chatWidget3->show();
}

void Drawer::showChatWidget4(){

    chatWidget4 = new Widget(0, toolBtn4->text());
    chatWidget4->setWindowTitle(toolBtn4->text());
    chatWidget4->setWindowIcon(toolBtn4->icon());
    chatWidget4->show();
}

void Drawer::showChatWidget5(){

    chatWidget5 = new Widget(0, toolBtn5->text());
    chatWidget5->setWindowTitle(toolBtn5->text());
    chatWidget5->setWindowIcon(toolBtn5->icon());
    chatWidget5->show();
}

void Drawer::showChatWidget6(){

    chatWidget6 = new Widget(0, toolBtn6->text());
    chatWidget6->setWindowTitle(toolBtn6->text());
    chatWidget6->setWindowIcon(toolBtn6->icon());
    chatWidget6->show();
}

void Drawer::showChatWidget7(){

    chatWidget7 = new Widget(0, toolBtn7->text());
    chatWidget7->setWindowTitle(toolBtn7->text());
    chatWidget7->setWindowIcon(toolBtn7->icon());
    chatWidget7->show();
}

void Drawer::showChatWidget8(){

    chatWidget8 = new Widget(0, toolBtn8->text());
    chatWidget8->setWindowTitle(toolBtn8->text());
    chatWidget8->setWindowIcon(toolBtn8->icon());
    chatWidget8->show();
}

void Drawer::showChatWidget9(){

    chatWidget9 = new Widget(0, toolBtn9->text());
    chatWidget9->setWindowTitle(toolBtn9->text());
    chatWidget9->setWindowIcon(toolBtn9->icon());
    chatWidget9->show();
}






























