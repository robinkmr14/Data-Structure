// PROGRAM TO IMPLIMENTATION ALL THE STACK FUNCTION .

#include <iostream>
using namespace std;

#define MAX 100
int top = -1;
int aa[MAX];

void push(int data)
{
    if (top >= MAX - 1)
    {
        cout << "Stack overflow.";
        return;
    }
    aa[++top] = data;
    cout << data << "  push into stack." << endl;
}
void pop()
{

    if(top == -1)
    {
        cout<<"Stack is Empty";
    }
    else
    cout<<"\nPoped from stack : "<<aa[top];
    top--;
}
void peek()
{
    cout<<"\nTop element is  : "<<aa[top];
}
void size()
{
    cout<<"\nSize of the stack is  : "<<top+1;
}
void display()
{
    cout << "\nStack is :   ";
    for (int i = 0; i <= top; i++)
    {
        cout << aa[i] << "  ";
    }
}
int main()
{
    push(10);
    push(15);
    push(20);
    push(25);
    push(30);
    display();
    pop();
    peek();
    display();
    size();

    return 0;
}