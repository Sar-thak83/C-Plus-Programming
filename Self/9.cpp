// Write a C++ program to implement a class called Date that has private member variables for day, month, and year.
// Include member functions to set and get these variables, as well as to validate if the date is valid.

#include <iostream>
using namespace std;
class Date
{
private:
    int Day;
    int Month;
    int Year;

public:
    void Setdata(int D, int M, int Y)
    {
        Day = D;
        Month = M;
        Year = Y;
    }
    int GetDay()
    {
        return Day;
    }
    int GetMonth()
    {
        return Month;
    }
    int GetYear()
    {
        return Year;
    }
    bool Check_Validation()
    {
        if (Month < 1 || Month > 12)
        {
            return false;
        }
        if (Day < 1 || Day > 31)
        {
            return false;
        }
        if (Month == 4 || Month == 6 || Month == 9 || Month == 11 && Day > 30)
        {
            return false;
        }
        if (Month == 2)
        {
            if ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0))
            {
                if (Day > 29)
                {
                    return false;
                }
            }
            else
            {
                if (Day > 28)
                {
                    return false;
                }
            }
        }
    }
};
int main()
{
    int Day,Month,Year;
    cout<<"Enter the Day : ";
    cin>>Day;
    cout<<"Enter the Month : ";
    cin>>Month;
    cout<<"Enter the Year :";
    cin>>Year;
    Date D1;
    D1.Setdata(Day,Month,Year);
    cout<<"DATE :"<<D1.GetDay()<<"/"<<D1.GetMonth()<<"/"<<D1.GetYear()<<endl;
    if(D1.Check_Validation())
    {
        cout<<"The date is valid";
    }
    else 
    {
        cout<<"The date is invalid";
    }
    return 0;
}