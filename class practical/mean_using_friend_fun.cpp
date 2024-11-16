#include <iostream>
using namespace std;
class mean
{
    float val1, val2;
public:
    void setdata()
    {
    cout << "Enter the value of Val1 = ";
    cin >> val1;
    cout << "Enter the value of Val2 = ";
    cin >> val2;
}
    friend float Mean(mean m);
};

float Mean(mean m){
    return (m.val1+m.val2)/2;
}
int main()
{
    mean m1;
    m1.setdata();
    cout<<"The mean of val1 and val2 = "<<Mean(m1);
    return 0;
}