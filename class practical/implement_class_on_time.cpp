// Define class Time with members hour, minute and second. Also define function to setTime() to initialize 
// the members, print() to display time. Demonstrate class Time for two objects.

#include<iostream>
using namespace std;
class Time{
    private :
    int Hours,Minutes,Seconds;
    public:
    void setTime (int h,int m,int s)
    {
        Hours=h;
        Minutes=m;
        Seconds=s;
    }
    void DisplayTime()
    {
        cout<<"Hours = "<<Hours<<endl;
        cout<<"Minutes = "<<Minutes<<endl;
        cout<<"Seconds = "<<Seconds<<endl;
    }
};
int main()
{
    int h,m,s;
    Time T1;
    cout<<"Enter Hours = ";
    cin>>h;
    cout<<"Enter Minutes = ";
    cin>>m;
    cout<<"Enter seconds = ";
    cin>>s;
    cout<<"Display the Time "<<endl;
    T1.setTime (h,m,s);
    T1.DisplayTime();
    return 0;
}