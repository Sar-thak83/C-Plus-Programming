// W.A.P. to raise a number m to a power n (mn) (With arguments and return type).(by Recursivinve)


#include<iostream>
using namespace std;
int Power_Recursive(int m,int n)
{
    if (n==0)
    {
        return 1;
    }
    else 
    {
        return m*Power_Recursive(m,n-1);
    }
}
int main(){
    int Base, Exponents ;
    cout<<"Enter the Base = ";
    cin>>Base;
    cout<<"Enter the Exponent = " ;
    cin>>Exponents;
    cout<<Base <<"raised of the power "<<Exponents <<" is "<<Power_Recursive(Base,Exponents);
    return 0;
}
