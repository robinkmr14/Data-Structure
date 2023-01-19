
//Program to insert the node at the head of the linked list.

#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insertathead(node * &head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

void display(node *temp)
{
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    node *head = NULL;
 
    insertathead(head, 5);
    insertathead(head, 10);
    insertathead(head, 15);
    insertathead(head, 20);
    insertathead(head, 25);
    display(head);
    return 0;
}
