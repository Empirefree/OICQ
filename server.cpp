#include "server.h"
#include "ui_server.h"
#include <QFile>
#include <QTcpServer>
#include <QTcpSocket>
#include <QMessageBox>
#include <QFileDialog>
#include <QDebug>

Server::Server(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Server)
{
    ui->setupUi(this);
    setFixedSize(400, 207);         //固定对话框
    tPort = 5555;
    tSrv = new QTcpServer(this);

    connect(tSrv, SIGNAL(newConnection()), this, SLOT(sndMsg()));
    initSrv();
}

Server::~Server()
{
    delete ui;
}

//初始化服务器
void Server::initSrv(){
    payloadSize = 64 * 1024;
    totalBytes = 0;
    bytesWritten = 0;
    bytesTobeWrite = 0;
    ui->sStatusLbl->setText(tr("请选择要传送的文件！"));
    ui->progressBar->reset();                                   //进度条初始化
    ui->sSendBtn->setEnabled(true);
    ui->sSendBtn->setEnabled(false);
    tSrv->close();                                              //关闭服务器
}

void Server::sndMsg(){
    ui->sSendBtn->setEnabled(false);
    clntConn = tSrv->nextPendingConnection();
    connect(clntConn, SIGNAL(bytesWritten(qint64)), this, SLOT(updClnProgress(qint64)));
    ui->sStatusLbl->setText(tr("开始传送文件 %1 ！").arg(theFileName));
    locFile = new QFile(fileName);

    //只读方式打开文件
    if(!locFile->open((QFile::ReadOnly))){
        QMessageBox::warning(this, tr("应用程序"), tr("无法读取文件 %1: \n%2").arg(fileName).arg(locFile->errorString()));
        return;
    }
    //获取文件大小
    totalBytes = locFile->size();

    //填写头文件结构
    QDataStream sendOut(&outBlock, QIODevice::WriteOnly);
    sendOut.setVersion(QDataStream::Qt_4_7);
    time.start();                                                                       //计算文件传输的时间
    QString curFile = fileName.right(fileName.size() - fileName.lastIndexOf('/') - 1);  //去除文件路径，保存文件
    sendOut<<qint64(0)<<qint64(0)<<curFile;                                             //创建一个临时的头文件

    totalBytes += outBlock.size();
    sendOut.device()->seek(0);                                                          //读写重头开始
    sendOut<<totalBytes<<qint64((outBlock.size() - sizeof(qint64) * 2));                //填写实际长度和文件长度

    bytesTobeWrite = totalBytes - clntConn->write(outBlock);                            //将头文件发出，同时修改待发送的字节数
    outBlock.resize(0);                                                                 //清空缓冲区

}

void Server::updClnProgress(qint64 numBytes){
    qApp->processEvents();                          //防止大文件传输出现卡顿现象

    bytesWritten += (int)numBytes;

    if(bytesTobeWrite > 0){
        outBlock = locFile->read(qMin(bytesTobeWrite, payloadSize));
        bytesTobeWrite -= (int)clntConn->write(outBlock);
        outBlock.resize(0);
    }
    else
        locFile->close();
    ui->progressBar->setMaximum(totalBytes);
    ui->progressBar->setValue(bytesWritten);
    float useTime = time.elapsed();
    double speed = bytesWritten / useTime;
    ui->sStatusLbl->setText(tr("已发送 %1MB (%2MB/s) \n共%3MB 已用时:%4秒\n 估计剩余时间：%5秒")
            .arg(bytesWritten / (1024 * 1024))
            .arg(speed * 1000 / (1024 * 1024), 0, 'f', 2)
            .arg(useTime / 1000, 0, 'f', 0)
            .arg(totalBytes / speed / 1000 - useTime / 1000, 0, 'f', 0));
    if(bytesWritten == totalBytes){
        locFile->close();
        tSrv->close();
        ui->sStatusLbl->setText(tr("传送文件 %1 成功").arg(theFileName));
    }
}
























//打开文件
void Server::on_sOpenBtn_clicked()
{
    fileName = QFileDialog::getOpenFileName(this);

    if(!fileName.isEmpty()){
        theFileName = fileName.right(fileName.size() - fileName.lastIndexOf('/') - 1);
        ui->sStatusLbl->setText(tr("要传输的文件为：%1 ").arg(theFileName));
        ui->sSendBtn->setEnabled(true);
        ui->sOpenBtn->setEnabled(false);
    }
}



/*本函数功能：使用UDP广播将文件名发给接收端*/
//发送文件
void Server::on_sSendBtn_clicked()
{
    if(!tSrv->listen(QHostAddress::Any, tPort)){
        qDebug()<<tSrv->errorString();
        close();
        return;
    }
    ui->sStatusLbl->setText(tr("等待对方接收... ..."));
    emit sndFileName(theFileName);
}










/*本函数功能：先关闭服务器，后关闭对话框*/
void Server::on_sCloseBtn_clicked()
{
    if(tSrv->isListening()){
        tSrv->close();
        if(locFile->isOpen())
            locFile->close();
        clntConn->abort();
    }
    close();
}

//若接收端拒绝接收文件，则关闭服务器，调用refused()
void Server::closeEvent(QCloseEvent *){
    on_sCloseBtn_clicked();
}

void Server::refused(){
    tSrv->close();
    ui->sStatusLbl->setText(tr("对方拒绝接收！"));
}
