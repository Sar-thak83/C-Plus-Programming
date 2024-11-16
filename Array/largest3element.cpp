// Write a C++ program to find the largest three elements in an array.
// Type-1
#include <iostream>
#include <climits>
using namespace std;
void three_largest(int array[], int n)
{
    int first, second, third, i;
    if (n < 3)
    {
        cout << "invalid size to find 3 largest element in array\n";
    }
    first = second = third = 0;
    for (int i = 1; i <= n; i++)
    {
        if (array[i] > first)
        {
            third = second;
            second = first;
            first = array[i];
        }
        else if(array[i]>second)
        {
            third=second;
            second=array[i];
        }
        else if(array[i]>third)
        {
            third=array[i];
        }
    }
    cout<<"Three largest elements are : "<<first<< " , "<<second <<" , "<< third ;
}
int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int nums[n];
    for(int i=1 ;i<=n; i++)
    {
        cout<<"Element "<<i<<" : ";
        cin>>nums[i];
    }
    three_largest(nums,n);
    return 0;
}
// Type-2