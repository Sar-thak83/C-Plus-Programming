// Define class Time with members hour, minute and second. Also define function to getTime() to initialize 
// the members, printTime() to display time and addTime() to add two time objects. Demonstrate class Time.
// 1. Passing object as argument
// 2. Returning object




#include<iostream>
using namespace std;
class Time {
    int hour ,minute,second ;
    public :
    void GetTime ()
    {
        cout<<"Enter hour : ";
        cin >>hour;
        cout<<"Enter minute : ";
        cin>>minute;
        cout<<"Enter second : ";
        cin>>second ;
    }
    void display()
    {
        cout<<"Hour = "<<hour<<endl;
        cout<<"Minute = "<<minute<<endl;
        cout<<"Second = "<<second<<endl;
    }
    Time AddTime (Time T1,Time T2){
        Time temp;
        temp.hour=T1.hour+T2.hour;
        temp.minute=T1.minute+T2.minute;
        temp.second=T1.second+T2.second;
        return temp;
    }
};
int main()
{
    Time T1,T2,T3,Ans;
    
    T1.GetTime();
    T2.GetTime();
    Ans=T3.AddTime(T1,T2);
    Ans.display();
    return 0;
}