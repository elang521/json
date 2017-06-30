#include <QGuiApplication>
#include <QJsonParseError>
#include <QJsonDocument>
#include <QDebug>
#include <QString>
#include "Led/LedManager.h"
#include "Warning/WarningManager.h"

//template <class Type>
//Type min( Type a, Type b ) {
//    return a < b ? a : b;
//}

int main(int argc, char *argv[])
{
    //    int a=min(10,20);

    //led灯测试
    LedManager* m_LedManager=LedManager::GetInstance();
    Led m_TurnLeftLed;
    if(m_LedManager->GetLedByName("TurnLeft",m_TurnLeftLed))
    {
        qDebug()<<"Get Led"<<m_TurnLeftLed.GetName() <<"Button success!";
    }
    else
    {
        qDebug()<<"Get Led faild!";
    }
    //warning测试
    WarningManager *m_WarningManager=WarningManager::GetInstance();
    Warning m_Tire;
    if(m_WarningManager->GetWarningByName("Tire1",m_Tire)){
        qDebug()<<"*************************************";
        qDebug()<<"Read Warning.json,Concent:";
        qDebug()<<"ID:      "<<m_Tire.GetId();
        qDebug()<<"LedId:   "<<m_Tire.GetLedId();
        qDebug()<<"Name:    "<<m_Tire.GetName();
        qDebug()<<"X:       "<<m_Tire.GetX();
        qDebug()<<"Y:       "<<m_Tire.GetY();
        qDebug()<<"Width:   "<<m_Tire.GetWidth();
        qDebug()<<"Height:  "<<m_Tire.GetHeight();
        qDebug()<<"Color:   "<<m_Tire.GetColor();
        qDebug()<<"Image:   "<<m_Tire.GetImage();
        qDebug()<<"Sound:   "<<m_Tire.GetSound();
        qDebug()<<"Movie:   "<<m_Tire.GetMovie();
        qDebug()<<"Cancel:  "<<m_Tire.GetCancel();
        qDebug()<<"ResourceX:"<<m_Tire.GetResourceX();
        qDebug()<<"ResourceY:"<<m_Tire.GetResourceY();
        qDebug()<<"Priority:"<<m_Tire.GetPriority();
        qDebug()<<"Blink:   "<<m_Tire.GetBlink();
        qDebug()<<"Frequancry:"<<m_Tire.GetFrequencry();
        qDebug()<<"Message: "<<m_Tire.GetMessage();
        qDebug()<<"*************************************";
    }
    else
    {
        qDebug()<<"Get Warning faild!";
    }
    return 0;
}
