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
    node *link, *temp = new node(val);
    link = head;
    if (link != NULL)
    {
        while (link->next != NULL)
        {
            link = link->next;
        }
        link->next = temp;
    }
    else
        head = temp;
}

void atpos(node* &head,int val , int pos)
{
    node *n = new node(val);
    node* temp = head;

    int i =0 ;
    while(i < pos-1)
    {
        temp = temp->next;
        i++;
    }

    n ->next = temp -> next;
    temp->next = n;
}

void display(node *temp)
{
    while (temp != NULL)
    {
        cout << temp->data << "    ";
        temp = temp->next;
    }
}
int main()
{
    node *head = NULL;

    insertatend(head, 10);
    insertatend(head, 15);
    insertatend(head, 20);
    insertatend(head, 25);
    atpos(head, 30, 3);
    display(head);
    return 0;
}

