#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
class QUdpSocket;
class Server;

namespace Ui {
class Widget;
}

//5大聊天功能分别代表：聊天信息，新用户加入，用户退出，文件名，拒绝接收文件
enum MsgType{Msg, UsrEnter, UsrLeft, FileName, Refuse};        //消息类型

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent, QString usrname);
    ~Widget();

protected:
    void hasPendingFile(QString usrname, QString srvaddr, QString clntaddr, QString filename);          //判断是否接收文件
    void usrEnter(QString usrname, QString ipaddr);             //处理新用户加入
    void usrLeft(QString usrname, QString time);                //处理用户推出
    void sndMsg(MsgType type, QString srvaddr = "");            //广播UDP消息
    QString getIP();                                            //获取IP地址
    QString getUsr();                                           //获取用户名
    QString getMsg();                                           //获取聊天消息
    bool saveFile(const QString &filename);
    void closeEvent(QCloseEvent *);

private:
    Ui::Widget *ui;
    QUdpSocket *udpSocket;
    qint16 port;
    QString uName;
    QString fileName;
    Server *srv;
    QColor color;

private slots:
    void processPendingDatagrams();                             //接收UDP消息
    void getFileName(QString);                                  //获得发送的文件名
    void on_sendBtn_clicked();
    void on_sendTBtn_clicked();
    void on_fontCbx_currentFontChanged(const QFont &f);
    void on_sizeCbx_currentIndexChanged(const QString &arg1);
    void on_boldTBtn_clicked(bool checked);
    void on_italicTBtn_clicked(bool checked);
    void on_underlineTBtn_clicked(bool checked);
    void on_colorTBtn_clicked();
    void on_saveTBtn_clicked();
    void on_clearTBtn_clicked();
    void on_exitBtn_clicked();
};

#endif // WIDGET_H
