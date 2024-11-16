// Write a C++ program to find the second largest element in an array of integers.
// Type-1
#include<iostream>
using namespace std;
int sum(int arr[],int size )
{
    if(size==1||size==0)
    {
        return 
    }
}
// int second_largest(int array[], int n)
// {
//     int first , second ,i;
//     if (n<2)
//     {
//         cout<<"invalid size to find the 2nd largest elements\n";
//     }
//     first= second=0;
//     for (int i = 1; i <= n; i++)
//     {
//         if(array[i]>first)
//         {
//             second=first;
//             first=array[i];
//         }
//         else if(array[i]>second)
//         {
//             second=array[i];
//         }
//     }
//     cout<<"The 2nd largest element of array is "<< second; 
// }
int main()
{
    int arr[5]={5,8,9,3,7};
    int size = 5;
    int ans = sum( arr,size);
    // int n;
    // cout<<"Enter the size of array : ";
    // cin>>n;
    // int array[n];
    // for (int i = 1; i <=n ; i++)
    // {
    //    cout<<"Element "<<i<<" : ";
    //    cin>>array[i];
    // }
    // second_largest(array,n);
    // return 0;
}