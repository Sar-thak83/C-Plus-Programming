// W.A.P. to calculate Total amount for all customers of bank for fixed interest rate, (Default Argument)


#include<iostream>
using namespace std;
double calculate_total_amount(int principal,double interest_rate )
{
    double Total_amount = principal*(1+interest_rate );
    return Total_amount;
}
int main()
{
    int principal_amount ;
    double interest_rate,Total_Amount;
    cout<<"Enter the principal amount = ";
    cin>>principal_amount;
    cout<<"Enter the interest rate = ";
    cin>>interest_rate;
    Total_Amount=calculate_total_amount(principal_amount,interest_rate);
    cout<<"The Total amount of the customer is "<<Total_Amount;
    return 0;
}