// Define class Complex with members real and imaginary . Also define function to setdata() to initialize 
// the members, print() to display values and addnumber() that adds two complex objects.
// Demonstrate concept of passing object as argument.



#include<iostream>
using namespace std;
class complex{
    int Real ,Imaginary;
    public :
    void setdata (int real,int imag)
    {
        Real=real;
        Imaginary=imag;
    }
    void display()
    {
        cout<<"Real values = "<<Real;
        cout<<"Imaginary values = "<<Imaginary;
    }
    void AddcomplexNum(complex comp1,complex comp2){
        Real=comp1.Real+comp2.Real;
        Imaginary=comp1.Imaginary+comp2.Imaginary;
    }
    void sum()
    {
        cout<< "sum = "<<Real<<"+"<<Imaginary<<"i";
    }
};
int main()
{
    complex c1,c2,c3;
    c1.setdata(4,9);
    c2.setdata(5,7);
    c3.AddcomplexNum(c1,c2);
    c3.sum();
    return 0;
}