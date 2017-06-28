#include "LedManager.h"

LedManager* LedManager::m_Manager = NULL;

LedManager *LedManager::GetInstance()
{
    if (m_Manager == NULL)
    {
        m_Manager = new LedManager();

    }
    return m_Manager;
}

LedManager::LedManager()
{
    this->flag_Init=false;
    this->Init();
    if(this->ReadLedJson())
    {
        this->flag_Init=true;
    }
}

LedManager::~LedManager()
{

}

bool LedManager::IsExist(QString name)
{
    if(this->m_EnableMap.contains(name))
    {
        return true;
    }
    else if (this->m_UnenableMap.contains(name))
    {
        return true;
    }
    return false;
}

bool LedManager::GetLedByName(QString name, Led &m_Led)
{
    if(this->m_EnableMap.contains(name))
    {
        m_Led=this->m_EnableMap[name];
        return true;
    }
    else if (this->m_UnenableMap.contains(name))
    {
        m_Led=m_EnableMap[name];
        return true;
    }
    else
    {
        return false;
    }
}

bool LedManager::ChangeCl15State(QString name, bool cl15State)
{
    if(cl15State)
    {
        if(this->m_EnableMap.contains(name))
        {
            Led tmp=this->m_EnableMap[name];
            this->m_UnenableMap.insert(name,tmp);
            this->m_EnableMap.remove(name);
            return true;
        }
        else
            return false;
    }
    else
    {
        if(this->m_UnenableMap.contains(name))
        {
            Led tmp=this->m_EnableMap[name];
            this->m_EnableMap.insert(name,tmp);
            this->m_UnenableMap.remove(name);
            return true;
        }
        else
            return false;
    }
}

void LedManager::Cl15On()
{

}

void LedManager::Cl15Off()
{

}

void LedManager::Init()
{
    this->m_EnableMap.clear();
    this->m_UnenableMap.clear();

}

bool LedManager::ReadLedJson()
{
    QFile file("C:/workspace/json/json/LED.json");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
         return false;

    QTextStream in(&file);
    QString json = in.readAll();

    QJsonParseError error;
    QJsonDocument jsonDocument = QJsonDocument::fromJson(json.toUtf8(), &error);
    if (error.error == QJsonParseError::NoError) {
        if (jsonDocument.isObject())  {
            QVariantMap result=jsonDocument.toVariant().toMap();
            foreach (QVariant plugin, result["Leds"].toList()) {
                QVariantMap ledMap= plugin.toMap();
                this->AddToMap(ledMap);
            }
            return true;
        }
        return false;
    }
    else {
        qDebug()<<"Read Led.json or parse json Faild!Please sure your json right!";
        return false;
    }
    return true;
}

bool LedManager::AddToMap(const QVariantMap &ledMap)
{
    Led mInfo;
    mInfo.SetId(ledMap["Id"].toInt());
    mInfo.SetWarningId(ledMap["WarningId"].toInt());
    mInfo.SetName(ledMap["Name"].toString());
    mInfo.SetCl15State(ledMap["Cl15State"].toBool());
    mInfo.SetX(ledMap["X"].toInt());
    mInfo.SetY(ledMap["Y"].toInt());
    mInfo.SetWidth(ledMap["Width"].toInt());
    mInfo.SetHeight(ledMap["Height"].toInt());
    mInfo.SetColor(ledMap["Color"].toInt());
    mInfo.SetIcon(ledMap["Icon"].toString());
    mInfo.SetPriority(ledMap["Priority"].toInt());
    mInfo.SetBlink(ledMap["Blink"].toInt());
    mInfo.SetFrequency(ledMap["Frequency"].toInt());
    mInfo.SetMessage(ledMap["Message"].toString());
    mInfo.SetCommon(ledMap["Common"].toBool());
    mInfo.SetMusic(ledMap["Music"].toString());

    if(mInfo.getCl15State())
    {
        this->m_EnableMap[mInfo.GetName()]=mInfo;
    }
    else {
        this->m_UnenableMap[mInfo.GetName()]=mInfo;
    }
    return true;
}

