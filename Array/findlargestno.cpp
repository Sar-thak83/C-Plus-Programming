// Write a C++ program to find the largest element of a given array of integers.
#include <iostream>
using namespace std;
int main()
{
    int n, maxnum;
    cout << "Enter the size of array : ";
    cin >> n;
    int array[n];
    cout << "Enter the " << n << " Numbers"<<endl;
    for (int i = 1; i <= n; i++)
    {
        cout << "Element " << i << " : ";
        cin >> array[i];
    }
    maxnum = array[1];
    for (int i = 1; i <= n; i++)
    {
        if (maxnum < array[i])
        {
            maxnum = array[i];
        }
    }
    cout << "Largest number in the array is : " << maxnum;
    return 0;
}