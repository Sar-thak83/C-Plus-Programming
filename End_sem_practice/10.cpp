// Find the mean of given two values using Friend function.


#include<iostream>
using namespace std;
class Mean{
    float num1 ,num2 ;
    public :
    void setdata(float x,float y);
    friend float mean(Mean m) ;
};
void Mean::setdata(float x,float y)
{
    num1=x;
    num2=y;
}
float mean(Mean m){
    return ((m.num1+m.num2)/2);
}
int main()
{
    Mean m1;
    m1.setdata(60,80);
    cout<<"Mean of 2 numbers : "<<mean(m1);
    return 0;
}