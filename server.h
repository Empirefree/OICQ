#ifndef SERVER_H
#define SERVER_H

#include <QDialog>
#include <QTime>

//创建一个对话框供用户选择文件发送
class QFile;
class QTcpServer;
class QTcpSocket;

namespace Ui {
class Server;
}

class Server : public QDialog
{
    Q_OBJECT

public:
    explicit Server(QWidget *parent = 0);
    ~Server();
    void initSrv();                         //初始化服务器
    void refused();                         //关闭服务器

protected:
    void closeEvent(QCloseEvent *);

private:
    Ui::Server *ui;
    qint16 tPort;
    QTcpServer *tSrv;
    QString fileName;
    QString theFileName;
    QFile *locFile;                       //待发送的文件
    qint64 totalBytes;                    //共需要发送的字节数
    qint64 bytesWritten;                  //已发送的字节数
    qint64 bytesTobeWrite;                //待发送的字节数
    qint64 payloadSize;
    QByteArray outBlock;                  //缓存一次发送的数据即缓冲区
    QTcpSocket *clntConn;
    QTime time;
private slots:
    void sndMsg();                        //发送数据
    void updClnProgress(qint64 numBytes); //更新进度条
    void on_sOpenBtn_clicked();

    void on_sSendBtn_clicked();

    void on_sCloseBtn_clicked();

signals:
    void sndFileName(QString fileName);

};

#endif // SERVER_H
