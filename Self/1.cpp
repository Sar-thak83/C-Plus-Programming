// Write a C++ program to implement a class called Circle that has private member variables for radius. 
// Include member functions to calculate the circle's area and circumference.


#include<iostream>
using namespace std;

class circle{
    private :
    double radius ;
    public:
    void setdata(){
        cout<<"Enter the radius of circle = ";
        cin>>radius ;
    }
    void area()
    {
        cout<<"The area of circle = " <<3.14*radius* radius<<endl ;
    }
    void circumference(){
        cout<<"The area of circle = " <<2*3.14*radius ;
    }
};
int main()
{
    circle c1;
    c1.setdata();
    c1.area();
    c1.circumference();
    return 0;
}