#include <iostream>
using namespace std;
class Time
{
private:
    int Minutes, Hours, Seconds;

public:
    void GetTime();
    void Display_Time();
    void Add_Time(Time x, Time Y);
};
void Time ::GetTime()
{
    cout << "Enter the Hours : ";
    cin >> Hours;
    cout << "Enter the minutes : ";
    cin >> Minutes;
    cout << "Enter the Seconds : ";
    cin >> Seconds;
}
void Time::Display_Time()
{
    cout << "Hours = " << Hours << endl;
    cout << "Minutes = " << Minutes << endl;
    cout << "Seconds = " << Seconds << endl;
}

void Time::Add_Time(Time x, Time y)
{

    Hours = x.Hours + y.Hours;
    Minutes = x.Minutes + y.Minutes;
    Seconds = x.Seconds + y.Seconds;
}

int main()
{
    Time T1,T2,T3;
    cout<<"Enter Time Details For object T1 : ";
    T1.GetTime();
    T1.Display_Time();
    cout<<"Enter Time Details for object T2 : ";
    T2.GetTime();
    T2.Display_Time();
    T3.Add_Time(T1,T2);
    cout<<"After Adding 2 objects print the result : ";
    T3.Display_Time();
    return 0;
}