// Friend to another class Find the area of a Square and a Rectangle.

#include <iostream>
using namespace std;
class Rectangle;
class square
{
    int side;

public:
    int setdata()
    {
        side = 20;
    }
    friend int Area(Rectangle, square);
} ;
class Rectangle
{
    int length, breath;

public:
    int setdata()
    {
        length = 10;
        breath = 20;
    }
    friend int Area(Rectangle, square);
};
int Area(Rectangle r,square s)
{
    cout<<"Area of rectangle = "<<r.length*r.breath<<endl;
    cout<<"Area of square = "<<s.side*s.side <<endl;
}

int main()
{
    Rectangle r1;
    square s1;
    r1.setdata();
    s1.setdata();
    Area(r1,s1);
    return 0;
}