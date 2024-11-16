// #include <iostream>
// using namespace std;
// class sample
// {
//     float a;

// public:
//     sample()
//     {
//         a = 10.23;
//     }
//     operator int()
//     {
//         int x;
//         x = a;
//         return x;
//     }
// };
// int main()
// {
//     sample S;
//     int y = S;
//     cout << "The value of y = " << y;
//     return 0;
// }

// Write A C++ program to find

#include <iostream>
using namespace std;
class vector
{
    int a[5];

public:
    vector()
    {
        for (int i = 0; i < 5; i++)
        {
            a[i] = i * 2;
        }
    }
    operator int();
};
vector::operator int()
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + a[i];
        return sum;
    }
}
int main()
{
    vector v;
    int sum;
    sum=v;
    cout<<"Sum of V = "<<sum;
    return 0;
}
