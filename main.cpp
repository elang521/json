#include <QGuiApplication>
#include <QJsonParseError>
#include <QJsonDocument>
#include <QDebug>
#include <QString>
#include "Led/LedManager.h"
#include "Warning/WarningManager.h"

int main(int argc, char *argv[])
{
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
        qDebug()<<"Get Warning"<<m_Tire.GetId()<<"warning sucesss!";
        qDebug()<<"Get Warning"<<m_Tire.GetLedId()<<"warning sucesss!";
        qDebug()<<"Get Warning"<<m_Tire.GetName()<<"warning sucesss!";
        qDebug()<<"Get Warning"<<m_Tire.GetX()<<"warning sucesss!";
        qDebug()<<"Get Warning"<<m_Tire.GetY()<<"warning sucesss!";
        qDebug()<<"Get Warning"<<m_Tire.GetWidth()<<"warning sucesss!";
        qDebug()<<"Get Warning"<<m_Tire.GetHeight()<<"warning sucesss!";
        qDebug()<<"Get Warning"<<m_Tire.GetColor()<<"warning sucesss!";
        qDebug()<<"Get Warning"<<m_Tire.GetImage()<<"warning sucesss!";
        qDebug()<<"Get Warning"<<m_Tire.GetSound()<<"warning sucesss!";
        qDebug()<<"Get Warning"<<m_Tire.GetMovie()<<"warning sucesss!";
        qDebug()<<"Get Warning"<<m_Tire.GetCancel()<<"warning sucesss!";
        qDebug()<<"Get Warning"<<m_Tire.GetResourceX()<<"warning sucesss!";
        qDebug()<<"Get Warning"<<m_Tire.GetResourceY()<<"warning sucesss!";
        qDebug()<<"Get Warning"<<m_Tire.GetPriority()<<"warning sucesss!";
        qDebug()<<"Get Warning"<<m_Tire.GetBlink()<<"warning sucesss!";
        qDebug()<<"Get Warning"<<m_Tire.GetFrequencry()<<"warning sucesss!";
        qDebug()<<"Get Warning"<<m_Tire.GetMessage()<<"warning sucesss!";
    }
    else
    {
        qDebug()<<"Get Led faild!";
    }
    return 0;
}
