#include "sshtest.h"
#include "ui_sshtest.h"
#include "stdlib.h"
#include "QHostInfo"
#include "QHostAddress"
#include <QMessageBox>






#define SOFTWARE_VERSION 100



bool isipAddr_sameSegment(const QString & ip1,const QString & ip2);


sshtest::sshtest(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sshtest)
{
    ui->setupUi(this);

    ui->stackedWidget->setCurrentIndex(0);

    objarrays_init();
    getlockIp();
    qDebug()<< localip_list;

    //ui->localhost_iplist->
    ui->localip_comboBox->setEditable(true);  //可编辑
    ui->localip_comboBox->addItems(localip_list);

    //限制输入数字
    ui->lineEdit_2->setValidator(new QIntValidator(0,254,this));
    ui->lineEdit_3->setValidator(new QIntValidator(0,254,this));
}



sshtest::~sshtest()
{
    delete ui;
}



void sshtest::objarrays_init(void)
{
    int i;
    connect_btn[0] = ui->m_pBtnConnect_1;
    connect_btn[1] = ui->m_pBtnConnect_2;
    connect_btn[2] = ui->m_pBtnConnect_3;
    connect_btn[3] = ui->m_pBtnConnect_4;
    connect_btn[4] = ui->m_pBtnConnect_5;
    connect_btn[5] = ui->m_pBtnConnect_6;
    connect_btn[6] = ui->m_pBtnConnect_7;
    connect_btn[7] = ui->m_pBtnConnect_8;
    connect_btn[8] = ui->m_pBtnConnect_9;
    connect_btn[9] = ui->m_pBtnConnect_10;
    connect_btn[10] = ui->m_pBtnConnect_11;
    connect_btn[11] = ui->m_pBtnConnect_12;
    connect_btn[12] = ui->m_pBtnConnect_13;
    connect_btn[13] = ui->m_pBtnConnect_14;
    connect_btn[14] = ui->m_pBtnConnect_15;
    connect_btn[15] = ui->m_pBtnConnect_16;
    connect_btn[16] = ui->m_pBtnConnect_17;
    connect_btn[17] = ui->m_pBtnConnect_18;
    connect_btn[18] = ui->m_pBtnConnect_19;
    connect_btn[19] = ui->m_pBtnConnect_20;

    ping_btn[0] = ui->pingButton_1;
    ping_btn[1] = ui->pingButton_2;
    ping_btn[2] = ui->pingButton_3;
    ping_btn[3] = ui->pingButton_4;
    ping_btn[4] = ui->pingButton_5;
    ping_btn[5] = ui->pingButton_6;
    ping_btn[6] = ui->pingButton_7;
    ping_btn[7] = ui->pingButton_8;
    ping_btn[8] = ui->pingButton_9;
    ping_btn[9] = ui->pingButton_10;
    ping_btn[10] = ui->pingButton_11;
    ping_btn[11] = ui->pingButton_12;
    ping_btn[12] = ui->pingButton_13;
    ping_btn[13] = ui->pingButton_14;
    ping_btn[14] = ui->pingButton_15;
    ping_btn[15] = ui->pingButton_16;
    ping_btn[16] = ui->pingButton_17;
    ping_btn[17] = ui->pingButton_18;
    ping_btn[18] = ui->pingButton_19;
    ping_btn[19] = ui->pingButton_20;

    error_count_lab[0] = ui->error_count_1;
    error_count_lab[1] = ui->error_count_2;
    error_count_lab[2] = ui->error_count_3;
    error_count_lab[3] = ui->error_count_4;
    error_count_lab[4] = ui->error_count_5;
    error_count_lab[5] = ui->error_count_6;
    error_count_lab[6] = ui->error_count_7;
    error_count_lab[7] = ui->error_count_8;
    error_count_lab[8] = ui->error_count_9;
    error_count_lab[9] = ui->error_count_10;
    error_count_lab[10] = ui->error_count_11;
    error_count_lab[11] = ui->error_count_12;
    error_count_lab[12] = ui->error_count_13;
    error_count_lab[13] = ui->error_count_14;
    error_count_lab[14] = ui->error_count_15;
    error_count_lab[15] = ui->error_count_16;
    error_count_lab[16] = ui->error_count_17;
    error_count_lab[17] = ui->error_count_18;
    error_count_lab[18] = ui->error_count_19;
    error_count_lab[19] = ui->error_count_20;



    ip_text[0] = ui->ip_Text_1;
    ip_text[1] = ui->ip_Text_2;
    ip_text[2] = ui->ip_Text_3;
    ip_text[3] = ui->ip_Text_4;
    ip_text[4] = ui->ip_Text_5;
    ip_text[5] = ui->ip_Text_6;
    ip_text[6] = ui->ip_Text_7;
    ip_text[7] = ui->ip_Text_8;
    ip_text[8] = ui->ip_Text_9;
    ip_text[9] = ui->ip_Text_10;
    ip_text[10] = ui->ip_Text_11;
    ip_text[11] = ui->ip_Text_12;
    ip_text[12] = ui->ip_Text_13;
    ip_text[13] = ui->ip_Text_14;
    ip_text[14] = ui->ip_Text_15;
    ip_text[15] = ui->ip_Text_16;
    ip_text[16] = ui->ip_Text_17;
    ip_text[17] = ui->ip_Text_18;
    ip_text[18] = ui->ip_Text_19;
    ip_text[19] = ui->ip_Text_20;

    status_led[0] = ui->status_led_1;   //正常异常状态
    status_led[1] = ui->status_led_2;
    status_led[2] = ui->status_led_3;   //正常异常状态
    status_led[3] = ui->status_led_4;
    status_led[4] = ui->status_led_5;   //正常异常状态
    status_led[5] = ui->status_led_6;
    status_led[6] = ui->status_led_7;   //正常异常状态
    status_led[7] = ui->status_led_8;
    status_led[8] = ui->status_led_9;   //正常异常状态
    status_led[9] = ui->status_led_10;
    status_led[10] = ui->status_led_11;   //正常异常状态
    status_led[11] = ui->status_led_12;
    status_led[12] = ui->status_led_13;   //正常异常状态
    status_led[13] = ui->status_led_14;
    status_led[14] = ui->status_led_15;   //正常异常状态
    status_led[15] = ui->status_led_16;
    status_led[16] = ui->status_led_17;   //正常异常状态
    status_led[17] = ui->status_led_18;
    status_led[18] = ui->status_led_19;   //正常异常状态
    status_led[19] = ui->status_led_20;



    icmp_count[0] = ui->icmp_count_1;    //icmp序号
    icmp_count[1] = ui->icmp_count_2;
    icmp_count[2] = ui->icmp_count_3;    //icmp序号
    icmp_count[3] = ui->icmp_count_4;
    icmp_count[4] = ui->icmp_count_5;    //icmp序号
    icmp_count[5] = ui->icmp_count_6;
    icmp_count[6] = ui->icmp_count_7;    //icmp序号
    icmp_count[7] = ui->icmp_count_8;
    icmp_count[8] = ui->icmp_count_9;    //icmp序号
    icmp_count[9] = ui->icmp_count_10;
    icmp_count[10] = ui->icmp_count_11;    //icmp序号
    icmp_count[11] = ui->icmp_count_12;
    icmp_count[12] = ui->icmp_count_13;    //icmp序号
    icmp_count[13] = ui->icmp_count_14;
    icmp_count[14] = ui->icmp_count_15;    //icmp序号
    icmp_count[15] = ui->icmp_count_16;
    icmp_count[16] = ui->icmp_count_17;    //icmp序号
    icmp_count[17] = ui->icmp_count_18;
    icmp_count[18] = ui->icmp_count_19;    //icmp序号
    icmp_count[19] = ui->icmp_count_20;

    bigpack[0] = ui->bigpack_1;   //大包复选框
    bigpack[1] = ui->bigpack_2;
    bigpack[2] = ui->bigpack_3;   //大包复选框
    bigpack[3] = ui->bigpack_4;
    bigpack[4] = ui->bigpack_5;   //大包复选框
    bigpack[5] = ui->bigpack_6;
    bigpack[6] = ui->bigpack_7;   //大包复选框
    bigpack[7] = ui->bigpack_8;
    bigpack[8] = ui->bigpack_9;   //大包复选框
    bigpack[9] = ui->bigpack_10;
    bigpack[10] = ui->bigpack_11;   //大包复选框
    bigpack[11] = ui->bigpack_12;
    bigpack[12] = ui->bigpack_13;   //大包复选框
    bigpack[13] = ui->bigpack_14;
    bigpack[14] = ui->bigpack_15;   //大包复选框
    bigpack[15] = ui->bigpack_16;
    bigpack[16] = ui->bigpack_17;   //大包复选框
    bigpack[17] = ui->bigpack_18;
    bigpack[18] = ui->bigpack_19;   //大包复选框
    bigpack[19] = ui->bigpack_20;

    time_val_lab[0] = ui->time_val_1;     //时间显示
    time_val_lab[1] = ui->time_val_2;
    time_val_lab[2] = ui->time_val_3;     //时间显示
    time_val_lab[3] = ui->time_val_4;
    time_val_lab[4] = ui->time_val_5;     //时间显示
    time_val_lab[5] = ui->time_val_6;
    time_val_lab[6] = ui->time_val_7;     //时间显示
    time_val_lab[7] = ui->time_val_8;
    time_val_lab[8] = ui->time_val_9;     //时间显示
    time_val_lab[9] = ui->time_val_10;
    time_val_lab[10] = ui->time_val_11;     //时间显示
    time_val_lab[11] = ui->time_val_12;
    time_val_lab[12] = ui->time_val_13;     //时间显示
    time_val_lab[13] = ui->time_val_14;
    time_val_lab[14] = ui->time_val_15;     //时间显示
    time_val_lab[15] = ui->time_val_16;
    time_val_lab[16] = ui->time_val_17;     //时间显示
    time_val_lab[17] = ui->time_val_18;
    time_val_lab[18] = ui->time_val_19;     //时间显示
    time_val_lab[19] = ui->time_val_20;


    //用于设置ip的
    setIP_Text[0] = ui->setIP_Text_1;
    setIP_Text[1] = ui->setIP_Text_2;
    setIP_Text[2] = ui->setIP_Text_3;
    setIP_Text[3] = ui->setIP_Text_4;
    setIP_Text[4] = ui->setIP_Text_5;
    setIP_Text[5] = ui->setIP_Text_6;
    setIP_Text[6] = ui->setIP_Text_7;
    setIP_Text[7] = ui->setIP_Text_8;
    setIP_Text[8] = ui->setIP_Text_9;
    setIP_Text[9] = ui->setIP_Text_10;
    setIP_Text[10] = ui->setIP_Text_11;
    setIP_Text[11] = ui->setIP_Text_12;
    setIP_Text[12] = ui->setIP_Text_13;
    setIP_Text[13] = ui->setIP_Text_14;
    setIP_Text[14] = ui->setIP_Text_15;
    setIP_Text[15] = ui->setIP_Text_16;
    setIP_Text[16] = ui->setIP_Text_17;
    setIP_Text[17] = ui->setIP_Text_18;
    setIP_Text[18] = ui->setIP_Text_19;
    setIP_Text[19] = ui->setIP_Text_20;



    for(i=0;i<CARD_NUM;i++)
    {
        ping_btn[i]->setEnabled(false);    //ping 按键不可用
        ip_text[i]->setText("192.168.2.101");    //配置ip
        bigpack[i]->setChecked(true);     //大包勾选
        m_bConnectState[i] = false;      //连接状态为未连接
        m_sshSocket[i] = NULL;          //指针清空
        m_bPingState[i] = false;        //未开始ping
        error_count[i] = 0;             //错误计数清零
        m_stopconnectState[i] = true;    //停止连接
    //    ip_text[i]->setReadOnly(true);
    //    connect(bigpack[i],SIGNAL(stateChanged(int)),this,SLOT(slot_bigpack_stateChanged(int)));
    }

    ui->checkBox->setChecked(true);
    ui->hostip_text->setText(host_ip);
    //qDebug() << QString("软件编译时间 %1 %2 版本号:%3").arg(__DATE__).arg(__TIME__).arg(QString().setNum(double(SOFTWARE_VERSION)/100.0,'f',2));
    ui->versionstring->setText(QString("软件编译时间 %1 %2 版本号:%3").arg(__DATE__).arg(__TIME__).arg(QString().setNum(double(SOFTWARE_VERSION)/100.0,'f',2)));

    Get_FileConfig(0);  //读一次配置文件
}




//获取本机ip列表
void sshtest::getlockIp(void)
{
    //获取IPv4地址
    QString hostname = QHostInfo::localHostName();
    QHostInfo hostinfo = QHostInfo::fromName(hostname);
    QString localip = "";
    QList<QHostAddress> addList = hostinfo.addresses();
    if(!addList.isEmpty())
        for(int i = 0;i<addList.size();i++)
        {
            QHostAddress aHost = addList.at(i);
            if(QAbstractSocket::IPv4Protocol == aHost.protocol())
            {
                localip = aHost.toString();
                //qDebug()<< localip;
                localip_list << localip;

                if(isipAddr_sameSegment(localip,ip_text[0]->text()))
                {
                    host_ip = localip;
                    ui->hostip_text->setText(localip);
                }

             //   break;
            }
        }
    return ;
}



//开始ping的按钮，或者连接上，也会自动开始ping
void sshtest::start_ping(unsigned int index)
{
    if(index >= CARD_NUM)
        return ;
    if(!m_bPingState[index])
    {
        QString strCmd = "ping  ";
        if(bigpack[index]->isChecked())
            strCmd += " -s 65500 ";
        strCmd += host_ip;
        strCmd += " & \n"; //添加回车
        emit sigSend(index,strCmd);
        //m_sshSocket[index]->sshdateSend(strCmd);
        error_count[index] = 0;
        error_count_lab[index]->setText("0");
        m_bPingState[index] = true;
        ping_btn[index]->setText("停止ping");
        bigpack[index]->setEnabled(false);  //不可用了
        ui->checkBox->setEnabled(false);  //全选大包也不可用了
    }
}





//连接状态发生改变，槽函数
void sshtest::slotConnectStateChanged(bool bState,int index, QString strIp, int nPort)
{
    Q_UNUSED(strIp)
    Q_UNUSED(nPort)

    m_bConnectState[index] = bState;

    if(m_bConnectState[index])
    {
        qDebug() << "已连接";
        connect_btn[index]->setText("断开");
        connect_btn[index]->setStyleSheet("QPushButton{background-color:#00ff00;}");
        //连接之后直接开ping
        QThread::sleep(1);
        start_ping(index);
        ping_btn[index]->setEnabled(true);
    }
    else
    {
        qDebug() << "已断开"; ;
        if(!m_stopconnectState[index])   //没有点击stop连接按钮
            connect_btn[index]->setText("正在连接");
        else
        {
        //    bigpack[index]->setEnabled(true);  //可用了
            connect_btn[index]->setText("连接");
        }
        connect_btn[index]->setStyleSheet("QPushButton{background-color:#ff0000;}");
        m_bPingState[index] = false;
        ping_btn[index]->setText("开始ping");
        ping_btn[index]->setEnabled(false);
        bigpack[index]->setEnabled(true);  //可用了
     //   ui->checkBox->setEnabled(true);   //大包全选可用
    }
}


//槽函数，收到了客户端的数据
void sshtest::slotDataArrived(QString strMsg,int index, QString strIp, int nPort)
{
    Q_UNUSED(strIp)
    Q_UNUSED(nPort)

    if(strMsg.endsWith("data.\r\n") || strMsg.startsWith("ping",Qt::CaseSensitive)  || strMsg.contains("root", Qt::CaseSensitive))
    {
        return;
    }

    if(strMsg.contains("timed out", Qt::CaseSensitive))
    {
        error_count[index] ++;
        error_count_lab[index]->setText(QString::number(error_count[index]));
        return;
    }

    if(m_bPingState[index])
    {
        QStringList myList = strMsg.split(' ');

        if(myList.length()>6)
        {
            qDebug()<< myList[6];    //time
            QStringList myList1 = myList[6].split('=');
            if(myList1.length()>1)
            {
                time_val_lab[index]->setText(myList1[1]);
                status_led[index]->setText("板"+QString::number(index+1)+"正常");
                status_led[index]->setStyleSheet("QLabel{background-color:#00ff00;border-radius:5px;}");
            }
            else
            {
                status_led[index]->setText("板"+QString::number(index+1)+"异常");
                status_led[index]->setStyleSheet("QLabel{background-color:#ff0000;border-radius:5px;}");
                error_count[index] ++;
                error_count_lab[index]->setText(QString::number(error_count[index]));
            }
            myList1 = myList[4].split('=');   //icmp_seq
            if(myList1.length()>1)
                icmp_count[index]->setText(myList1[1]);
        }

    }
    //qDebug()<< "slotDataArrived = " << strMsg << "\nip = " << strIp;
//    m_pTextEdit->append(strMsg);
//    m_pTextEdit->moveCursor(QTextCursor::End);
}



//断开连接功能函数，按钮
void sshtest::disconnect_func(int index)
{
    if(m_bConnectState[index])  //已经连接了，则断开
    {
        m_bConnectState[index] = false;
        m_bPingState[index] = false;
        emit sigDisconnected(index);//断开连接
        connect_btn[index]->setText("连接");
        connect_btn[index]->setStyleSheet("QPushButton{background-color:#ff0000;}");
        ping_btn[index]->setText("开始ping");
        ping_btn[index]->setEnabled(false);
        ip_text[index]->setEnabled(true);   //ip部分能修改
        m_stopconnectState[index] = true;    //停止连接
    }
}

//连接函数，按钮
void sshtest::connect_func(int index)
{
    QString strIp = ip_text[index]->text();
    if(!m_bConnectState[index])  //已经连接了，则断开
    {
        m_sshSocket[index] = new CConnectionForSshClient(strIp,index,22,strPwd,strUser);
        m_sshSocket[index]->init();


        //qDebug()<< "connect";
        //连接状态改变
        connect(m_sshSocket[index],SIGNAL(sigConnectStateChanged(bool,int,QString,int)),
                this,SLOT(slotConnectStateChanged(bool,int,QString,int)));

        //收到数据
        connect(m_sshSocket[index],SIGNAL(sigDataArrived(QString,int ,QString , int )),
                this,SLOT(slotDataArrived(QString ,int,QString , int )));

        //发送
        connect(this,SIGNAL(sigSend(int,QString)),m_sshSocket[index],SLOT(slotSend(int,QString)));

        //断开连接
        connect(this,SIGNAL(sigDisconnected(int)),m_sshSocket[index],SLOT(slotDisconnected(int)));

        //防止重复进入
        m_bConnectState[index] = true;

        ip_text[index]->setEnabled(false);   //ip部分不能修改
        connect_btn[index]->setText("正在连接");
        m_stopconnectState[index] = false;    //停止连接
    }
//    else  //再点一次
//    {
//        disconnect_func(index);
//    }
}



//连接按钮
void sshtest::connectButton_func(int index)
{
    if(m_bConnectState[index])  //已经连接了，则断开
    {
        disconnect_func(index);
        connect_btn[index]->setText("连接");
    }
    else
    {
        connect_func(index);
    }
}


//板1的连接按钮
void sshtest::on_m_pBtnConnect_1_clicked()
{
//    int index = 0;
    connectButton_func(0);
}


//ping按钮的功能函数，点击ping按钮的操作
void sshtest::pingButton_func(int index)
{
    if(m_bConnectState[index] )
    {
        if(!m_bPingState[index]){
            start_ping(index);

        }
        else if(m_bPingState[index]){
            QString strCmd = "killall ping";   //"kill -9 `ps aux | grep ping | grep -v grep |head -n 1 |awk '{printf $1}'`";//
            strCmd += "\n"; //添加回车
            m_bPingState[index] = false;
            ping_btn[index]->setText("开始ping");
            bigpack[index]->setEnabled(true);
            emit sigSend(index,strCmd);
        }
    }
}




//开始ping，停止ping
void sshtest::on_pingButton_1_clicked()
{
//    int index = 0;
    pingButton_func(0);
}



void sshtest::on_m_pBtnConnect_2_clicked()
{
    connectButton_func(1);
}



void sshtest::on_pingButton_2_clicked()
{
//    qDebug()<< "pingButton_2_clicked";
    pingButton_func(1);
}


//判断IP地址是否合法
bool ipAddrIsOK_1(const QString & ip)
{
    if (ip.isEmpty())
    {
        return false;
    }

    QStringList list = ip.split('.');
    if (list.size() != 4)
    {
        return false;
    }

    for (const auto& num : list)
    {
        bool ok = false;
        int temp = num.toInt(&ok);
        if (!ok || temp < 0 || temp > 255)
        {
            return false;
        }
    }

    return true;
}




bool isipAddr_sameSegment(const QString & ip1,const QString & ip2)
{
    int i,j;

    if (ip1.isEmpty() || ip1.isEmpty())
    {
        return false;
    }

    i = ip1.lastIndexOf('.');
    j = ip2.lastIndexOf('.');

    if(i == j)  //长度是否相同
    {
        QString str1 = ip1.mid(0,i);
        QString str2 = ip2.mid(0,i);

        qDebug()<< str1;
        qDebug()<< str2;
        if(str1 == str2)  //相等吗
        {
            return true;
        }

    }
    return false;
}




void sshtest::ip_changed(int index)
{
    QString ipstr =ip_text[index]->text() ;

    if(!ipAddrIsOK_1(ipstr))  //ip不合法
    {
        return;
    }


    int i = ipstr.lastIndexOf('.');
    QString str;
    qDebug()<< "i = " << i;

    if(i > 0)
    {
        qDebug()<< ipstr.mid(0,i);
        str = ipstr.mid(0,i);
    }
//    QString


}



void sshtest::on_hostip_text_textEdited(const QString &arg1)
{
    qDebug()<< arg1;
    if(ipAddrIsOK_1(arg1))
    {
        host_ip = arg1;
    }
}



void sshtest::on_m_pBtnConnect_3_clicked()
{
    connectButton_func(2);
}

void sshtest::on_m_pBtnConnect_4_clicked()
{
    connectButton_func(3);
}

void sshtest::on_m_pBtnConnect_5_clicked()
{
    connectButton_func(4);
}

void sshtest::on_m_pBtnConnect_6_clicked()
{
    connectButton_func(5);
}

void sshtest::on_m_pBtnConnect_7_clicked()
{
    connectButton_func(6);
}

void sshtest::on_m_pBtnConnect_8_clicked()
{
    connectButton_func(7);
}

void sshtest::on_m_pBtnConnect_9_clicked()
{
    connectButton_func(8);
}

void sshtest::on_m_pBtnConnect_10_clicked()
{
    connectButton_func(9);
}

void sshtest::on_m_pBtnConnect_11_clicked()
{
    connectButton_func(10);
}

void sshtest::on_m_pBtnConnect_12_clicked()
{
    connectButton_func(11);
}

void sshtest::on_m_pBtnConnect_13_clicked()
{
    connectButton_func(12);
}

void sshtest::on_m_pBtnConnect_14_clicked()
{
    connectButton_func(13);
}

void sshtest::on_m_pBtnConnect_15_clicked()
{
    connectButton_func(14);
}

void sshtest::on_m_pBtnConnect_16_clicked()
{
    connectButton_func(15);
}

void sshtest::on_m_pBtnConnect_17_clicked()
{
    connectButton_func(16);
}

void sshtest::on_m_pBtnConnect_18_clicked()
{
    connectButton_func(17);
}

void sshtest::on_m_pBtnConnect_19_clicked()
{
    connectButton_func(18);
}

void sshtest::on_m_pBtnConnect_20_clicked()
{
    connectButton_func(19);
}



//全部开始按钮
void sshtest::on_pushButton_clicked()
{
    int i;
//    ui->pushButton->setEnabled(false);
    for(i=0;i<CARD_NUM;i++)
    {
        connect_func(i);
    //    m_stopconnectState[i] = false;    //连接
    //    QThread::sleep(1);
    }
//    ui->pushButton->setEnabled(true);
}


//全部停止按钮
void sshtest::on_pushButton_2_clicked()
{
    int i;
    for(i=0;i<CARD_NUM;i++)
    {
        disconnect_func(i);
        bigpack[i]->setEnabled(true);  //不可用了
    }
    ui->checkBox->setEnabled(true);  //全选大包也不可用了
}


//设置按钮
void sshtest::on_pushButton_3_clicked()
{
    int i;

    for(i=0;i<CARD_NUM;i++)
    {
        if(m_bConnectState[i])
            return;
    }

    ui->stackedWidget->setCurrentIndex(1);
}

//使用说明按钮
void sshtest::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    Get_FileConfig(1);  //再读一次配置文件
}

//使用说明页面中的返回
void sshtest::on_pushButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);

//    ui->hostip_text->setText(host_ip);
}

//设置页面中的返回
void sshtest::on_pushButton_6_clicked()
{
    if(!isipAddr_sameSegment(host_ip,ip_text[0]->text()))   //是同一个网段吗？
    {
        QMessageBox::critical(this, "电脑主机IP网段不一致", "主机IP网段与板卡1网段不一致!!!");
        return;
    }
    ui->stackedWidget->setCurrentIndex(0);
    Get_FileConfig(0);  //再读一次配置文件

    ui->hostip_text->setText(host_ip);
}

//void sshtest::slot_bigpack_stateChanged(int arg1)
//{
////    if(!arg1)
////        ui->checkBox->setChecked(false);
//}

void sshtest::on_pingButton_3_clicked()
{
    pingButton_func(2);
}

void sshtest::on_pingButton_4_clicked()
{
    pingButton_func(3);
}

void sshtest::on_pingButton_5_clicked()
{
    pingButton_func(4);
}

void sshtest::on_pingButton_6_clicked()
{
    pingButton_func(5);
}

void sshtest::on_pingButton_7_clicked()
{
    pingButton_func(6);
}

void sshtest::on_pingButton_8_clicked()
{
    pingButton_func(7);
}

void sshtest::on_pingButton_9_clicked()
{
    pingButton_func(8);
}

void sshtest::on_pingButton_10_clicked()
{
    pingButton_func(9);
}

void sshtest::on_pingButton_11_clicked()
{
    pingButton_func(10);
}

void sshtest::on_pingButton_12_clicked()
{
    pingButton_func(11);
}

void sshtest::on_pingButton_13_clicked()
{
    pingButton_func(12);
}

void sshtest::on_pingButton_14_clicked()
{
    pingButton_func(13);
}

void sshtest::on_pingButton_15_clicked()
{
    pingButton_func(14);
}

void sshtest::on_pingButton_16_clicked()
{
    pingButton_func(15);
}

void sshtest::on_pingButton_17_clicked()
{
    pingButton_func(16);
}

void sshtest::on_pingButton_18_clicked()
{
    pingButton_func(17);
}

void sshtest::on_pingButton_19_clicked()
{
    pingButton_func(18);
}

void sshtest::on_pingButton_20_clicked()
{
    pingButton_func(19);
}

void sshtest::on_checkBox_stateChanged(int arg1)
{
    int i;
    if(arg1)
    {
        for(i=0;i<CARD_NUM;i++)
            bigpack[i]->setChecked(true);
    }
    else
    {
        for(i=0;i<CARD_NUM;i++)
            bigpack[i]->setChecked(false);

    }
}




//****************************设置页****************************************************************************

/*
    配置文件内容示意：
    21:192.168.1.100   //电脑ip
    1:192.168.1.101   //板1的ip
    20:192.168.1.120  //板20的ip


    where 表示读取的位置，0表示主显示页，1表示配置页,其他表示同时更新为配置ip
*/


int sshtest::Get_FileConfig(int where)
{
    QString line= "";
    int ret = -1;
    int index = 0;


    QFile qfile(CONFIG_FILE);

    if(qfile.open(QIODevice::ReadOnly))  //文件打开成功
    {
        //qDebug()<<"open!!";
        QTextStream stream(&qfile);
        while(!stream.atEnd())
        {
            line = stream.readLine();   //读取一行
            //qDebug()<<"line = " << line;
            if(line.startsWith("#"))   //#号开头是注释
            {
                continue;
            }

            if(line.length() < 7)  //小于5个字节的，直接跳过
            {
                continue;
            }

            QStringList myList = line.split(':');
            if(myList.length() > 1)   //至少有1个
            {
                index = myList[0].toInt();
             //   qDebug()<<"index = " << index;
                if(index > 0 && index < 21)   //首先这个数字要合法
                {
                    index -= 1;
                    if(ipAddrIsOK_1(myList[1]))  //ip合法
                    {
                        //读出来
                        if(where == 0)
                        {
                            ip_text[index]->setText(myList[1]);
                        }
                        else if(where == 1)
                        {
                            setIP_Text[index]->setText(myList[1]);

                        }
                        else
                        {
                            ip_text[index]->setText(myList[1]);
                            setIP_Text[index]->setText(myList[1]);
                        }
                    }
                    else
                    {
                        ui->status_info->setText("ipError:"+line);
                        QThread::sleep(1);  //停留1s
                    }
                }
                else if(index == 21)  //主机ip
                {
                    qDebug()<<"index == 21";
                }
                else
                {
                    ui->status_info->setText("indexError:"+line);
                    QThread::sleep(1);  //停留1s
                }
            }
        }
        qfile.close();
        ret = 0;
    }
    else
    {
        if(ui->stackedWidget->currentIndex() == 1)
            QMessageBox::critical(this, "文件打开失败", "读取配置文件错误!!!");
        ret = -1;
    }
    return ret;
}




void sshtest::Set_FileConfig(void)
{
//    QString strAll;
//    QString line;
//    QStringList list;
    QFile qfile(CONFIG_FILE);
    //char replace_flag = 0;
    int i;

    //判断ip是否都合法，合法才能写入
    for(i=0;i<CARD_NUM;i++)
    {
        if(!ipAddrIsOK_1(setIP_Text[i]->text()))
        {
            QMessageBox::critical(this, "ip配置不合法", "请重新修改板" +QString::number(i+1)+" IP!!!");
            return;
        }
    }


    //2.把内容填入
    if(qfile.open(QIODevice::WriteOnly | QIODevice::Text ))  //写入文件时替换，不存在时追加到最后一行
    {
        QTextStream stream(&qfile);
        //list = strAll.split("\n");
        stream << "# #号开头的行表示注释 \n";
        stream << "# 正常的示例应该是 序号:IP ,其中序号1-20对应某个开发板，21表示电脑ip，板的ip与电脑ip应该在同一个网段 \n";

        for(i=0;i<CARD_NUM;i++)
        {
             stream << QString::number(i+1) + ":"+setIP_Text[i]->text()+"\n";
        }


        qfile.close();
    }
    else
    {
          ui->status_info->setText("save config file open Error!!!!");
          QMessageBox::critical(this, "文件打开失败", "读取配置文件错误!!!");
    }
    QMessageBox::information(this, "配置保存成功", "配置保存成功!!!");

    return ;
}




//设置页读取配置文件
void sshtest::on_pushButton_8_clicked()
{
    Get_FileConfig(1);
}

//设置页，保存当前配置
void sshtest::on_pushButton_9_clicked()
{
   Set_FileConfig();
}


//本地ip被修改
void sshtest::on_localip_comboBox_currentTextChanged(const QString &arg1)
{
    qDebug()<< "localip" << arg1;
    if(ui->stackedWidget->currentIndex() == 1)
    {
        if(!ipAddrIsOK_1(arg1))
        {
            QMessageBox::critical(this, "ip配置不合法", "请重新修改主机IP:" + arg1);
            return;
        }

        host_ip = arg1;
        qDebug()<< "host_ip" << host_ip;
    }
}



//一键配置网段，修改第三个字段
void sshtest::on_pushButton_10_clicked()
{
    int i;

    for(i=0;i<CARD_NUM;i++)
    {
        if(setIP_Text[i]->text().isEmpty()) //空的就不管了
        {
            continue;
        }
        else
        {

        }
    }
}
