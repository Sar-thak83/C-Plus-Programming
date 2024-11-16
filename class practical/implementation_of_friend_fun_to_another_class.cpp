// Write a program to find out sum of two private data members numA and numB of twoclasses ABC and XYZ using 
// a common friend function. Assume that the prototype for both the classes will be int add(ABC, XYZ);

#include<iostream>
using namespace std;
class B;
class A{
    private :
    int numA;
    public:
    void Setdata()
    {
        cout<<"Enter the value of numA = ";
        cin>>numA;
    }
    friend int Add(A,B);
};
class B{
    private :
    int numB;
    public:
    void Setdata()
    {
        cout<<"Enter the value of numA = ";
        cin>>numB;
    }
    friend int Add(A,B);
};
int Add(A a,B b)
{
    return ( a.numA + b.numB);
}
int main()
{
    A val1;
    B val2;
    val1.Setdata();
    val2.Setdata();
    cout<<"The sum of numA and numB = "<<Add(val1,val2);
    return 0;
}