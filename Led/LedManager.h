#ifndef LEDMANAGER_H
#define LEDMANAGER_H

#include <stdio.h>
#include <QString>
#include <QJsonDocument>
#include <QDebug>
#include <QFile>
#include <QMap>
#include <QList>
#include "Led.h"

class LedManager
{
public:
    static LedManager *m_Manager;
public:
    bool IsExist(QString name);                         //检查配置文件是否定义该LED灯
    bool GetLedByName(QString name,Led &m_Led);         //获取某Led灯配置
    bool ChangeCl15State(QString name,bool cl15State);  //改变某个Ledcl15状态
    void Cl15On();                                      //发动机上电
    void Cl15Off();                                     //发动机掉电
    bool GetLeds(QList<Led> &m_LedList);                //获取定义的LED灯集合
private:
    QVariantMap m_LedMap;                       //配置文件map
    QMap<QString,Led> m_EnableMap;              //name,Led组成的map，存放可用的led
    QMap<QString,Led> m_UnenableMap;            //name,Led组成的map，存放不可用的led（如大灯之类的，必须发动机启动才能点亮，此时置为不可用）
    bool flag_Init;
protected:
    LedManager();
    ~LedManager();
private:
    void Init();
    bool ReadLedJson();                         //读取ledjson配置文件
    bool AddToMap(const QVariantMap &ledMap);   //将XML的信息
public:
    static  LedManager * GetInstance();
};

#endif // LEDMANAGER_H
