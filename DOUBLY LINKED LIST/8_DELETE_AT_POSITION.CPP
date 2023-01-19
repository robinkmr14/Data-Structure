// PROGRAM DELETE A NODE AT A POSITION IN DLL.


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
void deletionatpoint(node *&head, int key)
{

    node *temp = head;
    node *prev = temp;
   for(int  i = 0 ; i < key-1 ; i++)
    {
        prev = temp;
        temp = temp->next;
    }
    temp->next->prev = prev;
    prev->next = temp->next;

    delete (temp);
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
int main()
{
    node *head = NULL;
    int n, val, key;
    cout << "Enter the numbers of NODES :";
    cin >> n;

    cout << "Enter the NODES :"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        insertatend(head, val);
    }
    display(head);

    cout << "Enter the node which you want to delete :";
    cin >> key;

    deletionatpoint(head, key);

    display(head);

    return 0;
}