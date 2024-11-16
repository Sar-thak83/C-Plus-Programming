
// #include<iostream>
// using namespace std;

// class Circle
// {

// 	private:
// 		double radius;

// 	public:
// 		double compute_area()
// 		{
// 			return 3.14*radius*radius;
// 		}

// };
// int main()
// {

// 	Circle obj;
// 	obj.radius = 1.5;
// 	cout << "Area is:" << obj.compute_area();
// 	return 0;
// }

#include <iostream>
using namespace std;
class Circle
{
private:
	double radius;

public:
	void compute_area(double r)
	{
		radius = r;
		double area = 3.14 * radius * radius;
		cout << "Radius is: " << radius << endl;
		cout << "Area is: " << area;
	}
};
int main()
{
	Circle obj;
	obj.compute_area(1.5);
	return 0;
}
// #include<iostream>
// using namespace std;
// class test
// {
//     private:
//     int data1;
//     float data2;
//     public:
//     void function1()
//     {
//         data1=2;
//     }
//     float function2()
//     {
//     data2=3.5;
//     return data2;
//     }
// };
// int main()
// {
//     test dash;
//     dash.function1();
//     dash.function2();
//     return 0;
// }
// #include<iostream>
// using namespace std;
// class Test{
//     private:
//     int mark;
//     float spi;
//     public:
//     void SetData(int ,float);
//     void DisplayData();
// };
// void Test::SetData(int i,float j)
// {
//     mark=i;
//     spi=j;
// }
// void Test::DisplayData()
// {
//     cout<<"Mark ="<<mark;
//     cout<<"\nspi="<<spi;
// }
// int main()
// {
// }
//

// #include<iostream>
// using namespace std;
// class rectangle {
//     private:
//     int width ,height;
//     public:
//     void setdata();
//     int area()
//     {
//         return width*height
//     }
// };
// void rectangle::setdata(int i ,int j)
// {
//     width=i;
//     height=j;
// }
// void rectangle::Area()
// {

//     cout<<""
// }
// int main()
// {
//     int i,j;
//     rectangle t ;
//     cin>>i;
//     cin>>j;
//     t.setdata(i,j);
// }
// #include <iostream>
// using namespace std;
// class Time
// {
	
// 	int hour, minute, second;

// public:
// 	void getTime()
// 	{
// 		cout << "\nEnter hours :";
// 		cin >> hour;
// 		cout << "Enter minute ";
// 		cin >> minute;
// 		cout << "Enter second";
// 		cin >> second;
// 	}
// 	void printTime()
// 	{
// 		cout<<"\nEnter Hour"<<hour;
// 		cout << "Enter minute "<<minute;
// 		cout << "Enter second"<<second;
// 	}
// 	void addTime(Time x, Time y)
// 	{
// 		hour = x.hour + y.hour;
// 		minute = x.minute + y.minute;
// 		second = x.second + y.second;
// 	}
// };
// int main()
// {
// 	Time t1, t2, t3;
// 	t1.getTime();
// 	t1.printTime();
// 	t2.getTime();
// 	t2.printTime();
// 	t3.addTime(t1,t2);
// 	cout << "\nAfter adding two objects ";
// 	t3.printTime();
// 	return 0
// }
// #include<iostream>
// using namespace std;
// class complex{
// 	private:
// 	int real,imag;
// 	public:
	
// 	void readData()
// 	{
// 		cout<<" duhd";
// 		cin>>real>>imag;
// 	}
// 	void addcomplexNum(complex comp1,complex comp2)
// 	{
// 		real=comp1.real+comp2.real;
// 	}
// 	void displaysum()
// 	{
// 		cout<<"sum="
// 	}
// }

// int main()
// {
// 	complex 
// }


#include<iostream>
using namespace std;
class Time{
	int hour ,minute,second;
	public:
	void getTime()
	{
		cout<<"\nEnter hours ";
		cin>>hour;
		cout<<"Enter Minutes ";
		cin>>minute;
	}
	void printTime ()
	{
		cout<<"\nhour"<<hour;
		cout<<"\tminute"<<minute;
	}
	Time addTime(Time t1,Time t2)
	{
		Time t4;
		t4.hour=t1.hour+t2.hour;
		t4.minute=t1.minute+t2.minute;
		return t4;
	}
};