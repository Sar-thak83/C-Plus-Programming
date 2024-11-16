// #include <iostream>
// #include <string>
// using namespace std;

// class Employee {
// private:
//     int employeeID;
//     string name;
//     string position;
//     double salary;

// public:
//     void setEmployeeDetails(int id, string empName, string pos, double sal) {
//         employeeID = id;
//         name = empName;
//         position = pos;
//         salary = sal;
//     }

//     void displayEmployeeDetails() {
//         cout << "Employee ID: " << employeeID << endl;
//         cout << "Name: " << name << endl;
//         cout << "Position: " << position << endl;
//         cout << "Salary: $" << salary << endl;
//     }
// };

// int main() {
//     Employee emp1, emp2;

//     emp1.setEmployeeDetails(1, "John Doe", "Manager", 50000.0);
//     emp2.setEmployeeDetails(2, "Jane Smith", "Developer", 60000.0);

//     cout << "Employee 1 Details:" << endl;
//     emp1.displayEmployeeDetails();

//     cout << "\nEmployee 2 Details:" << endl;
//     emp2.displayEmployeeDetails();

//     return 0;
// }

//

// #include <iostream>
// using namespace std;
// class Rectangle {
// private:
//     int length;
//     int width;
// public:
//     Rectangle(int len, int wid) {
//         length = len;
//         width = wid;
//     }
//     void displayArea() {
//         cout << "Area of the rectangle: " << length * width << endl;
//     }
// };
// int main() {
//     Rectangle rect1(5, 10);
//     rect1.displayArea();
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// class PersonalInfo {
// protected:
//     string name;
//     int age;
// public:
//     void setPersonalInfo(string n, int a) {
//         name = n;
//         age = a;
//     }
// };
// class JobInfo {
// protected:
//     string company;
//     double salary;

// public:
//     void setJobInfo(string c, double s) {
//         company = c;
//         salary = s;
//     }
// };
// class Employee : public PersonalInfo, public JobInfo {
// public:
//     void displayInfo() {
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//         cout << "Company: " << company << endl;
//         cout << "Salary: $" << salary << endl;
//     }
// };

// int main() {
//     Employee emp;
//     emp.setPersonalInfo("SARTHAK", 30);
//     emp.setJobInfo("Tech Company", 60000.0);
//     emp.displayInfo();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// namespace myNamespace {
//     class class_2; // Forward declaration

//     class class_1 {
//     private:
//         int data1;

//     public:
//         class_1(int d) : data1(d) {}

//         friend void swapData(class_1&, class_2&);
//     };

//     class class_2 {
//     private:
//         int data2;

//     public:
//         class_2(int d) : data2(d) {}

//         friend void swapData(class_1&, class_2&);
//     };
// }

// void myNamespace::swapData(myNamespace::class_1& obj1, myNamespace::class_2& obj2) {
//     int temp = obj1.data1;
//     obj1.data1 = obj2.data2;
//     obj2.data2 = temp;
// }

// int main() {
//     myNamespace::class_1 obj1(1000);
//     myNamespace::class_2 obj2(2000);

//     cout << "Before swapping:" << endl;
//     cout << "obj1.data1: " << obj1.data1 << endl;
//     cout << "obj2.data2: " << obj2.data2 << endl;

//     myNamespace::swapData(obj1, obj2);

//     cout << "\nAfter swapping:" << endl;
//     cout << "obj1.data1: " << obj1.data1 << endl;
//     cout << "obj2.data2: " << obj2.data2 << endl;

//     return 0;
// }

// #include <iostream>
// void passByAddress(int* num) {
//     (*num)++;
// }
// int main() {
//     int number = 10;
//     std::cout << "Before: " << number << std::endl;
//     passByAddress(&number);
//     std::cout << "After: " << number << std::endl;
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// class Person
// {
// public:
//     string name;
//     int age;
//     Person(string n, int a) : name(n), age(a) {}
//     Person(const Person &p) : name(p.name), age(p.age) {}
//     void display()
//     {
//         cout << "Name: " << name << ", Age: " << age << endl;
//     }
// };
// int main()
// {
//     Person person1("SARTHAK", 30);
//     Person person2 = person1;
//     cout << "Person 1: ";
//     person1.display();
//     cout << "Person 2: ";
//     person2.display();
//     return 0;
// }


// #include <iostream>
// using namespace std;
// class Animal {
// public:
//     virtual void makeSound() {
//         cout << "Animal makes a sound" <<endl;
//     }
// };
// class Dog : public Animal {
// public:
//     void makeSound() override {
//         cout << "Dog barks" << endl;
//     }
// };
// class Cat : public Animal {
// public:
//     void makeSound() override {
//         cout << "Cat meows" << endl;
//     }
// };
// int main() {
//     Animal* animal1 = new Dog();
//     Animal* animal2 = new Cat();
//     animal1->makeSound();
//     animal2->makeSound();
//     delete animal1;
//     delete animal2;
//     return 0;
// }


// #include <iostream>
// #include <exception>
// using namespace std;
// class CustomException : public std::exception {
// public:
//     const char* what() const noexcept override {
//         return "Custom Exception: Something went wrong!";
//     }
// };

// int main() {
//     try {
//         throw CustomException();
//     }
//     catch (const std::exception& e) {
//         cerr << "Caught Exception: " << e.what() << endl;
//     }
//     return 0;
// }



// #include <iostream>
// using namespace std;
// int main() {
//     try {
//         int num1 = 10;
//         int num2 = 0;
//         if (num2 == 0) {
//             throw "Division by zero is not allowed.";
//         }
//         int result = num1 / num2;
//         cout << "Result: " << result << endl;
//     }
//     catch (const char* msg) {
//         cerr << "Error: " << msg <<endl;
//     }
//     catch (...) {
//         cerr << "An unknown error occurred." << endl;
//     }
//     return 0;
// }



#include <iostream>
#include <string>

class Vehicle {
protected:
    float average;

public:
    virtual void getData() = 0;
    virtual void putData() = 0;
};

class Car : public Vehicle {
private:
    std::string fuelType;

public:
    void getData() override {
        std::cout << "Enter fuel type for the car (petrol, diesel, CNG): ";
        std::cin >> fuelType;
        std::cout << "Enter average for the car: ";
        std::cin >> average;
    }

    void putData() override {
        std::cout << "Car - Fuel Type: " << fuelType << ", Average: " << average << std::endl;
    }
};

class Truck : public Vehicle {
private:
    int numberOfWheels;

public:
    void getData() override {
        std::cout << "Enter number of wheels for the truck: ";
        std::cin >> numberOfWheels;
        std::cout << "Enter average for the truck: ";
        std::cin >> average;
    }

    void putData() override {
        std::cout << "Truck - Number of Wheels: " << numberOfWheels << ", Average: " << average << std::endl;
    }
};

int main() {
    Car car1, car2;
    Truck truck1;

    std::cout << "Enter details for Car 1:\n";
    car1.getData();

    std::cout << "\nEnter details for Truck 1:\n";
    truck1.getData();

    std::cout << "\nEnter details for Car 2:\n";
    car2.getData();

    std::cout << "\nDetails of Vehicles:\n";
    car1.putData();
    truck1.putData();
    car2.putData();

    return 0;
}
