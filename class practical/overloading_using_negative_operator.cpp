#include<iostream>
using namespace std;
class negative {
    private :
    int x,y,z ;
    public: 
    negative(){
        x=0;
        y=0;
        z=0;
    }
    negative(int a,int b,int c  )
    {
        x=a;
        y=b;
        z=c;
    }
    void Display()
    {
        cout<<"x="<<x<<endl<<"y="<<y<<endl<<"z="<<z<<endl ;
    }
    void operator - ();
};

void negative :: operator - () {
    x=-x;
    y=-y;
    z=-z;
}
int main()
{
    negative n1(3,7,8);
    n1.Display();
    -n1;
    n1.Display();
    return 0;
}