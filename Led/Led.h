#ifndef LED_H
#define LED_H
#include <iostream>
using namespace std;

class Led
{
private:
    int Id;
    int WarningId;      //告警led的id
    string Name;   //名称
    int X;              //横坐标
    int Y;              //纵坐标
    int Width;          //宽度
    int Height;         //高度
    QString Color;      //图标颜色
    QString Icon;       //图标路径
    int Priority;       //优先级
    bool Blink;         //true:闪烁；flase:持续
    int Frequency;      //闪烁频率
    bool State;         //状态
    QString Message;    //显示消息
    QString Music;      //音乐文件路径
    bool Common;        //是否属于公共区域 true:属于 false:不属于
    bool Cl15State;     //发动机是否启动，led灯亮的先决条件
public:
    Led();
    ~Led();
};

#endif // LED_H
