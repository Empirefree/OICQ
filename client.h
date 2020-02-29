#ifndef CLIENT_H
#define CLIENT_H

#include <QDialog>
#include <QHostAddress>
#include <QFile>
#include <QTime>
class QTcpSocket;

namespace Ui {
class Client;
}

class Client : public QDialog
{
    Q_OBJECT

public:
    explicit Client(QWidget *parent = 0);
    ~Client();
    void setHostAddr(QHostAddress addr);                //获取发送端的IP地址
    void setFileName(QString name);                     //获取文件保存路径

protected:
    void closeEvent(QCloseEvent *);

private:
    Ui::Client *ui;
    QTcpSocket *tClnt;
    quint16 blockSize;
    QHostAddress HostAddr;
    qint16 tPort;
    qint64 totalBytes;                                  //共需要接收的字节数
    qint64 bytesReceived;                               //已接收的字节数
    qint64 fileNameSize;
    QString fileName;
    QFile *locFile;                                     //待接收的数据
    QByteArray inBlock;                                 //缓存一次接收的数据
    QTime time;

private slots:
    void newConn();                                     //连接到服务器
    void readMsg();                                     //读取文件数据
    void displayErr(QAbstractSocket::SocketError);      //显示错误信息
    void on_cCancleBtn_clicked();
    void on_cCloseBtn_clicked();
};

#endif // CLIENT_H
