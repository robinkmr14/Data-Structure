// program to add node at head in doubly linked list.

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
void insertathead(node *&head, int val)
{
  node *n = new node(val);
  n->next = head;
  if (head != NULL)
  {
    head->prev = n;
  }
  head = n;
}
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
  node *head = NULL;
  insertathead(head, 5);
  insertathead(head, 10);
  insertathead(head, 15);
  insertathead(head, 20);
  display(head);
  return 0;
}