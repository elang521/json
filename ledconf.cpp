#include "ledconf.h"

LedConf* LedConf::m_LedConf = NULL;
LedConf::LedConf()
{
    this->ReadLedJson();
}

LedConf::~LedConf()
{
}

bool LedConf::ReadLedJson()
{
    QFile file("C:\\workspace\\json\\LED.json");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return false;

    QTextStream in(&file);
    QString json = in.readAll();

    QJsonParseError error;
    QJsonDocument jsonDocument = QJsonDocument::fromJson(json.toUtf8(), &error);
    if (error.error == QJsonParseError::NoError) {
        if (jsonDocument.isObject())  {
            m_ConfMap=jsonDocument.toVariant().toMap();
            return true;
        }
        return false;
    }
    else {
        qFatal(error.errorString().toUtf8().constData());
        return false;
    }
    return true;
}

LedConf *LedConf::GetInstance()
{
    if (m_LedConf == NULL)
    {
        m_LedConf = new LedConf();

    }

    return m_LedConf;
}



QString LedConf::GetId()
{
    return m_ConfMap["Id"].toString();
}

QString LedConf::GetName()
{
    return m_ConfMap["Name"].toString();
}

int LedConf::GetX()
{
    return m_ConfMap["X"].toInt();
}

int LedConf::GetY()
{
    return m_ConfMap["Y"].toInt();
}

int LedConf::GetWidth()
{
    return m_ConfMap["Width"].toInt();
}

int LedConf::GetHeight()
{
    return m_ConfMap["Height"].toInt();
}

int LedConf::GetPriority()
{
    return m_ConfMap["Priority"].toInt();
}

int LedConf::GetBlink()
{
    return m_ConfMap["Blink"].toInt();
}

bool LedConf::GetState()
{
    return m_ConfMap["State"].toInt();
}

int LedConf::GetResolution()
{
    return m_ConfMap["Resolution"].toInt();
}

QString LedConf::GetMessage()
{
    return m_ConfMap["Message"].toString();
}

QString LedConf::GetMusic()
{
    return m_ConfMap["Music"].toString();
}
