// W.A.P. for function overloading for add(), volume() with different types of arguments and return types.


#include<iostream>
using namespace std;
int volume (double  side )
{
    return side *side *side;
}
int volume (int length,int breath,int height)
{
    return length*breath*height;
}
int volume (int radius ,int height )
{
    return 3.14*radius*radius *height;
}
int main()
{
    cout<<"volume of cube = "<<volume (5)<<endl;
    cout<<"volume of cuboid = "<<volume(3,9,8)<<endl;
    cout<<"volume of cylinder = "<<volume (3,9)<<endl;
    return 0;
}