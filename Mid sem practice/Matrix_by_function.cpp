// W.A.P. to read a matrix of size min from the keyboard and display the same on the screen using function.

#include <iostream>
using namespace std;
const int size =100;
int  Display_Matrix( int matrix[size][size],int row, int column)
{
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= column; j++)
        {
            cout <<matrix[i][j];
        }
        cout<<"\n";
    }
}
int main()
{
    int row, column;
    cout << "Enter the row of matrix = ";
    cin >> row;
    cout << "Enter the Column of matrix = ";
    cin >> column;
    int matrix[size][size];
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= column; j++)
        {
            cout << "Element " << i << " " << j<< " = ";
            cin>>matrix[i][j];
        }
    }
    cout<<"Display the Matrix :  ";
    Display_Matrix(matrix,row,column);
    return 0;
}