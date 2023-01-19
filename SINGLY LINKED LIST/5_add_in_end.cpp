
//Program to add node at the end of the linked list.

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
void insertend(node *&head , int val)
{
    node* n = new node(val);
    node* temp = head;
    while (temp->next!=NULL)
    {
        temp= temp->next;
    }
    temp->next=n;
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
    node *second = NULL;
    node *third = NULL;

    head = new node(5);
    second = new node(10);
    third = new node(15);
    head->next = second;
    second->next = third;

    insertend(head, 20);
    display(head);
    return 0;
}
