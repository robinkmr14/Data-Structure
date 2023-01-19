//Program to insert the node at the point of the linked list.

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
void insertatend(node *&head, int val)
{
    node *link, *temp = new node(val);
    link = head;
    if (link != NULL)
    {
        while (link->next != NULL)
        {
            link = link->next;
        }
        link->next = temp;
    }
    else
        head = temp;
}
void insertatpoint(node *&head, int val, int pos)
{
    node *link, *n = new node(val);
    if (pos == 0)
    {
        n->next = head;
        head = n;
    }
    link = head;
    for (int i = 0; i < pos - 1; i++)
    {
        link = link->next;
    }
    n->next = link->next;
    link->next = n;
}
void display(node *temp)
{
    while (temp != NULL)
    {
        cout << temp->data << "    ";
        temp = temp->next;
    }
}
int main()
{
    node *head = NULL;

    insertatend(head, 10);
    insertatend(head, 15);
    insertatend(head, 20);
    insertatend(head, 25);
    insertatpoint(head, 30, 3);
    display(head);
    return 0;
}