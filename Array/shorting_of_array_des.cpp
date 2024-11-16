//  write a c++ programm to sort an array where size of array and elements of array provided by user .
#include <iostream>
using namespace std;
void shorting_descending(int array[], int n)
{
    int  i, j, faltu;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; i < n; i++)
        {
            if (array[i] > array[j])
            {
                faltu = array[i];
                array[i] = array[j];
                array[j] = faltu;
            }
        }
    }
    cout << "The sorted array will be \n";
    for (i = 0; i < n; i++)
    {
        cout <<" " <<array[i];
    }
}
int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int array[n];
    for (int i = 0; i <n; i++)
    {
        cout << "Elements " << i << ": ";
        cin >> array[i];
    }
    shorting_descending(array, n);
    return 0;
}