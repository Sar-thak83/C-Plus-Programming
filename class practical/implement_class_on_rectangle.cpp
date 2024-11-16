// Define class Rectangle with members width and height. Also define function to set_values() to initialize 
// the members, area() to calculate area. Demonstrate class Rectangle for two objects.

#include<iostream>
using namespace std;
class Rectangle {
    private:
    int Width,Length;
    public:
    void Set_value( int w,int l)
    {
        Width=w;
        Length=l;
    }
    int Area_Rectangle ()
    {
        return Width*Length;
    }
};
int main()
{
    int L,W;
    Rectangle Area1;
    cout<<"Enter the Width of Rectangle : ";
    cin>>W;
    cout<<"Enter the Length of Rectangle : ";
    cin>>L;
    Area1.Set_value(W,L);
    cout<<"The Area of Rectangle : "<<Area1.Area_Rectangle();
    return 0;

}