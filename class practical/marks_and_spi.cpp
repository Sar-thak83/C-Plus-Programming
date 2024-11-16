// Write a C++ program to create class Test having data members mark and spi.
// Create member functions SetData() and DisplayData()to demonstrate class and  objects.
 
#include<iostream>
using namespace std;
class Test
{
    private:
    int marks ;
    float Cgpa ;
    public:
    void setdata ()
    {
        cout<<"Marks : ";
        cin>>marks ;
        cout<<"Cgpa : ";
        cin>>Cgpa;
    }
    void Display()
    {
        cout<<"Marks obtained : "<<marks<<endl;
        cout<<"Cgpa  obtained : "<<Cgpa<<endl;
    }
};
int main()
{
    Test student1;
    student1.setdata();
    cout<<"The status of student1 result :"<<endl;
    student1.Display();
    return 0;
}