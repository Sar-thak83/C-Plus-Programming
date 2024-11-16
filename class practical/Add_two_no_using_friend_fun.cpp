#include<iostream>
using namespace std;
class numbers {
    int num1,num2;
    public:
    void setData()
    {
        cout<<"Enter the value of num 1 : ";
        cin>>num1;
        cout<<"Enter the value of num 2 : ";
        cin>>num2;
    }
    friend int Add(numbers N);
};
int Add(numbers N)
    {
        return N.num1+N.num2;
    }
int main()
{
    numbers N1;
    N1.setData();
    cout<<"Sum of the numbers = "<<Add(N1);
    return 0;
}