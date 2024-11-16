/*
p1
#include<iostream>
using namespace std;
int main()
{
    cout<<"Name:Sarthak\n";
    cout<<"City:Ahemdabad\n";
    cout<<"Country:India\n";
    return 0;
}
p2
#include<iostream>
using namespace std;
int main()
{
    cout<<"Name:Sarthak"<<endl;
    cout<<"City:Ahemdabad"<<endl;
    cout<<"Country:India"<<endl;
    return 0;
}
p3
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the no a :";
    cin>>a;
    cout<<"Enter the no b :";
    cin>>b;
    cout<<"Addition : "<<a+b;
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"ENter the value of n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n :";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<" ";
        }
        for(int K=i;K<=n;K++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout <<" Enter the value of n ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int i=1;i<n;i++)
        {
            cout
        }
    }
}
#include <stdio.h>
#include <stdlib.h>
# define SIZE 4
int top = -1, array[SIZE] ;
void push();
void pop();
void display();
int main()
{
    int n ;
    while (1)
    {
        // enter 1 for push,enter 2 for pop,enter 3 for display
        printf("Choose the operation you want to perform\n");
        printf("1. Push\n2. Pop\n3. Display\n");
        printf("Enter the operation: ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        default:
            printf("invalid choice ");
            break;
        }
    }
}
void push()
{
    int x;
    if (top = SIZE - 1)
    {
        printf("The stack is overflow ");
    }
    else
    {
        printf("Enter the element to insert in stack : ");
        scanf("%d", &x);
        top++;
        array[SIZE] = x;
    }
}
void pop()
{
    if (top == -1)
    {
        printf("The stack in Underflow");
    }
    else
    {
        printf("The Popped element: %d\n", array[top]);
        top--;
    }
}
void display()
{
    if (top == -1)
    {
        printf("The stack in Underflow ");
    }
    else
    {
        printf("\nElements present in the stack: \n");
        for (int i = top; i >= 0; --i)
        {
            printf("%d\n", array[i]);
        }
    }
}



#include<iostream>
using namespace std;
int main()
{
    int x,y;
    x=5;
    y=(++x)*(++x);
    cout<<x<<y;
    x=5;
    y = x++*++x ;
    cout<<x<<y;
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int m=2,n=3,r;
    r=(m>n)?m:n

}
#include<iostream>
using namespace std;
int main()
{
    int n=2,m=3,c;
    c=n&&m;
    cout<<"outcome="<<c;
    return 0;
}
<html>
    <head>
        <style>
            body
            {
                background-color: rgb(154, 61, 61);
            }
            h1
            {
                color:rgb(16, 87, 107);
                font-size:60px;
                text-align:right;
            }
            img
            {
                width:300;
                height:500;
                text-align:left ;
            }
            h2
            {
                color:rgb(173, 148, 84) ;
                font-size:40px;
                text-align:right;
            }
        </style>
    </head>
    <body>
        <h1>SARTHAK SAHU</h1>
        <img src="https://camo.githubusercontent.com/7055dd3e791f3c3fe3d5485723efe5b96359ac41185ad411981e0450251bd43e/68747470733a2f2f75706c6f61642e77696b696d656469612e6f72672f77696b6970656469612f636f6d6d6f6e732f362f36352f4861636b657252616e6b5f6c6f676f2e706e67" />
        <h2>I am a b.tech first year student and i'm <br> pursuing my graduation degree from RRU.</h2>
    </body>
</html>*/
/*#include<iostream>
using namespace std;
int m=10;
int main()
{
    int m=20;
    {
        int k=m;
        int m=3;
        cout<<k<<endl;
        cout<<m<<endl;
        cout<<::m<<endl;
    }
    cout<<m<<endl;
    cout<<::m<<endl;
    return 0;
}
#include <iostream>
using namespace std;
enum Gender
{
    male,
    female
};
int main()
{
    Gender gender = male ;
    switch (gender)
    {
    case male:
        cout << "Gender is male ";
        break;

    case female:
        cout << "Gender is femlae";
    default:
        cout << "value can be male or female ";
    }
}
#include<iostream>
using namespace std;
enum days { sun,mon,tue,wed,thu,fri,sat };
int main()
{
    days today;
    today = tue;
    today = 6;
    today++;

 unit 3
 int addition(a,b);
#include <stdio.h>
int x = 10;
int f()
{
    return x;
}
int g()
{
    int x = 20;
    return f();
}
int main()
{
    printf("%d\n", g());
    return 0;
}
#include<iostream>
using namespace std;
void swap(int a,int b)
{
    int faltu;
    faltu=a;
    a=b;
    b=faltu;
}
int main()
{
    int a,b;
    cout<<"Enter the value of a and b: ";
    cin>>a>>b;
    swap(a,b);
    cout<<"the swap value of a and b"<<a<<b;

}
#include<Stdio.h>
void swap(int a, int b)
{
    int faltu;
    faltu=a;
    a=b;
    b=faltu;
    printf("%d\t %d\n",a,b);  
}

int main()
{
    int a,b;
    printf("enter the value of a,b:  ");
    scanf("%d%d\n",&a,&b);
    swap(a,b);
    printf("%d\t %d\n",a,b);
    return 0;
}
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10;
    int y = 20;

    printf("Before swapping: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}*/
#include<iostream>
using namespace std;
#define pi 3.14
#define area(r) (pi*r*r)
int main()
{
    int r;
    cin>>r;
    cout<< area(r)<<endl;
}

