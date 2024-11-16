// #include<iostream>
// using namespace std;
// void print(int num)
// {
//     cout<<"print num :"<<num<<endl;
// }
// void print(double num)
// {
//     cout<<"print double :"<<num;
// }
// int main()
// {
//     print(10);
//     print(3.16);
//     return 0;
// }
#include <iostream>
#include <string>

class Student {
public:
    void printInfo(std::string name, int rollNo) {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Roll No: " << rollNo << std::endl;
    }

    void printInfo(std::string name) {
        std::cout << "Name: " << name << std::endl;
    }
};

int main() {
    Student student;
    student.printInfo("Alice", 101); 
    student.printInfo("Bob"); 
    return 0;
}
