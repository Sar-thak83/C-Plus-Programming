// Define class Complex with members real and imaginary . Also define function to setdata() to initialize 
// the members, print() to display values and addnumber() that adds two complex objects.
// Demonstrate concept of passing object as argument.


#include<iostream>
using namespace std;
class Complex{
    private:
    int Imag,Real;
    public:
    void SetData(){
        cout<<"Enter the Real part of Number : ";
        cin>>Real;
        cout<<"Enter the Imaginary Part of Number : ";
        cin>>Imag;
    }
    void Display_Sum(){
        cout<<endl<<"The sum of Complex Number = "<<Real<<"+"<<Imag<<"i";
    }
    void Add_complex_Num(Complex com1,Complex com2)
    {
        Imag=com1.Imag+com2.Imag;
        Real=com1.Real+com2.Real;
    }
};
int main()
{
    Complex C1,C2,C3;
    cout<<"Enter the Details of first complex Number C1  : "<<endl;
    C1.SetData();
    cout<<"Enter the Details of first complex Number C2  : "<<endl;
    C2.SetData();
    C3.Add_complex_Num(C1,C2);
    C3.Display_Sum();
    return 0;

}
