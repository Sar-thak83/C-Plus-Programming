// Write a C++ program to convert Celsius to Fahrenheit and Fahrenheit to Celsius.
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "choose the operation that you want to perform in these following option."<<endl;
//     cout << "1.conversion of celcieus to Fahrenheit " << endl
//          << "2.conversion of Fahrenheit to celcieus  "<<endl;
//     cout << "Enter the operation you want to perform : ";
//     cin >> n;
//     switch (n)
//     {
//     case 1:
//         int celsius, fahrenheit;
//         cout << "Enter the value of temperature in celcius : ";
//         cin >> celsius;
//         fahrenheit = ((9/5) * celsius) + 32;
//         cout << "The value of " << celsius << " .C in fahrenheit is : " << fahrenheit;
//         break;
//     case 2:
       
//         cout << "Enter the value of temperature in fahrenheit : ";
//         cin >> celsius;
//         celsius = (fahrenheit-32) * (5/9);
//         cout << "The value of " << celsius << " .C in fahrenheit is : " << fahrenheit;
//         break;

//     default:
//     cout<<"you Enter the wrong value  of operation";
//         break;
//     }
// }



#include <iostream>
using namespace std;
int main() {
    int choice;
    double balance = 0.0;
    do {
        cout << "1. Deposit\n2. Withdrawal\n3. Display\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice) {
            case 1:
                double depositAmount;
                cout << "Enter deposit amount: ";
                cin >> depositAmount;
                balance += depositAmount;
                break;
            case 2:
                double withdrawAmount;
                cout << "Enter withdrawal amount: ";
                cin >> withdrawAmount;
                if (withdrawAmount <= balance) {
                    balance -= withdrawAmount;
                } else {
                    cout << "Insufficient funds\n";
                }
                break;
            case 3:
                cout << "Current balance: $" << balance << endl;
                break;
            case 4:
                cout << "Exiting program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);
    
    return 0;
}
