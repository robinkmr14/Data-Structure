// PROGRAM TO INSERT A NODE AT AFTER IN CIRCULAR DOUBLY LINKED LIST.

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
        next;
        prev;
    }
};
void insertatafter(node *&head, int key, int val)
{
    node *n = new node(val);
    node *temp = head;
    while (temp->data != key)
    {
        temp = temp->next;
    }
    n->next = temp->next;
    temp->next->prev = n;
    n->prev = temp;
    temp->next = n;
}

void insertatend(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        head->next = head;
        head->prev = head;
        return;
    }
    node *temp = head->prev;
    temp->next = n;
    n->prev = temp;
    n->next = head;
    head->prev = n;
}

void display(node *head)
{
    node *temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);

    cout << endl;
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

    cout << "Enter the key and also enter the value which you want to insert after the key :";
    cin >> key >> val;
    insertatafter(head, key, val);
    display(head);
    return 0;
}