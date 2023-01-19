
// Program to delete the node at the head of the linked list.

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
void inserthead(node * &head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
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
void deleteathead(node* &head)
{
    node *deleet = head;
    head = head->next;
    delete (deleet);
}

int main()
{
    node *head = NULL;

    inserthead(head, 5);
    inserthead(head, 10);
    inserthead(head, 15);
    inserthead(head, 20);
    display(head);
    deleteathead(head);
    display(head);


    return 0;
}