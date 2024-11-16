// Write a C++ program to create class Employee having data members Emp_Name, Salary,Age.
// Create member functions SetData() and DisplayData(). Create two objects of class Employee

#include<iostream>
using namespace std;
class Employe{
    private :
    float salary;
    int Employe_id ;
    public:
    char Employe_name[80] ,status;
    int Age ;
    
    void setdata()
    {
        cout<<"Employe Name : ";
        cin>>Employe_name;
        cout<<"Employe id : ";
        cin>>Employe_id;
        cout<<"Age : ";
        cin>>Age ;
        cout<<"Employe salary : ";
        cin>>salary;
        cout<<"Status : ";
        cin>>status ;
    }
    void Display()
    {
        cout<<"Employe Name : "<<Employe_name<<endl;
        cout<<"Employe id : "<<Employe_id<<endl;
        cout<<"Age : "<<Age<<endl;
        cout<<"Employe Salary : "<<salary<<endl;
        cout<<"Employe Status : "<<status<<endl;
    }
};
int main()
{
    Employe Employe1,Employe2;
    cout<<"SetData for Employe1 "<<endl;
    Employe1.setdata();
    cout<<"Details About Employe1"<<endl;
    Employe1.Display();
    cout<<"SetData for Employe2 "<<endl;
    Employe2.setdata();
    cout<<"Details About Employe2"<<endl;
    Employe2.Display();
    return 0;
}