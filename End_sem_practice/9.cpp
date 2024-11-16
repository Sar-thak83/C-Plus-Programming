#include<iostream>
using namespace std;
class Sum{
    int num1 ,num2;
    public:
    void setdata(int x,int y)
    {
        num1=x;
        num2=y;
    }  
    friend  int sum(Sum N);
};
int sum(Sum N)
{
    return (N.num1+N.num2);
}
int main()
{
    Sum s1;
    s1.setdata(6,9);
    cout<<"Sum of 2 numbers = "<<sum(s1);
    return 0;
}
