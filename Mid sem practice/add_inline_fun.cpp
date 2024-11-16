// Write an inline function to add, to multiply two numbers.


#include<iostream>
using namespace std;
inline int Add(int a,int b)
{
    cout<<"The sum of a and b is "<<a+b<<endl;
}
inline int Multiplication(int a,int b)
{
    cout<<"The multiplication of a and b is "<<a*b;
}
int main()
{
    int num1,num2;
    cout<<"Enter the value of a = ";
    cin>>num1;
    cout<<"Enter the value of  b = ";
    cin>>num2;
    Add(num1,num2);
    Multiplication(num1,num2);
    return 0;
}7