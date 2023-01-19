// PROGRAM TO DELETE NODE AT THE HEAD IN DLL.


#include<iostream>
using namespace std;
class node
{
    public :
    int data;
    node* next;
    node* prev;
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
    node *temp = head;
    if (head == NULL)
    {
        head = n;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = n;
        n->prev = temp;
    }
}
void deletionathead(node * &head)
{
    node* deleet = head;
    head = head->next;
    delete(deleet);
}
void display(node *temp)
{
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
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
    
    deletionathead(head);

    display(head);
    return 0;
}