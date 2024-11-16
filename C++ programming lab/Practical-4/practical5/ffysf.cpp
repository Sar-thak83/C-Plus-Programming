// #include <iostream>
// using namespace std;
// class Base
// {
// public:
//     void display()
//     {
//         cout << "Base class display function" << endl;
//     }
// };
// class Derived : public Base
// {
// public:
//     void display()
//     {
//         cout << "Derived class display function" << endl;
//     }
// };
// int main()
// {
//     Base baseObj;
//     Derived derivedObj;
//     Base *basePtr = &baseObj;
//     Derived *derivedPtr = &derivedObj;
//     basePtr->display();
//     derivedPtr->display();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Base {
// public:
//     virtual void display() {
//         cout << "Displaying from Base class" << endl;
//     }
// };
// class Derived : public Base {
// public:
//     void display() override {
//         cout << "Displaying from Derived class" << endl;
//     }
// };
// int main() {
//     Base* basePtr = new Derived();
//     basePtr->display(); 
//     delete basePtr;
//     return 0;
// }

#include <iostream>
using namespace std;
class Celsius {
private:
    float temperature;
public:
    Celsius(float temp) : temperature(temp) {}
    float getTemperature() { return temperature; }
};

class Fahrenheit {
private:
    float temperature;
public:
    Fahrenheit(float temp) : temperature(temp) {}
    Fahrenheit(Celsius c) : temperature((c.getTemperature() * 9.0/5.0) + 32) {}
    float getTemperature() { return temperature; }
};

int main() {
    Celsius celsiusObj(25.0);
    Fahrenheit fahrenheitObj = celsiusObj; 
    cout << "Celsius: " << celsiusObj.getTemperature() << " C" << endl;
    cout << "Fahrenheit: " << fahrenheitObj.getTemperature() << " F" << endl;
    return 0;
}
