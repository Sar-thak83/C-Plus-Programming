#include <iostream>
using namespace std;
class Shape {
public:
    void display() {
        cout << "This is a shape." << endl;
    }
};
class Rectangle : public Shape {
public:
    void area() {
        cout << "Area of rectangle is length * breadth." << endl;
    }
};
int main() {
    Rectangle rect;
    rect.display();
    rect.area();

    return 0;
}