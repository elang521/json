#ifndef LED_H
#define LED_H
#include<QString>
#include<QObject>

class Led
{
private:
    int Id;
    int WarningId;      //告警led的id
    QString Name;       //名称
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
    //属性
    void SetId(int id);
    int GetId();
    void SetWarningId(int warningId);
    int GetWarningId();
    void SetName(QString name);
    QString GetName();
    void SetX(int x);
    int GetX();
    void SetY(int y);
    int GetY();
    void SetWidth(int width);
    int GetWidth();
    void SetHeight(int height);
    int GetHeight();
    void SetColor(int color);
    QString GetColor();
    void SetIcon(QString icon);
    QString GetIcon();
    void SetPriority(int priority);
    int GetPriority();
    void SetBlink(bool blink);
    bool GetBlink();
    void SetFrequency(int frequency);
    int GetFrequencry();
    void SetState(bool state);
    bool GetState();
    void SetMessage(QString Message);
    QString GetMessage();
    void SetMusic(QString music);
    QString GetMusic();
    void SetCommon(bool common);
    bool GetCommon();
    void SetCl15State(bool cl15State);
    bool getCl15State();

    //方法操作（接收信号，并将信号转发给界面）
    bool TurnOn();
    bool TurnOff();
};

#endif // LED_H
