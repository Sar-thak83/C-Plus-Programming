// Define class Time with members hour, minute and second. Also define function to setTime() to initialize the members,
// print() to display time. Demonstrate class Time for two objects.

#include <iostream>
using namespace std;
class Time
{
    int hour, minute, second;

public:
    void SetTime(int h, int m, int s); 
    void DisplayTime();
};
void Time::SetTime(int h, int m, int s)
{
    hour = h;
    minute = m;
    second = s;
}
void Time::DisplayTime()
{
    cout<<"Hours = "<<hour<<endl;
    cout<<"Minutes = "<<minute<<endl;
    cout<<"Second = "<<second <<endl;
}
int main()
{
    Time t1;
    t1.SetTime(5,30,45);
    t1.DisplayTime();
    return 0;
}