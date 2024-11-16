#include<iostream>
using namespace std;
class Complex{
    int real,imag;
    public:
    Complex()
    {
        real=0;
        imag=0;
    }
    Complex(int x,int y)
    {
        real=x;
        imag=y;
    }
    void Disp()
    {
        cout<<"Real value of Complex No. =  "<<real<<endl;
        cout<<"Imaginary Value of Complex No. = "<<imag<<endl;
    }
    Complex operator + (Complex c);
};
Complex Complex :: operator + (Complex c)
{
    Complex temp;
    temp.real = real + c.real;
    temp.imag = imag+ c.imag;
    return temp;
}
int main()
{
    Complex c1(3,6),c2(7,9) ,c3 ;
    c3=c1+c2;
    c1.Disp();
    c2.Disp();
    c3.Disp();
    return 0;
}