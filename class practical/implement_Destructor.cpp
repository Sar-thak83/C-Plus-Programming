#include <iostream>
using namespace std;
// class Marks
// {

// public:
//     int maths;
//     int science;
//     Marks()
//     {
//         cout << "Inside Constructor" << endl;
//         cout << "C++ Object created" << endl;
//     }
//     ~Marks()
//     {
//         cout << "Inside Destructor" << endl;
//         cout << "C++ Object destructed" << endl;
//     }
// };
// int main()
// {
//     Marks m1;
//     return 0;
// }

class rectangle
{
    int length, width;
public:
    rectangle()
    { 
        length = 0;
        width = 0;
        cout << "Constructor Called"<<endl;
    }
    ~rectangle() 
    {
        cout << "Destructor Called";
    }
};
int main()

{
    rectangle x;
    return 0;
}