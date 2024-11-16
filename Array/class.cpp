// #include<iostream>
// using namespace std;
// class rectangle
// {
//     int w,h;
//     public:
//     void setvalue(int ww,int hh)
//     {
//         w=ww;
//         h=hh;
//         displayvalue();
//     }
//     void displayvalue()
//     {
//         cout<<"width="<<ww;
//         cout<<"\t height="<<hh;
//     }
// };
// int main()
// {
//    rectangle r1;
//    r1.setvalue(5,6) ;
//    cout<<"\n--------\n";
//    r1.displayvalue();
//    return 0;
// }

// #include<iostream>
// using namespace std;
// class demo{
//     static int count;
//     public:
//     void getcount()
//     {
//         cout<<"count="<<++count<<endl;
//     }
// };
// int demo::count;
// int main()
// {
//     demo d1,d2,d3;
//     d1.getcount();
//     d2.getcount();
//     d3.getcount();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class item
// {
//     int number;
//     static int count;
//     public:
//     void getdata(int a)
//     {
//         number=a;
//         count++;
//     }
//     void getcount()
//     {
//         cout<<"\nvalue of count:"<<count;
//     }
// };
// int item ::count;
// int main()
// {
//     int a,b,c;

// }

// #include <iostream>
// using namespace std;
// class box
// {
// private:
//     static int length;
//     static int breath;
//     static int height;

// public:
//     static void print()
//     {
//         cout << "Length :" << length << endl;
//         cout << "breath :" << breath << endl;
//         cout << "Length :" << height << endl;
//     }
// };
// int box ::height=30;
// int box ::breath=20;
// int box ::length=10;
// int main()
// {
//     cout<<"\nstatic number function"<<endl;
//     box::print();
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// class BankAccount {
//     private:
//     static int totalAccounts ;
//     int accountNumber;
//     string accountHolder;
//     double balance ;
//     public:
//     BankAccount(string holder,double intialBalance )
//     {
//         totalAccounts++;
//         accountNumber=totalAccounts ;
//         accountHolder=holder;
//         balance =intialBalance ;
//     }
//     static void dislayTotalAccounts()
//     {
//         cout<<"Total account created : "<<totalAccounts<<endl;
//     }
//     void displayAccountDetails()
//     {
//         cout<<"Account Number:"<<accountNumber<<endl;
//         cout<<"account holder :"<<accountHolder<<endl;
//         cout<<"balance"<<balance<<endl;

//     }
//     void deposit(double amount)
//     {
//         balance+=amount;
//     }
//     void withdraw(double amount)
//     {
//         if (balance>=amount)
//         {
//             balance-=amount;
//         }
//         else{
//             cout<<"insuffiebnt funds "<<endl;
//         }
//     }
// };
// int BankAccount::totalAccounts=0;
// int main()
// {
//     BankAccount account1("Alice",1000);
//     BankAccount account2("Bob",2000);
//     account1.displayAccountDetails();
//     account2.displayAccountDetails();
//     account1.deposit(500);
//     account2.withdraw(300);
//     account1.displayAccountDetails();
//     account2.displayAccountDetails();
//     BankAccount::dislayTotalAccounts();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class numbers{
//     int num1,num2;
//     public:
//     void setdata(int a,int b);
//     friend int add(numbers N);
// };
// void numbers::setdata(int a,int b)
// {
//     num1=10;
//     num2=20;
// }
// int add(numbers N)
// {
//     return (N.num1+N.num2);
// }
// int main()
// {
//     numbers N1;
//     N1.setdata(10,20);
//     cout<<"sum = "<<add(N1);
//     return 0;
// }
// #include <iostream>
// using namespace std;
// class Box
// {
//     double width;

// public:
//     friend void printwidth(Box);
//     void setwidth(double wid);
// };
// void Box::setwidth(double wid)
// {
//     width = wid;
// }
// void printwidth(Box b)
// {
//     cout << "width of box : " << b.width;
// }
// int main()
// {
//     Box box;
//     box.setwidth(10.0);
//     printwidth(box);
//     return 0;
// }
// write a c++ program to find area of tri and print it using friend function
// #include <iostream>
// using namespace std;
// class Area
// {
//     int hi,bas;
//     public:
//     void setdata(int h,int b);
//     friend void printdata(Tri);
// };
// void Tri::setdata(int b,int h)
// {
//     bas=b;
//     hi=h;
// }
// void printdata(Tri T)
// {
//     float area=T.bas*T.hi*0.5;
//     cout<<"Area of tri="<<area;
// }

// write a c++ programm to print the mean of two numbers .
// #include<iostream>
// using namespace std;
// class numbers{
//     int num1,num2;
//     public:
//     void setdata(int a,int b);
//     friend int mean(numbers N);
// };
// void numbers::setdata(int a,int b)
// {
//     num1=10;
//     num2=20;
// }
// int mean(numbers N)
// {
//     return (N.num1+N.num2)/2;
// }
// int main()
// {
//     numbers N1;
//     N1.setdata(10,20);
//     cout<<"mean = "<<mean(N1);
//     return 0;
// }

// Date 12-04-23

// #include<iostream>
// using namespace std;
// class Rectangle{
//     private:
//     double length;
//     double width;
//     public:
//     Rectangle(double l=0 ,double w=0)
//     {
//     }
//     void setDimensions(double l,double w)
//     {
//         length=l;
//         width=w;
//     }
//     double area() const{
//         return length*width;
//     }
// };
// int main()
// {
//     const int size =3 ;
//     Rectangle rectangle[size];
//     rectangle[0].setDimensions(5.0,3.0);
//     rectangle[1].setDimensions(4.0,3.0);
//     rectangle[2].setDimensions(5.0,6.0);
//     for (int i = 0; i < size; i++)
//     {
//         cout<<"Rectangle "<<i+1<< " -> "<<" Area : "<<rectangle[i].area()<<endl;
//     }
//     return 0;
// }

// practical in class
// create a c++ class called student with private data members name rollnumber and grade . implement public members functions setdata()
// to set the data members , displaydata() to display the data members and calculategrade() to calculate the grade based on marks obtained
// Ensure that name and rollnumber are private while grade is public .

// #include <iostream>
// using namespace std;
// class Student
// {
// private:
//     string Name;
//     int rollNumber;

// public:
//     char grade;
//     void setData(string studentName, int studentRollNo)
//     {
//         Name = studentName;
//         rollNumber = studentRollNo;
//     }
//     void displayData()
//     {
//         cout << "Name: " << Name << endl;
//         cout << "Roll Number: " << rollNumber << endl;
//         cout << "Grade: " << grade << endl;
//     }
//     void calculateGrade(int marksObtained)
//     {
//         if (marksObtained >= 90)
//         {
//             grade = 'A';
//         }
//         else if (marksObtained >= 80)
//         {
//             grade = 'B';
//         }
//         else if (marksObtained >= 70)
//         {
//             grade = 'C';
//         }
//         else
//         {
//             grade = 'D';
//         }
//     }
// };
// int main()
// {
//     Student student1, student2;
//     student1.setData("Sarthak", 11);
//     student1.calculateGrade(70);
//     student1.displayData();
//     student2.setData("Aryan", 10);
//     student2.calculateGrade(45);
//     student2.displayData();
//     return 0;
// }

// Implement a C++ class called BankAccount with private members balance And accountNumber.create a friend function named transferfunds
//     outside the class,
//     which takes two BankAccount objects as parameters and transfers a specified amount from one account to another
//         updating their balance accordingly.

// #include <iostream>
//     using namespace std;
// class BankAccount
// {
// private:
//     float balance;
//     string accountNumber;

// public:
//     BankAccount(float bal, string accNum) : balance(bal), accountNumber(accNum) {}
//     friend void transferfunds(BankAccount &from, BankAccount &to, float Account);
//     void display()
//     {
//         cout << "Account Number" << accountNumber << "balance" << balance << endl;
//     }
// };
// void transferfunds(BankAccount &from, BankAccount &to, float Account)
// {
//     if (amount <= from.balance)
//     {
//         from.balance -= amount;
//         to.balance += amount;
//         cout << "Transfer succesful" << endl;
//     }
//     else
//     {
//     }
// }
// int main()
// {
//     BankAccount acc1, acc2;
// }

// #include <iostream>

// class BankAccount
// {
// private:
//     double balance;
//     int accountNumber;

// public:
//     BankAccount(int accNum, double initialBalance) : accountNumber(accNum), balance(initialBalance) {}

//     void deposit(double amount)
//     {
//         balance += amount;
//     }

//     void withdraw(double amount)
//     {
//         if (amount <= balance)
//         {
//             balance -= amount;
//         }
//         else
//         {
//             std::cout << "Insufficient funds!" << std::endl;
//         }
//     }

//     friend void transferFunds(BankAccount &from, BankAccount &to, double amount);
// };

// void transferFunds(BankAccount &from, BankAccount &to, double amount)
// {
//     if (amount <= from.balance)
//     {
//         from.balance -= amount;
//         to.balance += amount;
//         std::cout << "Transfer successful!" << std::endl;
//     }
//     else
//     {
//         std::cout << "Transfer failed. Insufficient funds in the sender's account." << std::endl;
//     }
// }

// int main()
// {
//     BankAccount acc1(12345, 1000.0);
//     BankAccount acc2(54321, 500.0);

//     std::cout << "Before transfer:" << std::endl;
//     std::cout << "Account 1 balance: $" << acc1.balance << std::endl;
//     std::cout << "Account 2 balance: $" << acc2.balance << std::endl;

//     transferFunds(acc1, acc2, 300.0);

//     std::cout << "\nAfter transfer:" << std::endl;
//     std::cout << "Account 1 balance: $" << acc1.balance << std::endl;
//     std::cout << "Account 2 balance: $" << acc2.balance << std::endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// class BankAccount
// {
// private:
// }

// // you are tasked with developing
// #include <iostream>
// #include <string>
// using namespace std;
// class Student
// {
// private:
//     string name;
//     int rollNumber;
//     int marks[3];
//     static void setData(string n, int roll, int m1, int m2, int m3)
//     {
//         name = n;
//         rollNumber = roll;
//         marks[0] = m1;
//         marks[1] = m2;
//         marks[2] = m3;
//     }
// };

// int main()
// {
//     const int maxsize = 100;
//     Student students[maxsize];
//     int index = 0;
//     int choice;
//     while (1)
//     {
//         cout << "1.Add student\n2.Display student\n3.Exit\n";
//         cout << "Enter your choice : ";
//         cin >> choice;
//         switch (choice)
//         {
//         case 1:
//             addStudent(students, index, maxsize);
//             break;
//         case 2:
//             displaystudents(students, index);
//             break;
//         case 3:

//             break;
//         default:
//             break;
//         }
//     }
// }

// #include <iostream>
// #include <vector>
// #include <string>
// class Item
// {
// public:
//     std::string name;
//     double price;
//     Item(std::string n, double p) : name(n), price(p) {}
// };
// class ECart
// {
// private:
//     std::vector<Item> cart;
//     double total_price;

// public:
//     ECart() : total_price(0.0) {}
//     void insertItem(std::string name, double price)
//     {
//         Item item(name, price);
//         cart.push_back(item);
//         total_price += price;
//     }
//     void displayTotalPrice()
//     {
//         std::cout << "Total Price: Rs." << total_price << std::endl;
//     }
//     void deleteItem(std::string name)
//     {
//         for (auto it = cart.begin(); it != cart.end(); ++it)
//         {
//             if (it->name == name)
//             {
//                 total_price -= it->price;
//                 cart.erase(it);
//                 break;
//             }
//         }
//     }
// };
// int main()
// {
//     ECart ecart;
//     ecart.insertItem("Laptop", 1200.0);
//     ecart.insertItem("Headphones", 100.0);
//     ecart.displayTotalPrice();

//     ecart.deleteItem("Laptop");
//     ecart.displayTotalPrice();

//     return 0;
// }

// #include<iostream>
// using namespace std;
// class complex{
//     int real,imag;
//     public:
//     complex()
//     {
//         real=0;imag=0;

//     }
//     complex(int x ,int y)
//     {
//         real=x;imag=y;
//     }
//     void disp()
//     {
//         cout<<"\nreal value = "<<real<<endl;
//         cout<<"\nimag value = "<<real<<endl;
//     }
//     complex operator + (complex);
// };
// complex complex :: operator  + (complex c)
// {
//     complex temp;
//     temp.real=real+c.real;
//     temp.imag=imag+c.imag;
//     return  temp;

// }
// int main()
// {
//     complex c1(4,6),c2(7,9);
//     complex c3;
//     c3=c1+c2;
//     c1.disp();
//     c2.disp();
//     c3.disp();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Complex{
//     private:
//     int real;int img;
//     public:
//     Complex(int r=0,int i=0)
//     {
//         real=r;
//         img=i;
//     }
//     void display()
//     {
//         cout<<real<<"+1"<<img;
//     }
//     friend Complex operator+(Complex c1,Complex c2);
// }

// overloading Binary operator === to check whether two objects are equal or not .

// #include<iostream>
// using namespace std;

// class
// int complex :: operator ==(complex c)
// {
//     if (r==c.r && i==c.i)
//     return 1;
//     else
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class space
// {
//     int x,y,z;
//     public:
//     space()
//     {
//         x=y=z=0;
//     }
//     space (int a,int b,int c)
//     {
//         x=a;y=b;z=c;
//     }
//     void Display()
//     {
//         cout<<"\nx="<<x<<",y="<<y<<",z="<<z;
//     }
//     void operator-();
// };
// void space ::operator-()
// {
//     x=-x;
//     y=-y;
//     z=-z;
// }

// int main()
// {
//     space s1(5,4,3);
//     s1.Display();
//     -s1;
//     s1.Display();
//     return 0;
// }

// overloading Unary operator --data member value--
// #include <iostream>
// using namespace std;
// class space
// {
//     int x, y, z;

// public:
//     space()
//     {
//         x = y = z = 0;
//     }
//     space(int a, int b, int c)
//     {
//         x = a;
//         y = b;
//         z = c;
//     }
//     void Display()
//     {
//         cout << "\nx=" << x << ",y=" << y << ",z=" << z;
//     }
//     void operator--();
// };
// void space ::operator--()
// {
//     x--;
//     y--;
//     z--;
// }

// int main()
// {
//     space s1(5, 4, 3);
//     s1.Display();
//     --s1;
//     s1.Display();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class demo
// {
//     int m;

// public:
//     demo() { m = 0; }
//     demo(int x)
//     {
//         m = x;
//     }
//     void operator++()
//     {
//         ++m;
//         cout << "pre Increment =" << m;
//     }
//     void operator++(int)
//     {
//         m++;
//         cout << "post Increment =" << m;
//     }
// };
// int main()
// {
//     demo d1(5);
//     ++d1;
//     d1++;
// }

#include<iostream>
using namespace std;
class sample{
    int a;
    public:
    sample(){}
    sample(int x){
        a=x;
    }
    void disp(){
        cout<<"the value of a = "<<a;
    }   
};
int main()
{
    int m=10;
    sample s;
    s=m;
    s.disp();
    return 0;
}


