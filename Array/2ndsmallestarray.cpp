// Write a C++ program to find the second smallest elements in a given array of integers.
#include <iostream>
using namespace std;
int second_smallest(int array[], int n)
{
    int firstsmallest, secondsmallest, i;
    if (n < 2)
    {
        cout << "invalid size to find the 2nd smallest array \n";
    }
    if (array[0] < array[1])
    {
        firstsmallest = array[0];
        secondsmallest = array[1];
    }
    else
    {
        firstsmallest = array[1];
        secondsmallest = array[0];
    }
    for (int i = 1; i <= n; i++)
    {
        if (firstsmallest>array[i] )
        {
            secondsmallest = firstsmallest;
            firstsmallest=array[i];
        }
        else if(secondsmallest>array[i])
        {
            secondsmallest=array[i];
        }
    }
    return secondsmallest;
}
int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int array[n];
    for (int i = 1; i <= n; i++)
    {
        cout << "Elements " << i << " : ";
        cin >> array[i];
    }
    int secondsmallest=second_smallest(array, n);
    cout<<"The 2nd smallest element of array is "<<secondsmallest;
    return 0;
}