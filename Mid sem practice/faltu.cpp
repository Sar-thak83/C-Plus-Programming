/*
#include <iostream>
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
}*/

// #include<iostream>
// using namespace std;
// class A{
//     public:
//     int i;
// };
// class B : virtual public A{
//     public:
//     int j;
// };
// class C: virtual public A{
//     public:
//     int k;
// };
// class D: public B,public C{
//     public:
//     int sum;
// };
// int main()
// {
//     D ob1;
//     ob1.i=10;
//     ob1.j=20;
//     ob1.k=30;
//     ob1.sum=ob1.i+ob1.j+ob1.k;
//     cout<<ob1.sum;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a=25;
//     int *p;
//     p= &a;
//     cout<<&a<<p<<&a
// }

// #include<iostream>
// using namespace std;
// class ABC{
//     public:
//     int a=50;
// };
// int main()
// {
//     ABC ob1;
//     ABC *ptr;
//     ptr=&ob1;
//     cout<<ob1.a<<endl;
//     cout<<ptr->a<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class demo{
//     int i;
//     public:
//     demo(int x)
//     {
//         i=x;
//     }
//     int getdata ()
//     {
//         return i;
//     }
// };
// int main()
// {
//     demo d(55), *ptr;
//     ptr=&d;
//     cout<<ptr->getdata();
//     return 0;
// }
//

// #include <iostream>
// using namespace std;
// class asdf
// {
// private:
//     int a, b;

// public:
//     void input(int a, int b)
//     {
//         this->a = a + b;
//         this->b = a - b;
//     }
//     void output()
//     {
//         cout << "a=" << a;
//         cout << "b=" << b;
//     }
// };
// int main()
// {

//     asdf ob1;
//     ob1.input(5, 8);
//     ob1.output();
// }


// #include<iostream>
// using namespace std;
// class person{
//     int age;
//     public:
//     person(int x)
//     {
//         age =x;
//     }
//     void display(){
//         cout<<"Age= "<<age;
//     }
//     person olderperson(person p)
//     {
//         if(age>p.age)
//         {
//             return *this ;
//         }
//         else{
//             return p;
//         }
//     }
// };
// int main()
// {
//     person r(35),h(30);
//     person o=r.olderperson(h);
//     o.display();
//     return 0;
// }



#include<iostream>
using namespace std;
class Bass{
    public:
    void Showcase()
    {
        cout<<"Base\n";
    }
};
class derv1:public Bass{
    public :
    void Showderived(){
        cout<<"Derv1\n";
    }
};
int main(){
    derv1 dv1;
    Bass* ptr;
    ptr=&dv1;
    ptr->Showcase();
    ptr->Showderived();
    return 0;

}


#include<iostream>
using namespace std;
class base{
    public:
    int b;
    void show()
    {
        cout<<"\nb="<<b;
    }
};
class derived :public base {
    public:
    int d;
    void show()
    {
        cout<<"\nb="<<b<<"\nd="<<d<<endl;
    }

};
