// PROGRAM TO DELETE A NODE AT THE POINT IN CIRCULAR LINKED LIST.

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
    node *n = new node(val);
    node *temp = head;
    if (head == NULL)
    {
        head = n;
        head->next = head;
        return;
    }
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
}

void deleteatpoint(node *&head)
{
    cout << "Enter the node which you want to delete :";
    int key;
    cin >> key;

    node *temp = head;
    node *prev;
    while (temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;
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
    insertatend(head, 10);
    insertatend(head, 20);
    insertatend(head, 30);
    insertatend(head, 40);
    display(head);
    deleteatpoint(head);
    display(head);
    return 0;
}