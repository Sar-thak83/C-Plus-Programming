// Write a C++ program to create a class called Rectangle that has private member variables for length and width. 
// Implement member functions to calculate the rectangle's area and perimeter.

#include<iostream>
using namespace std;
class Rectangle{
    private :
    double length;
    double width;
    public:
    void setdata (){
        cout<<"Enter the value of length = ";
        cin>>length;
        cout<<"Enter the value of width = ";
        cin>>width;
    }
    void area(){
        cout<<"The area of the Reactangle = "<<length*width<<endl ;
    }
    void Perimeter() {
        double  circum =2*(length+width);
        cout<<"The Circumference of the Rectangle = "<<circum;
    }
};
int main(){
    Rectangle R1;
    R1.setdata();
    R1.area();
    R1.Perimeter();
    return 0;
}