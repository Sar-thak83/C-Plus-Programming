// Write a C++ program to check whether a number is odd or even.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    if(n%2==0)
    {
        cout<<n<<" is a even number";
    }
    else
    {
        cout<<n<<" is a odd number";
    }
    return 0;
}