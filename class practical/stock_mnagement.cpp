// You are tasked with developing a stock management system to efficiently handle two types of stocks:stock1 and stock2. 
// Each stock type has its own set of attributes and functionalities.
// stock1 Class:
// This represents a type of stock characterized by a unique code, the quantity of items in stock,
// and the price per item. Implement the following functionalities:
// Constructor to initialize the stock with given values.
// Method to display the details of the stock (disp()).
// Accessor methods to retrieve the code, item quantity, and price.
// Implicit conversion operator to calculate the total value of the stock.
// stock2 Class:
// This represents another type of stock identified by a code and its total value. Implement the following functionalities:
// Constructors to initialize the stock with default values, given values, and by converting a stock1 object.
// Method to display the details of the stock (disp()).
// Main Functionality: Your program should allow users to:
// Create instances of stock1 and stock2.
// Display the details of each stock.
// Calculate and display the total value of stock1.
// Convert a stock1 object to a stock2 object and display its details.


#include <iostream>
using namespace std;
class stock1;
class stock2;
class stock1{
    private :
    int price ,uni_code ,quantity;
    public:
    stock1()
    {
        price =0;
        uni_code=0;
        quantity=0;
    }
    stock1(int a,int b ,int c )
    {
        price=a ;
        uni_code=b;
        quantity=c;
    }
    void Set_value()
    {
        cout<<"price  of  stock1 per item = " ;
        cin>>price ;
        cout<<"Unique code of stock1 = ";
        cin>>uni_code;
        cout<<"Quantity of Stock1 = ";
        cin>>quantity;
    }
    void display()
    {
        cout<<"price  of  stock1 = "<<price<<endl<<"Unique code of stock1 = "<<uni_code<<endl<<"Quantity of Stock1 = "<<quantity<<endl;
    }
    int getcode()
    {
        return uni_code;
    }
    int getquantity()
    {
        return quantity;
    }
    int getprice()
    {
        return price ;
    }
    operator int ()
    {
        return price*quantity;
    }
};
class stock2{
    private:
    int uni_code ,price ;
    public:
    stock2()
    {
        price =0;
        uni_code=0;
    }
    stock2(int a,int b){
        price =a;
        uni_code=b;
    }
    void Display()
    {
        cout << "code of stock2 = " << uni_code << endl ;
        cout << "Total value in Rs. = " << price << endl;
    }
    stock2( stock1 p ){
        uni_code=p.getcode();
        price=p.getprice()*p.getquantity();
    }
};
int main()
{
    stock1 stk1;
    stock2 stk2;
    stk1.Set_value();
    cout<<endl<<"Display the Details of stock 1 : "<<endl;
    int total_value =stk1;
    stk2=stk1;
    stk1.display();
    cout<<"Stock Value = "<<total_value<<endl;
    cout<<"Display the Details of stock 2 :"<<endl;
    stk2.Display();
    return 0;
}