// PROGRAM TO INSERT NODE BEFORE AT THE POINT TO GIVEN DLL.

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
    node *temp;
    temp = head;
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
void insertatbefore(node *&head, int key, int val)
{
    node *n = new node(val);
    node *temp = head;
    while (temp->data != key)
    {
        temp = temp->next;
    }
    n->prev = temp->prev;
    temp->prev->next = n;
    n->next = temp;
    temp->prev = n;
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

    cout << "Enter the key and node :";
    cin >> key >> val;
    insertatbefore(head, key, val);
    display(head);
    return 0;
}