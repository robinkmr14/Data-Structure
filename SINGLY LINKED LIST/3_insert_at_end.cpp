
// Program to insert the node at the end of the temped list.

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
    node *temp;
    node *n = new node(val);
    temp = head;
    if (temp == NULL)
    {
        head = n;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void display(node *temp2)
{
    while (temp2 != NULL)
    {
        cout << temp2->data << "    ";
        temp2 = temp2->next;
    }
}
int main()
{
    node *head = NULL;

    insertatend(head, 5);
    insertatend(head, 10);
    insertatend(head, 15);
    insertatend(head, 20);
    insertatend(head, 30);
    display(head);
    return 0;
}