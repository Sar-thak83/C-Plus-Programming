// Write a C++ program to create class Test having data members mark and spi.
// Create member functions SetData() and DisplayData()to demonstrate class and objects

#include<Iostream>
using namespace std;
class Test{
    private :
    float marks;
    float spi;
    public:
    void SetData(float m,float s)
    {
        marks=m;
        spi=s;
    }
    void DisplayData() 
    {
        cout<<"Marks = "<<marks<<endl;
        cout<<"Spi = "<<spi<<endl;
    }
};
int main()
{
    Test T1;
    T1.SetData(270,5.34);
    T1.DisplayData();
    return 0;
}
