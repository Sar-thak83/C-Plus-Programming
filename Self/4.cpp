// Write a C++ program to create a class called Car that has private member variables for company, model, and year. 
// Implement member functions to get and set these variables.

#include<iostream>
using namespace std;
class Car{
    private :
    string Company;
    string Model;
    int Year ;
    public:
    void setdata (string company,string model,int year){
        Company =company;
        Model=model;
        Year=year;
    }
    string getcompany()
    {
        return Company ;
    }
    string getmodel(){
        return Model;
    }
    int getyear(){
        return Year;
    }  
};
int main()
{
    Car car1;
    car1.setdata("Ferrari","X274bs",2023);
    cout<<"Company Name = "<<car1.getcompany()<<endl<<"Model Number = "<<car1.getmodel()<<endl<<"Year = "<<car1.getyear();
    return 0;
}