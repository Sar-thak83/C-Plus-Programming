// Write a C++ program to create class Car having data members Company and Top_Speed.
// Create member functions SetData() and DisplayData() and create two objects of class Car.

#include<iostream>
using namespace std;
class Car{
    private :
    string company_name ;
    int Top_speed;
    public:
    void setData()
    {
        cout<<"Company Name : ";
        cin>>company_name;
        cout<<"Top Speed : ";
        cin>>Top_speed;
    }
    void Display()
    {
        cout<<"Company Name : "<<company_name<<endl;
        cout<<"Top speed : "<<Top_speed<<endl;
    }
};
int main()
{
    Car car1,car2;
    car1.setData();
    cout<<"Details About car1:"<<endl;
    car1.Display();
    car2.setData();
    cout<<"Details About car2:"<<endl;
    car2.Display();
    return 0;
}