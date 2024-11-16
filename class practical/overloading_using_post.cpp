#include <iostream>
using namespace std;
class post
{
private:
    int x, y, z;

public:
    post()
    {
        x = 0;
        y = 0;
        z = 0;
    }
    post(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    void setdata()
    {
        cout << "Value of x,y,z before post : "<<endl;
        cout << "x = ";
        cin >> x;
        cout << "y = ";
        cin >> y;
        cout << "z = ";
        cin >> z;
    }
    void display()
    {
        cout << "x = " << x << endl
             << "y = " << y << endl
             << "z = " << z << endl;
    }

    int operator--();
};
int post ::operator--()
{
    x--;
    y--;
    z--;
}
int main()
{
    post p1;
    p1.setdata();
    --p1;
    cout<<"value of x,y,z after post :"<<endl;
    p1.display();
    return 0;
}
