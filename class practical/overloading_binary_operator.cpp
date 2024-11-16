#include<iostream>
using namespace std;
class complex{
    private:
    int r,i;
    public:
    complex(){
        r=0;
        i=0;
    }
    complex(int x,int y){
        r=x;
        i=y;
    }
    void Display()
    {
        cout<<"Real = "<<r<<endl;
        cout<<"Imaginary"<<i<<endl;
    }
   int  operator == ( complex);
};
int complex :: operator == ( complex  c )
{
    if ( r==c.r && i==c.i)
    return 1;
    else 
    return 0;
}
int main()
{
    complex c1(5,3),c2(5,3);
    if (c1==c2)
    {
        cout<<"Objects are equal ";
    }
    else 
    {
        cout<<"objects are unequal";
    }
    return 0;
}