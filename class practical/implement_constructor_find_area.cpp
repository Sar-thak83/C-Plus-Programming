// Create a class Rectangle having data members’ length and width. Demonstratedefault, parameterized and
// copy constructor to initialize members and also demonstrate constructor overloading.

#include <iostream>
using namespace std;
class Rectangle
{
    int length, Width;
public:
    Rectangle()
    {
        length = 0;
        Width = 0;
        cout << length <<"  "<< Width << "\n";
    }
    Rectangle(int x, int y)
    {
        length = x;
        Width = y;
        cout << length <<"  "<< Width << "\n";
    }
    Rectangle(Rectangle &_r)
    {
        length=_r.length;
        Width=_r.Width;
        cout << length <<"  "<< Width << "\n";
    }
};
int main()
{
    Rectangle r1;
    Rectangle r2( 20 ,10);
    Rectangle r3(r2);
}