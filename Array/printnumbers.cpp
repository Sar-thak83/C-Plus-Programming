// we aim to create a C++ program that prints 'n' numbers using an array,
//  where the size of the array is provided by the user.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Size of array : ";
    cin >> n;
    int array[n];
    cout << "Enter the " << n << " Numbers."<<endl;
    for (int i = 1; i <= n; i++)
    {
        cout << "Element " << i << " : ";
        cin >> array[i];
    }
    cout << "Print the Numbers of array"<<endl;
    for (int i = 1; i <= n; i++)
    {
        cout << "The element " << i << " is "<<array[i]<<endl;
    }
    return 0;
}