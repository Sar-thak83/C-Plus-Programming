// Define classes for following data members and member functions.
// b. Bank account
//    i. Data members Name of the depositor, Account number, Type of account, Balance amount in the account
//    ii. Member functions To assign initial values, To deposit an amount, To withdraw an amount after checking 
//    the balance, To display name and balance



#include<iostream>
using namespace std;
class Bank_Account{
    private:
    int Account_Number,Balance ;
    string Name_Account_Holder,Type_of_Account;
    public:
    void intial_value( int Acc_No,int Bal ,string Acc_Hol,string TypAcc)
    {
        Account_Number=Acc_No;
        Name_Account_Holder=Acc_Hol;
        Balance=Bal;
        Type_of_Account=TypAcc;
    }
    void Deposite_Amount(double amount)
    {
        Balance+=amount;
    }
    void Withdraw_amount(double amount)
    {
        if (amount<=Balance )
        {
            Balance-=amount ;
        }
        else 
        {
            cout<<"Insuffient Balance !";
        }
    }
    void Display()
    {
        
        cout<<"Account Number = "<<Account_Number<<endl;
        cout<<"Type of Account = "<<Type_of_Account<<endl;
        cout<<"Name of Account Holder = "<<Name_Account_Holder<<endl;
        cout<<"Balance = "<<Balance<<endl;
    }
};
int main()
{
    Bank_Account Customer1;
    Customer1.intial_value( 3697,50000,"Sarthak", "Saving");
    Customer1.Deposite_Amount(2000);
    Customer1.Withdraw_amount(6000);
    Customer1.Display();
    return 0;
}