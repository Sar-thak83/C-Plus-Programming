// Write a C++ program to create a class called Person that has private member variables for name, age and country.
// Implement member functions to set and get the values of these variables.


#include <iostream>
using namespace std;
class person
{
private:
    string Name;
    int Age;
    string Country;

public:
    void Setdata(string name, int age, string country)
    {
        Name = name;
        Age = age;
        Country = country;
    }
    string getName()
    {
        return Name;
    }
    int getAge()
    {
        return Age;
    }

    string getCountry()
    {
        return Country;
    }
};
int main(){
    person p;
    p.Setdata( "Sarthak" ,18,"india" );
    cout<<"Name = "<<p.getName()<<endl<<"Age = "<<p.getAge()<<endl<<"Country = "<<p.getCountry();
    return 0;
}