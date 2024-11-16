// Write a C++ program to find all elements in an array of integers that have at least two significant elements.
#include<iostream>
using namespace std;
int Two_digit_elements( int array[], int n)
{
    int count=0;
    int ans;
    for (int i = 1; i <= n; i++)
    {
        ans=array[i]/2;
        if(ans>=5)
        {
            count++;
        }
    }
    cout<<"The two digit numbers in the array is "<<count;
}
int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int array[n];
    for (int i = 1; i <= n; i++)
    {
        cout<<"Element "<<i<<" : ";
        cin>> array[i];
    }
    Two_digit_elements(array,n);
    return 0;
    
}