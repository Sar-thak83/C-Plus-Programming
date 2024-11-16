// Write a C++ program to find the k largest elements in a given array of integers.
#include <iostream>
using namespace std;
int kth_largest(int array[], int n, int k)
{
    
}
int main()
{
    int n, k;
    cout << "Enter the size of array : ";
    cin >> n;
    int array[n];
    for (int i = 1; i <= n; i++)
    {
        cout << "Element " << i << " : ";
        cin >> array[i];
    }
    cout << "Which kth largest number you want";
    cin >> k;
    kth_largest(array, n, k);
    return 0;
}
