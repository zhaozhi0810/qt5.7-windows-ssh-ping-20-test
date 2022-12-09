#ifndef CONFIG_OPERATION_H
#define CONFIG_OPERATION_H

#include <QString>
#include <QDebug>
#include <QFile>

#ifdef X86_DEBUG
#define CONFIG_FILE "./cfg.ini"
#else
#define CONFIG_FILE "/apps/cfg.ini"
#endif



class Config_Operation
{
public:
    Config_Operation();

    static int Get_FileConfig(void);
    static void Set_FileConfig(void);
//    static int Get_FileConfig_log(int* log);
//    static void Set_FileConfig_log(int log);
//private:
//    static int zhukong_num ;     //主控节点号
//    static int benji_num ;       //本机节点号
//    static int yangran_num ;     //氧化剂/燃烧剂
//    static QString passwd;

};

#endif // CONFIG_OPERATION_H
