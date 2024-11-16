// Write a C++ program to create class Car having data members Company and Top_Speed.
// Create member functions SetData() and DisplayData() and create two objects of class Car.


#include<iostream>
using namespace std;
class Car{
    private:
    string Company ;
    float Top_speed ;
    public:
    void SetData()
    {
        cout<<"Enter the company Name : ";
        cin>>Company;
        cout<<"Enter the Top_speed : ";
        cin>>Top_speed;
    }
    void DisplayData()
    {
        cout<<"Company Name : "<<Company<<endl;;
        cout<<"Top speed : "<<Top_speed<<endl;
    }
};
int main(){
    Car c1;
    c1.SetData();
    cout<<"Data of the car 1 "<<endl;
    c1.DisplayData();
    return 0;
}