// PROGRAM TO DELETE END NODE IN CIRCULAR DUBLY LINKED LIST.

#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next, *prev;

    node(int val)
    {
        data = val;
    }
};

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
    n->next = head;
    head->prev = n;
}

void deletehead(node *&head)
{
    cout << "After deletion the end node" << endl;
    if (head->next == head)
    {
        delete (head);
        head = NULL;
    }
    else
    {

        node *temp = head->prev;
        temp->prev->next = head;
        head->prev = temp->prev;
        delete (temp);
    }
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
    int n, val;
    cout << "Enter the numbers of NODES :";
    cin >> n;

    cout << "Enter the NODES :";
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        insertatend(head, val);
    }
    display(head);
    deletehead(head);
    display(head);
    return 0;
}
