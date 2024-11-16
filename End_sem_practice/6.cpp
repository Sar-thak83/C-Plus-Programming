#include<iostream>
using namespace std;
class Time{
    int hour, minute, second;

public:
    void SetTime(int h, int m, int s); 
    void DisplayTime();
    void AddTime (Time x,Time y);
};
void Time::SetTime(int h, int m, int s)
{
    hour = h;
    minute = m;
    second = s;
}
void Time::DisplayTime( )
{
    cout<<"Hours = "<<hour<<endl;
    cout<<"Minutes = "<<minute<<endl;
    cout<<"Second = "<<second <<endl;
}
void Time ::AddTime (Time x,Time y){
    hour=x.hour+y.hour;
    minute=x.minute+y.minute;
    second = x.second +y.second ;
}
int main()
{
    Time t1,t2,t3;
    t1.SetTime(5,15,20);
    t2.SetTime(6,15,20);
    t3.AddTime(t1,t2);
    t3.DisplayTime();
    return 0;
}
