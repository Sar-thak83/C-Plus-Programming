// Define class Time with members hour, minute and second. Also define function togetTime() to initialize 
// the members, printTime() to display time and addTime() to add two time objects. Demonstrate class Time.
// 1. Passing object as argument
// 2. Returning object


#include<iostream>
using namespace std;
class Time
{
    int hour, minute, second;
public:
    void getTime()
    {
        cout << "\nEnter hours:";
        cin >> hour;
        cout << "Enter Minutes:";
        cin >> minute;
    }
    void printTime()
    {
        cout << "\nhour:" << hour;
        cout << "\tminute:" << minute;
    }
    Time addTime(Time t1, Time t2)
    {
        Time t4;
        t4.hour = t1.hour + t2.hour;
        t4.minute = t1.minute + t2.minute;
        return t4;
    }
};

int main()
{
    Time t1, t2, t3, ans;
    t1.getTime();
    t1.printTime();
    t2.getTime();
    t2.printTime();
    ans = t3.addTime(t1, t2);
    cout << "\nafter adding two objects";
    ans.printTime();
    return 0;
}