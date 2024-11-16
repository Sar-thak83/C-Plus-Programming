#include<iostream>
using namespace std;
int main()
{
    char operation;
    float a,b;
    A:
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<"Enter operation what you want to perform (+,-,*,/) : ";
    cin>>operation;
    switch (operation)
    {
    case '+' :
    cout <<"Addition :" << a+b<<endl;
        break;
    case '*' :
    cout <<"Multiplication :" << a*b<<endl;
        break;
    case '-' :
    cout <<"Substraction :" << a-b<<endl;
        break;
    case '/' :
    cout <<"Divison :" << a/b<<endl;
        break;
    default:
    cout <<" you enter wrong operation better luck try next time ";
        break;
    }
    goto A;
    return 0;
}