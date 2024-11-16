// Write a C++ program to implement a class called Student that has private member
//  variables for name, class, roll number, and marks. Include member functions to
//  calculate the grade based on the marks and display the student's information.

#include <iostream>
using namespace std;
class Student
{
private:
    string Name;
    int Class;
    int Roll_No;
    int Marks;

public:
    void SetValue()
    {
        cout << "Name = ";
        cin >> Name;
        cout << "Class = ";
        cin >> Class;
        cout << "Roll Number = ";
        cin >> Roll_No;
        cout << "Marks = ";
        cin >> Marks;
    }
    string Calculate_Grade()
    {
        if (Marks >= 90)
        {
            return "A+";
        }
        else if (Marks >= 80)
        {
            return "A";
        }
        else if (Marks >= 70)
        {
            return " B+";
        }
        else if (Marks >= 60)
        {
            return "B";
        }
        else if (Marks >= 50)
        {
            return "C";
        }
        else
        {
            return "FAIl";
        }
    }
    void Display()
    {
        cout << "Information of the student " << endl;
        cout << "Name  = " << Name << endl;
        cout << "Class = " << Class << endl;
        cout << "Roll Number = " << Roll_No << endl;
        cout << "Marks = " << Marks << endl;
        cout << "Grade = " << Calculate_Grade() << endl;
    }
};
int main()
{
    Student student1;
    student1.SetValue();
    student1.Calculate_Grade();
    student1.Display();
    return 0;
}
