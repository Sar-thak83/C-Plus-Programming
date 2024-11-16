// Write a program to find out sum of two private data members numA and numB of two classes ABC and XYZ 
// using a common friend function. Assume that the prototype for both the classes will be int add(ABC, XYZ); 


#include<iostream>
using namespace std;
class A{
    int num1;
    public :
    void setdata(){
        num1=10
    }
    friend void sum (A , B);
};
class B{
    int num2;
    public:
    void setdata(){
        num1=40
    }
    friend void sum(A , B)
};
void sum(A x , B y){
    return(x.num1+y.num2);
}
int main()
{
    A a;
    B b;
    a.setdata();
    b.setdata();
    return 0;
}