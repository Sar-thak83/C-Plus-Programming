// Define class Rectangle with members width and height. Also define function to set_values() to initialize 
// the members, area() to calculate area. Demonstrate class Rectangle for two objects.


#include<iostream>
using namespace std;
class Rectangle{
    float width, height;
    public:
    void Set_Values(float w,float h);
    float Area()
    {
        return width*height;
    }
};
void Rectangle::Set_Values(float w,float h)
{
    width=w;
    height=h;
}
int main()
{
    Rectangle Rec1;
    Rec1.Set_Values(3.5,2);
    cout<<"Area of Rectangle = "<<Rec1.Area();
    return 0;
}


