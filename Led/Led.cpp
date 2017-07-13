#include "Led.h"

Led::Led()
{
    this->Id = 0;
    this->WarningId = 0;     //告警Id
    this->Name = "";         //名称
    this->X = 0;             //横坐标
    this->Y = 0;             //纵坐标
    this->Width = 0;         //宽度
    this->Height = 0;        //高度
    this->Color = "";        //图标颜色
    this->Icon = "";         //图标路径
    this->Priority = 0;      //优先级
    this->Blink = false;     //true:闪烁；flase:持续
    this->Frequency = 0;     //闪烁频率
    this->State = false;     //状态
    this->Music = "";        //音乐文件路径
    this->Common = false;    //是否属于公共区域 true:属于 false:不属于
    this->Cl15State = false; //发动机是否启动，led灯亮的先决条件
}

Led::~Led()
{
}
