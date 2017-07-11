#ifndef MESSAGE_H
#define MESSAGE_H
#include<QString>
#include<QObject>

class Message
{
private:
    int Id;
    int LedId;          //告警led的id
    QString Name;       //名称
    int X;              //横坐标
    int Y;              //纵坐标
    int Width;          //宽度
    int Height;         //高度
    QString Color;      //图标颜色
    QString Image;      //图标路径
    QString Resolution; //分辨率
    QString Sound;      //声音文件路径
    QString Movie;      //动画资源路径或者Id，动画资源有自己独立的配置文件
    int Cancel;         //取消方式
    int ResourceX;      //资源X坐标
    int ResourceY;      //资源Y坐标
    int Priority;       //优先级
    bool Blink;         //true:闪烁；flase:持续
    int Frequency;      //闪烁频率
    bool State;         //状态
    QString mMessage;    //显示消息
public:
    Message();
    ~Message();

    void SetId(int id);
    int GetId();
    void SetLedId(int ledId);
    int GetLedId();
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
    void SetImage(QString image);
    QString GetImage();
    void SetResolution(QString resolution);
    QString GetResolution();
    void SetSound(QString sound);
    QString GetSound();
    void SetMovie(QString movie);
    QString GetMovie();
    void SetCancel(int cancel);
    int GetCancel();
    void SetResourceX(int resourceX);
    int GetResourceX();
    void SetResourceY(int resourceY);
    int GetResourceY();
    void SetPriority(int priority);
    int GetPriority();
    void SetBlink(bool blink);
    bool GetBlink();
    void SetFrequency(int frequency);
    int GetFrequencry();
    void SetState(bool state);
    bool GetState();
    void SetMessage(QString message);
    QString GetMessage();

    //Message动作
    void MessageOn();
    void MessageOff();
};

#endif // MESSAGE_H
