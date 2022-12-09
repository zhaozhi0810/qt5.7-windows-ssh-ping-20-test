#include "config_operation.h"

Config_Operation::Config_Operation()
{

}

//获取配置文件是否记录日志，正常情况下，为了减少对硬盘的读写，不记录日志
//但是为了排除问题，可以开启日志记录功能。，日志功能写入配置文件中
//int Config_Operation::Get_FileConfig_log(int* log)
//{
//    QString line= "";
//    int ret = 0;

//    QFile qfile(CONFIG_FILE);

//    if(qfile.open(QIODevice::ReadOnly))  //文件打开成功
//    {
//        QTextStream stream(&qfile);
//        while(!stream.atEnd())
//        {
//            line = stream.readLine();   //读取一行
//            if(line.length() < 5)  //小于5个字节的，直接跳过
//            {
//                continue;
//            }
//            if(line.startsWith("-logenable"))   //减号开头是密码
//            {
//                if(log) //指针不为空
//                {
//                    *log = 1;
//                }
//            }
//        }
//        qfile.close();
//    }
//    return ret;
//}


//void Config_Operation::Set_FileConfig_log(int log)
//{
//    QString strAll;
////    QString line;
//    QStringList list;
//    QFile qfile(CONFIG_FILE);
//    char get_flag = 0;


//    //1.先把数据全部读出来，再替换掉
//    if(qfile.open(QIODevice::ReadOnly | QIODevice::Text ))  //文件打开成功
//    {
//        QTextStream stream(&qfile);
//        strAll = stream.readAll();   //全部读出来

//        qfile.close();
//    }
//    else   //没有这个文件，不考虑这个 2022-03-28，配置文件是肯定存在的！！！！
//    {
//        //nothing to do
//        return;
//    }

//    //2.把内容填入
//    if(qfile.open(QIODevice::WriteOnly | QIODevice::Text ))  //写入文件时替换，不存在时追加到最后一行
//    {
//        QTextStream stream(&qfile);
//        list = strAll.split("\n");

//        for(int i=0;i<list.count();i++) //遍历每一行
//        {
//            if(list.at(i).length() < 5)  //小于5个字节的，直接跳过
//            {
//                continue;
//            }
//            if(list.at(i).startsWith("-logenable"))  //日志记录是能的开头部分
//            {
//                get_flag = 1;   //找到日志文件中有这样的标识
//                if(!log)   //如果是取消的话
//                    continue;   //跳过这句话
//            }
//            stream << list.at(i)<<'\n';  //其他的照写
//        }

//        if(!get_flag && log) //文件中没有设置，但是功能又被设置 日志功能使能
//        {
//            stream << "-logenable\n";  //加入这句

//        }
//        qfile.close();
//    }
//    return ;
//}





int Config_Operation::Get_FileConfig(void)
{
    QString line= "";
    int ret = 0;

    QFile qfile(CONFIG_FILE);

    if(qfile.open(QIODevice::ReadOnly))  //文件打开成功
    {
        QTextStream stream(&qfile);
        while(!stream.atEnd())
        {
            line = stream.readLine();   //读取一行
            if(line.length() < 5)  //小于5个字节的，直接跳过
            {
                continue;
            }
            if(line.startsWith("+"))   //减号开头是密码
            {
                //qDebug() << "pass = ";
//                if(&pass)   //(!pass.isNull())
//                {
//                    pass =  line.mid(1);   //去除减号
//                //qDebug() << "pass = " << pass;
//                    ret ++;
//                }
            }
            else if(line.startsWith("yangran"))   //查找关键字
            {
//                if(yangran)
//                {
//                    *yangran = line.mid(7).toInt();

//                    ret ++;
//                }
            }
            else if(line.startsWith("benji"))
            {
//                if(benji)
//                {
//                    *benji = line.mid(5).toInt();
//                    ret ++;
//                }
            }
            else if(line.startsWith("zhukong"))
            {
//                if(zhukong)
//                {
//                    *zhukong = line.mid(7).toInt();
//                    ret ++;
//                }
            }
        }
        qfile.close();
    }
    return ret;
}



void Config_Operation::Set_FileConfig(void)
{
    QString strAll;
//    QString line;
    QStringList list;
    QFile qfile(CONFIG_FILE);
    //char replace_flag = 0;


    //1.先把数据全部读出来，再替换掉
    if(qfile.open(QIODevice::ReadOnly | QIODevice::Text ))  //文件打开成功
    {
        QTextStream stream(&qfile);
        strAll = stream.readAll();   //全部读出来

        qfile.close();
    }


    //2.把内容填入
    if(qfile.open(QIODevice::WriteOnly | QIODevice::Text ))  //写入文件时替换，不存在时追加到最后一行
    {
        QTextStream stream(&qfile);
        list = strAll.split("\n");

//        for(int i=0;i<list.count();i++) //遍历每一行
//        {
//            if(list.at(i).length() < 5)  //小于5个字节的，直接跳过
//            {
//                continue;
//            }
//            if(list.at(i).startsWith("+"))  //密码的开头部分
//            {
//                if(!pass.isEmpty())
//                {
//                    stream << "+" + pass <<'\n';  //替换
//                    replace_flag |= 1;
//                    continue;
//                }
//                replace_flag |= 1;
//            }
//            else if(list.at(i).startsWith("yangran"))  //替换掉
//            {
//                if(yangran)
//                {
//                    stream << "yangran " + QString::number(*yangran)  <<'\n';  //替换
//                    replace_flag |= 2;
//                    continue;
//                }
//            }
//            else if(list.at(i).startsWith("zhukong"))  //替换掉
//            {
//                if(zhukong)
//                {
//                    stream << "zhukong " + QString::number(*zhukong)  <<'\n';  //替换

//                    replace_flag |= 4;
//                    continue;
//                }
//            }
//            else if(list.at(i).startsWith("benji"))  //替换掉
//            {
//                if(benji)
//                {
//                    stream << "benji " + QString::number(*benji) <<'\n'; //替换
//                    replace_flag |= 8;
//                    continue;
//                }
//            }

           // stream << list.at(i)<<'\n';  //其他的照写

    //    }

        //遍历后，没有找到原来的替代项，直接追加到文件中(这里主要是在配置文件中新增，原来是没有这个项目的情况)
//        if((replace_flag & 1) == 0) //遍历后，没有替换
//        {
//            if(!pass.isEmpty())
//                stream << "+" + pass <<'\n';   //追加到最后一行
//        }
//        if((replace_flag & 2) == 0) //遍历后，没有替换
//        {
//            if(yangran)
//                stream << "yangran " + QString::number(*yangran)  <<'\n';   //追加到最后一行
//        }
//        if((replace_flag & 4) == 0) //遍历后，没有替换
//        {
//            if(zhukong)
//                stream << "zhukong " + QString::number(*zhukong)  <<'\n';   //追加到最后一行 ,写入和读取都是10进制
//        }
//        if((replace_flag & 8) == 0) //遍历后，没有替换
//        {
//            if(benji)
//                stream << "benji " + QString::number(*benji) <<'\n';   //追加到最后一行
//        }

        qfile.close();
    }
    return ;
}

