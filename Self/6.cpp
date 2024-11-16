// Write a C++ program to create a class called Triangle that has private member variables for the lengths of its three sides. 
// Implement member functions to determine if the triangle is equilateral, isosceles, or scalene.

#include<iostream>
using namespace std;
class Triangle{
    private :
    double side1;
    double side2;
    double side3;
    public:
    Triangle() 
    {
        cout<<"Enter the value of side1 = ";
        cin>>side1;
        cout<<"Enter the value of side2 = ";
        cin>>side2;
        cout<<"Enter the value of side3 = ";
        cin>>side3;
    }
    void Determine_Type(){
        if (side1==side2==side3)
        {
            cout<<"This is an Equilateral Triangle ";
        }
        else if(side1==side2||side2==side3||side3==side1)
        {
            cout<<"This is an Isosceles Triangle ";
        }
        else
        {
            cout<<"This is an Scalene Triangle ";
        }
    }
};
int main()
{
    Triangle Tri;
    Tri.Determine_Type();
    return 0;
}