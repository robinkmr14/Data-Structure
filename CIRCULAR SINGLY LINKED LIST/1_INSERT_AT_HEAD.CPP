// PROGRAM TO INSEST A NODE AT THE BEGINNING IN A CIRCULAR SINGLY LINK LIST.

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
void insertathead(node *&head, int val)
{
    node *n = new node(val);
    node *temp = head;

    if (head == NULL)
    {
        head = n;
        head->next = head;
    }
    else
    {
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = n;
        n->next = head;
        head = n;
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
    insertathead(head, 10);
    insertathead(head, 20);
    insertathead(head, 30);
    insertathead(head,40);
    display(head);
    return 0;
}