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
#include<stdio.h>
#define size 4
int top=-1, array[size];
void push();
void pop();
void display();
int main()
{
    int n;
    //enter 1 for push,enter 2 for pop,enter 3 for display
    printf("Enter the value of n according to operation you want to perform :");
    scanf("%d",&n);
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
void push()
{
    int x;
    if(top=size-1)
    {
        printf("The stack is overflow ");
    }
    else
    {
        printf("Enter the element to insert in stack : ");
        scanf("%d",&x);
        top++;
        array[size] = x;
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
        printf("The Popped element: %d",array[top]);
        top-- ;
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
#include <stdio.h>
#include <stdlib.h>
#define SIZE 4
int top = -1, array[SIZE];
void push();
void pop();
void show();
int main()
{
    int choice;
    while (1)
    {
        printf("\nPerform operations on the stack:");
        printf("\n1.Push the element\n2.Pop the element\n3.Show\n4.End");
        printf("\n\nEnter the choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            show();
            break;
        case 4:
            exit(0);
        default:
            printf("\nInvalid choice!!");
        }
    }
}
void push()
{
    int x;
    if (top == SIZE - 1)
    {
        printf("\n The stack is Overflow!!");
    }
    else
    {
        printf("\nEnter the element to be added onto the stack: ");
        scanf("%d", &x);
        top++;
        array[top] = x;
    }
}
void pop()
{
    if (top == -1)
    {
        printf("\nThe stack is Underflow");
    }
    else
    {
        printf("\nThe Popped element: %d", array[top]);
        top--;
    }
}
void show()
{
    if (top == -1)
    {
        printf("\nThe stack is Underflow!!");
    }
    else
    {
        printf("\nElements present in the stack: \n");
        for (int i = top; i >= 0; --i)
            printf("%d\n", array[i]);
    }
}
#include <stdio.h>
#include <stdlib.h>
#define SIZE 4

int top = -1, array[SIZE];

void push();
void pop();
void display();

int main() {
    int n;
    while (1)
    {
        printf("Choose the operation you want to perform\n");
        printf("1. Push\n2. Pop\n3. Display\n");
        printf("Enter the operation : ");
        scanf("%d", &n);
        switch (n) {
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
                printf("Invalid choice\n");
                break;
        }
    }
    return 0;
}

void push() {
    int x;
    if (top == SIZE - 1) {
        printf("The stack is overflow\n");
    } else {
        printf("Enter the element to insert in stack: ");
        scanf("%d", &x);
        top++;
        array[top] = x;
    }
}

void pop() {
    if (top == -1) {
        printf("The stack is Underflow\n");
    } else {
        printf("The Popped element: %d\n", array[top]);
        top--;
    }
}

void display() {
    if (top == -1) {
        printf("The stack is Underflow\n");
    } else {
        printf("Elements present in the stack:\n");
        for (int i = top; i >= 0; --i) {
            printf("%d\n", array[i]);
        }
    }
} *?

*
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
        <h1>iski maaa ko pranam karu </h1>
        <img src="https://camo.githubusercontent.com/7055dd3e791f3c3fe3d5485723efe5b96359ac41185ad411981e0450251bd43e/68747470733a2f2f75706c6f61642e77696b696d656469612e6f72672f77696b6970656469612f636f6d6d6f6e732f362f36352f4861636b657252616e6b5f6c6f676f2e706e67" />
        <h2> RRU </h2>
    </body>
</html>*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 4

int top = -1, array[SIZE];

void push();
void pop();
void display();
void peek();
void peep();
void change();
int main()
{
    int n;
    while (1)
    {
        printf("Choose the operation you want to perform\n");
        printf("1. Push\n2. Pop\n3. Display\n4. peek\n5. peep\n6. change\n7. exit\n ");
        printf("Enter the operation : ");
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
        case 4:
            peek();
            break;
        case 5:
            peep();
            break;
        case 6:
            change();
            break;
        default:
            printf("Invalid choice\n");
            break;
        }
    }
    return 0;
}

void push()
{
    int x;
    if (top == SIZE - 1)
    {
        printf("The stack is overflow\n");
    }
    else
    {
        printf("Enter the element to insert in stack: ");
        scanf("%d", &x);
        top++;
        array[top] = x;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("The stack is Underflow\n");
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
        printf("The stack is Underflow\n");
    }
    else
    {
        printf("Elements present in the stack:\n");
        for (int i = top; i >= 0; --i)
        {
            printf("%d\n", array[i]);
        }
    }
}

void peek()
{
    if (top == -1)
    {
        printf("The stack is underflow \n");
    }
    else
    {
        printf("the peek elements in the stack :%d\n", array[top]);
    }
}
void peep()
{
    int p;
    printf("\nEnter the position : ");
    scanf("%d", &p);
    if (top - p <= -1)
    {
        printf("\nSTACK is overflow !!!");
    }
    else
    {
        printf("\nThe Elements is : %d", array[top - p]);
    }
}
void change()
{
    int p, x;
    printf("\nEnter Position for change : ");
    scanf("%d", &p);
    printf("\nEneter the Number for change : ");
    scanf("%d", &x);
    if (top - p <= -1)
    {
        printf("STACK is overflow");
    }
    else
    {
        array[top - p] = x;
        printf("CHANGE successfull !!!");
    }
}