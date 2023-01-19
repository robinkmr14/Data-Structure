// program to add node at head in doubly linked list.

#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;

    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};
void insertatend(node *&head, int val)
{
    node *n = new node(val);
    node *temp = head;
    if (head == NULL)
    {
        head = n;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = n;
        n->prev = temp;
    }
}
void reverse(node *&head)
{
    node *first = NULL;           
    node *second = head;
    while (second != NULL)
    {
        first = second->prev;
        second->prev = second->next;
        second->next = first;
        second = second->prev;
    }
    if (first != NULL)
        head = first->prev;
}
void display(node *temp)
{
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}
int main()
{
    node *head = NULL;
    int n, val, key;
    cout << "Enter the numbers of NODES :";
    cin >> n;

    cout << "Enter the NODES :";
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        insertatend(head, val);
    }
    display(head);
    reverse(head);
    display(head);
    return 0;
}
