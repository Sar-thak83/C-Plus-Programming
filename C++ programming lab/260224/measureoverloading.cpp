// #include<iostream>
// #include<string>
// using namespace std;
// void print(char name[10] )
// {
//     cout<< "Print name :"<<name<<endl;
// }
// void print(int roll) 
// {
//     cout<< "Print Roll :"<<roll<<endl;
// }
// int main()
// {
//     int roll;
//     char name[10];
//     cout<<"Enter your Name :";
//     cin>>name[10];
//     cout<<" Enter your roll :";
//     cin>>roll;
//     print(roll);
//     print(name);
//     return 0;
// }
// #include <iostream>
// #include <string>
// using namespace std;

// void printInfo(string name) {
//     cout << "Name: " << name << endl;
// }

// void printInfo(int rollNo) {
//     cout << "Roll Number: " << rollNo << endl;
// }

// int main() {
//     int rollNo;
//     char name ;
//     printInfo(name );
//     printInfo(rollNo);

//     return 0;
// }
#include <iostream>
#include <string>
using namespace std;

void printInfo( int name) {
    cout << "Name: " << name << endl;
}

void printInfo(int rollNo) 
{
    cout << "Roll Number: " << rollNo << endl;
}

int main() {
    int name ,rollNo;
    cin>>name ;
    cin>>rollNo;
    printInfo(name );
    printInfo(rollNo);

    return 0;
}