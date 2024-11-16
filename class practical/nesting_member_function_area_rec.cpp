// Define class Rectangle with member width,height. Also define function tosetvalue(), displayvalue(). 
// Demonstrate nested member functions.
#include<iostream>
using namespace std;
class Rectangle{
    private:
    int Width,Height;
    public:
    void To_Set_value(int H,int W)
    {
        Height=H;
        Width=W;
        // Display_Value();
    }
    // void Display_Value(){
    //     cout<<"Height="<<Height<<endl;
    //     cout<<"Width="<<Width<<endl;
    // }
    friend float area(Rectangle );
    
};

float area(Rectangle rec)
{
    return (rec.Width*rec.Height);
}
int main(){
Rectangle r1;
r1.To_Set_value(5,6);
// cout<<"\n-------\n";
// r1.Display_Value();
cout<<"Area : "<<area(r1);
return 0;
}