// Write a C++ program to find the no of double element in an array of integers & also print them.
#include<iostream>
using namespace std;
int double_occured( int array[], int n)
{
    int count=0 ;
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            if(array[i]==array[j])
            {
                count++;
                break;
            }
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the size of the array";
    cin>>n;
    int array[n];
    for (int i = 1; i <= n ; i++)
    {
        cout<<"Element "<<i<<" : ";
        cin>>array[i];
    }
    int count=double_occured(array ,n);
    cout<<count;
    return 0;
     
}