/*#include <iostream>
using namespace std;
class complex
{
private:
    int real, imag;

public:
    complex()
    {
        real = 0;
        imag = 0;
    }
    complex(int x, int y)
    {
        real = x;
        imag = y;
    }
    void Display()
    {
        cout << "Complex No = " << real << "+i" << imag;
    }
    friend complex operator+(complex c1, complex c2);
};
complex operator+(complex c1, complex c2)
{
    complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}
int main()
{
    complex C1(5, 3), C2(10, 5), C3;
    C1.Display();
    cout << " + ";
    C2.Display();
    cout << " = ";
    C3 = C1 + C2;
    C3.Display();
    return 0;
}




#include<iostream>
using namespace std;
class Animal{
    private :
    int legs = 4;
    public:
    void display1(){
        cout<<"\nlegs = "<<legs ;
    }
};
class Dog : public Animal {
    bool tail =true ;
    public:
    void display2(){
        cout<<"\nTail = "<<tail;
    }
};
int main()
{
    Dog d1;
    d1.display1();
    d1.display2();
}

#include<iostream>
using namespace std;
class person{
    public:
    void display1(){
        cout<<"\nperson class";
    }
};
class student :public person{
    public:
    void display2(){
        cout<<"\nStudent Class ";
    }
};
class ITStudent : public student {
    public:
    void display3(){
        cout<<"\nITStudent class";
    }
};
int main()
{
    person p;
    student s;
    p.display1();
    s.display1();
    s.display2();
    ITStudent IT;
    IT.display1();
    IT.display2();
    IT.display3();
}

// Multiple inheritance 


#include<iostream>
using namespace std;
class bucket{
    public:
    void Display1()
    {
        cout<<"\nBucket class ";
    }
};
class Mango{
    public :
    void Display2()
    {
        cout<<"\nMango class ";
    }
};
class Apple:public Bucket ,public Mango{
    public:
    void Display3(){
        cout<<"\nApple class ";
    }
};

int main()
{
    Liquid l;
    Fuel f;
    Petrol p;
    l.Display1();
    f.Display2();
    p.Display3();
    p.Display2();
    p.Display1();
    return 0;
}


// Hererichal class order 


#include <iostream>
using namespace std;
class Bucket {
    public:
    void display1(){
        cout<<"\nBucket class ";
    }
};
class Mango :public Bucket{
    public:
    void display2(){
        cout<<"\nmango class ";
    }
};
class Orange :public Bucket {
    public:
    void display3(){
        cout<<"\nOrange class ";
    }
};
class Apple :public Bucket {
    public:
    void display4(){
        cout<<"\nApple class";
    }
};

int main()
{
    Bucket a;
    Mango e;
    Orange h;
    Apple c;
    a.display1();
    e.display2();
    h.display3();
    c.display4();

}



// Create a class student that stores roll_no, name . create a class test that stores marks obtained in five subjects .
// class result derived 

// overridding

#include<iostream>
using namespace std;
class ABC {
    public:
    void Display(){
        cout<<"This is parent class ";
    }
};
class XYZ: public ABC{
    public:
    void Display()
    {
        cout<<"this is child class ";
    }
};
int main()
{
    XYZ x;
    x.Display();
    x.ABC::Display();
    return 0;
}


// virual base class



