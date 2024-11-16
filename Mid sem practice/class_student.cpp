// Define classes for following data members and member functions.
//    a. Student
//    i. Data members Roll Number, Name, Branch, Total marks
//    ii. Member functions To get the data, To display the data

#include<iostream>
using namespace std;
class student{
    private :
    int Roll_No,Total_marks;
    string Branch_Name, Name ;
    public:
    void getdata(){
        cout<<"Enter the Roll Number = ";
        cin>>Roll_No;
        cout<<"Enter the Branch Name = ";
        cin>>Branch_Name;
        cout<<"Enter the Name of student = ";
        cin>>Name;
        cout<<"Enter the Marks of student = ";
        cin>>Total_marks;
    }
    void Display()
    {
        cout<<"Enter the Roll Number = "<<Roll_No<<endl;
        cout<<"Enter the Branch Name = "<<Branch_Name<<endl;
        cout<<"Enter the Name of student = "<<Name<<endl;
        cout<<"Enter the Marks of student = "<<Total_marks<<endl;
    }
};
int main()
{
    student s1;
    s1.getdata();
    cout<<"Display the Data for student 1:"<<endl;
    s1.Display();
    return 0;
}

