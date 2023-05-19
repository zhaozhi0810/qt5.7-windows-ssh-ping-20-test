#ifndef SSHTEST_H
#define SSHTEST_H

#include <QWidget>
#include "CConnectionForSshClient.h"
#include <QCheckBox>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>


#define CARD_NUM 20  //板卡的数目
#define CONFIG_FILE "./cfg.ini"


namespace Ui {
class sshtest;
}

class sshtest : public QWidget
{
    Q_OBJECT

public:
    explicit sshtest(QWidget *parent = 0);
    ~sshtest();

private slots:
//    void on_pingButton1_clicked();
//    void slotSshConnect();
//    void slotSshSendCmd();
//    void slotClearEdit();
    void slotConnectStateChanged(bool bState,int index,QString strIp,int nPort);
    void slotDataArrived(QString strMsg,int index,QString strIp, int nPort);
    void on_m_pBtnConnect_1_clicked();

//    void on_pushButton_clicked();

    void on_m_pBtnConnect_2_clicked();

    void on_pingButton_1_clicked();

    void on_pingButton_2_clicked();

//    void on_ip_Text_2_editingFinished();

//    void on_ip_Text_1_editingFinished();

    void on_hostip_text_textEdited(const QString &arg1);

    void on_m_pBtnConnect_3_clicked();

    void on_m_pBtnConnect_4_clicked();

    void on_m_pBtnConnect_5_clicked();

    void on_m_pBtnConnect_6_clicked();

    void on_m_pBtnConnect_7_clicked();

    void on_m_pBtnConnect_8_clicked();

    void on_m_pBtnConnect_9_clicked();

    void on_m_pBtnConnect_10_clicked();

    void on_m_pBtnConnect_11_clicked();

    void on_m_pBtnConnect_12_clicked();

    void on_m_pBtnConnect_13_clicked();

    void on_m_pBtnConnect_14_clicked();

    void on_m_pBtnConnect_15_clicked();

    void on_m_pBtnConnect_16_clicked();

    void on_m_pBtnConnect_17_clicked();

    void on_m_pBtnConnect_18_clicked();

    void on_m_pBtnConnect_19_clicked();

    void on_m_pBtnConnect_20_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

 //   void slot_bigpack_stateChanged(int arg1);

    void on_pingButton_3_clicked();

    void on_pingButton_4_clicked();

    void on_pingButton_5_clicked();

    void on_pingButton_6_clicked();

    void on_pingButton_7_clicked();

    void on_pingButton_8_clicked();

    void on_pingButton_9_clicked();

    void on_pingButton_10_clicked();

    void on_pingButton_11_clicked();

    void on_pingButton_12_clicked();

    void on_pingButton_13_clicked();

    void on_pingButton_14_clicked();

    void on_pingButton_15_clicked();

    void on_pingButton_16_clicked();

    void on_pingButton_17_clicked();

    void on_pingButton_18_clicked();

    void on_pingButton_19_clicked();

    void on_pingButton_20_clicked();

    void on_checkBox_stateChanged(int arg1);

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_localip_comboBox_currentTextChanged(const QString &arg1);

    void on_pushButton_10_clicked();

    void on_pushButton_p4_to_p1_clicked();

    void on_pushButton_p4_to_p1_2_clicked();

    void on_pushButton_11_clicked();

signals:
    void sigSend(QString strMsg);
    void sigSend(int index,QString strMsg);
    void sigDisconnected(int index);



private:
    Ui::sshtest *ui;


    bool m_bConnectState[CARD_NUM];
    bool m_bPingState[CARD_NUM];
    bool m_stopconnectState[CARD_NUM];      //停止连接的状态
    CConnectionForSshClient *m_sshSocket[CARD_NUM];
    int error_count[CARD_NUM];
    QPushButton* connect_btn[CARD_NUM] ;  //连接按钮
    QPushButton* ping_btn[CARD_NUM] ;  //ping按钮
    QLabel * error_count_lab[CARD_NUM];  //错误计数
    QLineEdit* ip_text[CARD_NUM+1];    //ip的字符框,多一个本地电脑ip
    QLabel* status_led[CARD_NUM];   //正常异常状态
//    QLabel* error_count[CARD_NUM];   //异常次数
    QLabel* icmp_count[CARD_NUM];    //icmp序号
    QCheckBox* bigpack[CARD_NUM];   //大包复选框
    QLabel* time_val_lab[CARD_NUM];     //时间显示
    QString host_ip = "192.168.0.10";
    QLineEdit* setIP_Text[CARD_NUM];   //设置ip
    QStringList localip_list;
    QString strUser = "root";
    QString strPwd = "123456";

    void start_ping(unsigned int i);
    void getlockIp(void);

    //控件数组初始化
    void objarrays_init(void);
    void pingButton_func(int index);
    void connectButton_func(int index);
    void ip_changed(int index);
    void disconnect_func(int index);   //断开功能
    void connect_func(int index);    //连接功能
    int Get_FileConfig(int where);   //读取本地配置文件
    void Set_FileConfig(void);      //保存配置到文件中
};

#endif // SSHTEST_H
