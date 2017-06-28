#ifndef LEDCONF_H
#define LEDCONF_H
#include <stdio.h>
#include <QString>
#include <QJsonDocument>
#include <QDebug>
#include <QFile>

class LedConf
{
    //数据区
public:
    static LedConf *m_LedConf;
private:

    QVariantMap m_ConfMap;       //配置文件map
    //方法区
protected:
    LedConf();
private:
    ~LedConf();
    bool ReadLedJson();          //读取ledjson配置文件

public:
    static  LedConf * GetInstance();

    //获取属性
    QString GetId();            //ID
    QString GetName();          //名称
    int GetX();                 //横坐标
    int GetY();                 //纵坐标
    int GetWidth ();            //宽度
    int GetHeight();            //高度
    int GetPriority();          //优先级
    int GetBlink();             //1:闪烁 0:持续
    bool GetState();            //true代表激活，false代表不激活
    int GetResolution();        //分辨率
    QString GetMessage();       //提示信息
    QString GetMusic();         //音乐路径
};

#endif // LEDCONF_H
