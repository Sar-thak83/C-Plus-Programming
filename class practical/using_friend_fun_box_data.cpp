#include <iostream>
using namespace std;
class Box
{
    double width;

public:
    void setdata();
    friend void print (Box B );
};
void Box::setdata( )
{
    cout<<"Enter the Value of Width : ";
    cin>>width;
}
void print(Box B)
{
    cout<<"The Width of the Box = "<<B.width;
}
int main()
{
    Box B1;
    B1.setdata();
    print(B1);
    return 0;
}