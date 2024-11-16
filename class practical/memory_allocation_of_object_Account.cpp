#include<iostream>
using namespace std;
class Account{
    int Account_No ,Balance;
    char Account_Type[50] ;
    public:
    void Set_Account(int Acc_No,int Bal,char Type[])
    {
        Account_No=Acc_No;
        Account_Type[50] = Type[50];
        Balance=Bal;
    }
    void Display()
    {
        cout<<"Account No = "<<Account_No<<endl;
        cout<<"Account Type = "<<Account_Type<<endl;
        cout<<"Total Balance = "<<Balance<<endl;
    }
};
int main()
{
    Account Account1,Account2;
    Account1.Set_Account(23003110,300000,"Saving");
    Account2.Set_Account(23003111,400000,"Current");
    cout<<"Display the Details of Accounts 1:"<<endl;
    Account1.Display();
    cout<<"Display the Details of Accounts 2:"<<endl;
    Account2.Display();
    return 0;
}