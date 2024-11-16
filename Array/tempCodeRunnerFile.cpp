#include <iostream>
#include <string>
using namespace std;
class PersonalInfo {
protected:
    string name;
    int age;
public:
    void setPersonalInfo(string n, int a) {
        name = n;
        age = a;
    }
};
class JobInfo {
protected:
    string company;
    double salary;

public:
    void setJobInfo(string c, double s) {
        company = c;
        salary = s;
    }
};
class Employee : public PersonalInfo, public JobInfo {
public:
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Company: " << company << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    Employee emp;
    emp.setPersonalInfo("SARTHAK", 30);
    emp.setJobInfo("Tech Company", 60000.0);
    emp.displayInfo();
    return 0;
}

