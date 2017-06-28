#include "Led.h"

Led::Led()
{
    this->Id=0;
    this->WarningId=0;      //告警Id
    this->Name="";          //名称
    this->X=0;              //横坐标
    this->Y=0;              //纵坐标
    this->Width=0;          //宽度
    this->Height=0;         //高度
    this->Color="";         //图标颜色
    this->Icon="";          //图标路径
    this->Priority=0;       //优先级
    this->Blink=false;      //true:闪烁；flase:持续
    this->Frequency=0;      //闪烁频率
    this->State=false;      //状态
    this->Music="";         //音乐文件路径
    this->Common=false;     //是否属于公共区域 true:属于 false:不属于
    this->Cl15State=false;  //发动机是否启动，led灯亮的先决条件
}

Led::~Led()
{

}

void Led::SetId(int id)
{
    this->Id=id;
}

int Led::GetId()
{
    return this->Id;
}

void Led::SetWarningId(int warningId)
{
    this->WarningId=warningId;
}

int Led::GetWarningId()
{
    return this->WarningId;
}

void Led::SetName(QString name)
{
    this->Name=name;
}

QString Led::GetName()
{
    return this->Name;
}

void Led::SetX(int x)
{
    this->X=x;
}

int Led::GetX()
{
    return this->X;
}

void Led::SetY(int y)
{
    this->Y=y;
}

int Led::GetY()
{
    return this->Y;
}

void Led::SetWidth(int width)
{
    this->Width=width;
}

int Led::GetWidth()
{
    return this->Width;
}

void Led::SetHeight(int height)
{
    this->Height=height;
}

int Led::GetHeight()
{
    return this->Height;
}

void Led::SetColor(int color)
{
    this->Color=color;
}

QString Led::GetColor()
{
    return this->Color;
}

void Led::SetIcon(QString icon)
{
    this->Color=icon;
}

QString Led::GetIcon()
{
    return this->Icon;
}

void Led::SetPriority(int priority)
{
    this->Priority=priority;
}

int Led::GetPriority()
{
    return this->Priority;
}

void Led::SetBlink(bool blink)
{
    this->Blink=blink;
}

bool Led::GetBlink()
{
    return this->Blink;
}

void Led::SetFrequency(int frequency)
{
    this->Frequency=frequency;
}

int Led::GetFrequencry()
{
    return this->Frequency;
}

void Led::SetState(bool state)
{
    this->State=state;
}

bool Led::GetState()
{
    return this->State;
}

void Led::SetMessage(QString Message)
{
    this->Message=Message;
}

QString Led::GetMessage()
{
    return this->Message;
}

void Led::SetMusic(QString music)
{
    this->Music=music;
}

QString Led::GetMusic()
{
    return this->Music;
}


void Led::SetCommon(bool common)
{
    this->Common=common;
}

bool Led::GetCommon()
{
    return this->Common;
}

void Led::SetCl15State(bool cl15State)
{
    this->Cl15State=cl15State;
}

bool Led::getCl15State()
{
    return this->Cl15State;
}
