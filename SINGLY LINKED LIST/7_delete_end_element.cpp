// Program to delete the node at the end of the linked list.

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
void display(node *temp2)
{
    while (temp2 != NULL)
    {
        cout << temp2->data << "    ";
        temp2 = temp2->next;
    }
    cout << endl;
}

void deleet(node *&head)
{
    node *link, *prev;

    link = head;
    while (link->next != NULL)
    {
        prev = link;
        link = link->next;
    }
    prev->next = NULL;
    delete (link);
}
int main()
{
    node *head = NULL;
    head = new node(5);

    insertatend(head, 10);
    insertatend(head, 15);
    insertatend(head, 20);
    insertatend(head, 30);
    display(head);
    deleet(head);
    display(head);
    return 0;
}