// Write a C++ program to enter an element in an array and display it.
#include<iostream>
using namespace std;
int main()
{
    int n, i;
    cout<<"Enter the size of Array : ";
    cin>>n;
    int array[n];
    for (i = 1; i <= n; i++)
    {
        cout<<"Element "<<i<<" : ";
        cin>>array[i];
    }
    cout<<"The Elements of array are : ";
    for (i = 1; i <= n; i++)
    {
        cout<<array[i]<<" ";
    }
}