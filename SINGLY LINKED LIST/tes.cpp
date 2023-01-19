#include<iostream>
#include<fstream>
using namespace std;

class node
{
    public:
    int data;
    node*next;
    node*prev;



};
void display(node *temp)
{
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    node * head = NULL;
    node* second = NULL;
    node * third = NULL;

    head = new node();
    second = new node();
    third = new node();
    
    head->data=15;
    head->next= second;
    head->prev=NULL;

    second->data=34;
    second->next=third;
    second->prev=head;

    third->data=90;
    third->next=NULL;

    display(head);
    
    return 0;
}