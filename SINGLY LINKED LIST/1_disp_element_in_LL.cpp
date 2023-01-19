
// program to print singly link list.


#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next; 
};
void display(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
int main()
{

    node *head = new node();
    node *sec = new node();
    node *thrd = new node();
    head->data = 5;
    head->next = sec;
    sec->data = 10;
    sec->next = thrd;
    thrd->data = 15;
    thrd->next = NULL;
    display(head);
    return 0;
}