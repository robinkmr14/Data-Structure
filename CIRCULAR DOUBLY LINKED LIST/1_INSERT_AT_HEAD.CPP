// PROGRAM TO INSERTA A NODE AT THE HEAD IN CIRCULAR DOUBLY LINKED LIST.

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

void insertathead(node *&head, int val)
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
        head->prev = n;
        n->next = head;
        temp->next = n;
        n->prev = temp;
        head = n;
    
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
    insertathead(head, 40);
    display(head);
    return 0;
}