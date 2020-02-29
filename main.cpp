#include "widget.h"
#include "drawer.h"
#include <QApplication>
#include "logindialog.h"     //登录窗口

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Drawer drawer;//创建并显示抽屉盒
    LoginDialog dlg;

    if(dlg.exec() == QDialog::Accepted){
        drawer.resize(250, 700);
        drawer.show();
        return a.exec();
    }
    else
        return 0;

}
