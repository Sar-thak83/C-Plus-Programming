#include <iostream>
using namespace std;
int main()
{
    int n, minnum;
    cout << "Enter the size of array : ";
    cin >> n;
    int array[n];
    cout << "Enter " << n << " Numbers" << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << "Element " << i << " : ";
        cin >> array[i];
    }
    minnum = array[1];
    for (int i = 1; i <= n; i++)
    {
        if (minnum > array[i])
        {
            minnum = array[i];
        }
    }
    cout<<"Smallest number in the array is "<<minnum;
    return 0;
}