#include<iostream>
using namespace std;
class increment{
    private :
    int m;
    public:
    increment(){
        m=0;
    }
    increment(int x){
        m=x;
    }
    void setdata()
    {
        cout<<"Number Before increment = ";
        cin>>m;
    }
    void operator ++ ( )
    {
        ++m;
        cout<<"After Pre-Increment the value of m = "<<m<<endl;
    }
    void operator ++ (int){
        m++;
       cout<<"After Post-Increment the value of m = "<<m; 
    }
};
int main()
{
    increment inc;
    inc.setdata();
    ++inc;
    inc++;   
}