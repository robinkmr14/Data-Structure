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

class queue
{
public:
    node *F = NULL;
    node *R = NULL;

    void enqueue(int data)
    {
        node *n = new node(data);

        if (F == NULL)
        {
            R = n;
            F = n;
            return;
        }
        R->next = n;
        R = n;
    }

    void dequeue()
    {
        node *temp = F;
        if (F == NULL)
        {
            cout << "Queue is Empty !!";
        }
        F = F->next;
        delete (temp);
    }

    void display()
    {
        node *temp = F;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    queue q1;

    q1.enqueue(10);
    q1.enqueue(20);

    q1.enqueue(30);
    q1.enqueue(40);

    q1.display();
    q1.dequeue();
    q1.display();
    return 0;
}