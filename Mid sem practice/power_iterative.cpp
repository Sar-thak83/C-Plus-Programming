// W.A.P. to raise a number m to a power n (mn) (With arguments and return type).


#include<iostream>
using namespace std;
int power_iterative( int m ,int n)
{
    int result=1;
    for(int i=0;i<n;i++)
    {
        result*=m;
    }
    return result;
}
int main()
{
    int Base ,Exponent ,Result;
    cout<<"Enter the base = ";
    cin>>Base;
    cout<<"Enter the Exponent = ";
    cin>>Exponent;
    Result=power_iterative(Base,Exponent);
    cout<<Base<<"raised to power of "<<Exponent<<" is "<<Result;
    return 0;
}
