// Write a C++ program to implement a class called BankAccount that has private member variables for account number and balance. 
// Include member functions to deposit and withdraw money from the account.


#include<iostream>
using namespace std;
class BankAccount{
    private :
    string Account_Number;
    double Balance ;
    public:
    void setdata( ){
       cout<<"Enter the Account Number = ";
       cin>>Account_Number;
       cout<<"Enter the Balance = ";
       cin>>Balance;
    }
    void Deposite(double amount)
    {
        Balance = Balance+amount;
        cout<<"Deposite successfull Total Balance = "<<Balance<<endl;
    }
    void Withdrawal(double amount)
    {
        if (Balance > amount )
        {
            Balance=Balance-amount;
            cout<<"Withdrawal successfull Total Remaining Balance = "<<Balance<<endl;
        }
        else
        {
            cout<<"Madarchod Aukat Me withdraw kar le ";
        }
    }
};
int main()
{
    BankAccount Acc_holder1;
    Acc_holder1.setdata();
    Acc_holder1.Deposite(100000);
    Acc_holder1.Withdrawal(50000);
    return 0;
}