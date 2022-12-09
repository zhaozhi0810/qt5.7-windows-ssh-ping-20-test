#include "CConnectionForSshClient.h"
#include <QDebug>


CConnectionForSshClient::CConnectionForSshClient(QString strIp,int index, int nPort, QString strPwd, QString strUser)
{
    m_strIp = strIp;
    m_nPort = nPort;
    m_strUser = strUser;
    m_strPwd = strPwd;
    m_strIpPort = m_strIp + ":" + QString::number(m_nPort);
    m_index = index;
}

void CConnectionForSshClient::init()
{
    m_pThread = new QThread();
    connect(m_pThread,SIGNAL(finished()),this,SLOT(slotThreadFinished()));
    this->moveToThread(m_pThread);
    m_pThread->start();

    //之后的逻辑都得通过信号和槽接通
    connect(this,SIGNAL(sigInitForClild()),this,SLOT(slotInitForClild()));
    emit sigInitForClild();
}

void CConnectionForSshClient::unInit()
{
    m_pThread->quit();
}

int CConnectionForSshClient::send(QString strMessage)
{
    qDebug()<<"CConnectionForSshClient ssh send "<<strMessage;

    int nSize = 0;
    if(m_bConnected && m_bSendAble){
       nSize = m_shell->write(strMessage.toLatin1().data());
    }else{
       qDebug()<<"CConnectionForSshClient::send() ssh未连接 或 shell未连接:"<<getIpPort();
    }

    return nSize;
}

CConnectionForSshClient::~CConnectionForSshClient()
{
    if(nullptr != m_pSshSocket){
 //       unInit();
        delete m_pSshSocket;
        m_pSshSocket = nullptr;
    }
}

void CConnectionForSshClient::slotResetConnection(QString strIpPort)
{
    if(this->getIpPort() == strIpPort){
        this->slotDisconnected(m_index);
    }
}

void CConnectionForSshClient::slotSend(QString strIpPort, QString strMessage)
{
    if(0 != m_strIpPort.compare(strIpPort)){
        return;
    }

    send(strMessage);
}

void CConnectionForSshClient::slotSendByQByteArray(QString strIpPort, QByteArray arrMsg)
{
    if(0 != m_strIpPort.compare(strIpPort)){
        return;
    }

    if(m_bConnected){
       m_shell->write(arrMsg);
    }else{
       qDebug()<<"CConnectionForSshClient::send(QString strMessage) 发送失败 未建立连接:"<<getIpPort();
    }
}

void CConnectionForSshClient::slotInitForClild()
{
    m_argParameters.port = m_nPort;
    m_argParameters.userName = m_strUser;
    m_argParameters.password = m_strPwd;
    m_argParameters.host = m_strIp;
    m_argParameters.timeout = 10;
    m_argParameters.authenticationType =
            QSsh::SshConnectionParameters::AuthenticationTypePassword; //密码方式连接

    slotCreateConnection(); //连接

    m_pTimer = new QTimer(this);
    m_pTimer->setInterval(RECONNET_SPAN_TIME);
    connect(m_pTimer,SIGNAL(timeout()),this,SLOT(slotCreateConnection()));
    m_pTimer->start();//启动心跳定时器，每隔一段时间进入slotCreateConnection判断是否需要重连
}

void CConnectionForSshClient::slotCreateConnection()
{

    qDebug()<<"CConnectionForSshClient::slotCreateConnection检查连接" ;

    if(true == m_bConnected)
        return;

    if(nullptr == m_pSshSocket){
        m_pSshSocket = new QSsh::SshConnection(m_argParameters);
        connect(m_pSshSocket,SIGNAL(connected()),SLOT(slotConnected()));
        connect(m_pSshSocket,SIGNAL(error(QSsh::SshError)),SLOT(slotSshConnectError(QSsh::SshError)));
    }
    m_pSshSocket->connectToHost();
    qDebug()<<"CConnectionForSshClient::slotCreateConnection() 以ssh方式 尝试连接:"<<getIpPort();
}



//已连接的槽函数
void CConnectionForSshClient::slotConnected()
{
    qDebug()<<"CConnectionForSshClient::slotConnected ssh已连接到:"<<getIpPort();
    m_pTimer->stop();

    m_shell = m_pSshSocket->createRemoteShell();
    connect(m_shell.data(), SIGNAL(started()), SLOT(slotShellStart()));
    connect(m_shell.data(), SIGNAL(readyReadStandardOutput()), SLOT(slotDataReceived()));
    connect(m_shell.data(), SIGNAL(readyReadStandardError()), SLOT(slotShellError()));
    m_shell.data()->start();

    m_bConnected = true;
    emit sigConnectStateChanged(m_bConnected,m_index,m_strIp,m_nPort);
}



//断开，并退出
//void CConnectionForSshClient::disconnect_exit()
//{
//    m_pSshSocket->disconnectFromHost();
//}

//断开连接的槽函数
//没有连接成功的时候，好像会有点问题
void CConnectionForSshClient::slotDisconnected(int index)
{
    if(m_index == index)
    {
        if(m_bConnected)
            m_pSshSocket->disconnectFromHost();
        else if(m_pTimer)
            m_pTimer->stop();
        unInit();
    }
}


//线程结束的槽函数
void CConnectionForSshClient::slotThreadFinished()
{
//    qDebug()<<"slotThreadFinished" << " m_index= " << m_index;
    m_pThread->deleteLater();
    this->deleteLater();
}



//连接错误的处理槽函数
void CConnectionForSshClient::slotSshConnectError(QSsh::SshError sshError)
{
    m_bSendAble = false;
    m_bConnected = false;
    emit sigConnectStateChanged(m_bConnected,m_index,m_strIp,m_nPort);

    m_pTimer->start();

    switch(sshError){
    case QSsh::SshNoError:
        qDebug()<<"slotSshConnectError SshNoError"<<getIpPort();
        break;
    case QSsh::SshSocketError:
        qDebug()<<"slotSshConnectError SshSocketError"<<getIpPort(); //拔掉网线是这种错误
        break;
    case QSsh::SshTimeoutError:
        qDebug()<<"slotSshConnectError SshTimeoutError"<<getIpPort();
        break;
    case QSsh::SshProtocolError:
        qDebug()<<"slotSshConnectError SshProtocolError"<<getIpPort();
        break;
    case QSsh::SshHostKeyError:
        qDebug()<<"slotSshConnectError SshHostKeyError"<<getIpPort();
        break;
    case QSsh::SshKeyFileError:
        qDebug()<<"slotSshConnectError SshKeyFileError"<<getIpPort();
        break;
    case QSsh::SshAuthenticationError:
        qDebug()<<"slotSshConnectError SshAuthenticationError"<<getIpPort();
        break;
    case QSsh::SshClosedByServerError:
        qDebug()<<"slotSshConnectError SshClosedByServerError"<<getIpPort();
        break;
    case QSsh::SshInternalError:
        qDebug()<<"slotSshConnectError SshInternalError"<<getIpPort();
        break;
    default:
        break;
    }

}



//shell开始的槽函数
void CConnectionForSshClient::slotShellStart()
{
    m_bSendAble = true;
    qDebug()<<"CConnectionForSshClient::slotShellStart Shell已连接:"<<getIpPort();
}


//shell错误的槽函数
void CConnectionForSshClient::slotShellError()
{
    qDebug()<<"CConnectionForSshClient::slotShellError Shell发生错误:"<<getIpPort();
}



//数据发送到shell（直接调用的还是本线程，不能直接这样调用）
//void CConnectionForSshClient::sshdateSend(QString strMessage)
//{
//    send(strMessage);
//}

//数据发送到shell的槽函数（槽函数则是新线程执行的）
void CConnectionForSshClient::slotSend(int index,QString strMessage)
{
    if(index == m_index)
        send(strMessage);
}


//接收到数据的槽函数
void CConnectionForSshClient::slotDataReceived()
{
    QByteArray byteRecv = m_shell->readAllStandardOutput();
    QString strRecv = QString::fromUtf8(byteRecv);

//    if(strRecv.contains("password for")){
//        m_shell->write(m_strPwd.toLatin1().data());
//    }

    if(!strRecv.isEmpty()) //过滤空行
        emit sigDataArrived(strRecv,m_index, m_strIp, m_nPort);

}
