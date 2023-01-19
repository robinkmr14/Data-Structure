// PROGRAM TO DELETE AT POINT IN THE CIRCULAR LINKED LIST.

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

void deleteatpoint(node *&head, int key)
{
    cout << "After delete the node :";
    node *temp = head;
    node *prev;
    while (temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;
    temp->next->prev = prev;
    delete (temp);
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

    cout << "Enter the node which you want to delete :";
    cin >> key;

    deleteatpoint(head, key);

    display(head);

    return 0;
}
