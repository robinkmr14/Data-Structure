// PROGRAM TO IMPLEMENTATION LINKED LIST .


#include <iostream>
using namespace std;

class stacknode
{
public:
    int data;
    stacknode *next;
    stacknode(int val)
    {
        data = val;
        next = NULL;
    }
};
void push(stacknode *&stack, int val)
{
    stacknode *n = new stacknode(val);
    if (stack == NULL)
    {
        stack = n;
        cout << val << " -> Pushed in Stack" << endl;
        return;
    }
    n->next = stack;
    stack = n;
    cout << val << " -> Pushed in Stack " << endl;
}
void peek(stacknode* &top)
{
    cout<<"Top element is ---> ";
    if(top == NULL)
    {
        cout<<"stack is underflow.\n";
        return;
    }
    cout<<top->data;
    
}
void pop(stacknode* &top)
{
    cout<<"--------After Popping -------- ";
    stacknode* temp = top;
    if(top == NULL)
    {
        cout<<"stack is underflow.\n";
    }
    top = temp->next;
    delete(temp);
}

void display(stacknode *stack)
{
    cout << "\n\nStack is --> ";
    while (stack != NULL)
    {
        cout << stack->data << "  ";
        stack = stack->next;
    }
    cout << endl;
}
int main()
{
    stacknode *top = NULL;
    push(top, 10);
    push(top, 20);
    push(top, 30);
    push(top, 40);
    display(top);
    pop(top);
    display(top);
    peek(top);

    return 0;
}