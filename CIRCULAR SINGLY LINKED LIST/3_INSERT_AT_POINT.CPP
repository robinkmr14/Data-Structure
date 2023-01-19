// PROGRAM TO INSEST A NODE AT THE POINT IN A CIRCULAR SINGLY LINK LIST.

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
void insertatpoint(node* &head,int key, int val)
{
    node* n = new node(val);
    node* temp = head;
    while(temp->data != key)
    {
        temp = temp->next;
    }
    n->next = temp->next;
    temp->next = n;
    
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
    insertatpoint(head,20,50);
    display(head);
    return 0;
}