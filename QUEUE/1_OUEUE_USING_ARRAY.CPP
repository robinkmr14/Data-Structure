// PROGRAM TO IMPLEMENT ALL FUNCTION IN QUEUE USING ARRAY.


#include <iostream>
#define MAX 100
int q[MAX];
int Front = -1;
int Rear = -1;
using namespace std;

void nqueue(int val)
{
    if (Rear == MAX - 1)
    {
        cout << "\nQueue is full!!";
        return;
    }
    Rear++;
    q[Rear] = val;
    if (Front == -1)
        Front = 0;
}

void dqueue()
{
    if (Front == -1 && Rear == -1)
    {
        cout << "\nQueue is Empty!!";
    }
    else if (Front == Rear)
    {
        cout << q[Front];
    }
    else
        cout << "\ndqueue element is ---> " << q[Front] << endl;
    Front++;
}

void display()
{
    cout << "\nThe Queue is --->  ";
    for (int i = Front; i <= Rear; i++)
    {
        cout << q[i] << " ";
    }
    cout << endl;
}

int main()
{
    nqueue(10);
    nqueue(20);
    nqueue(30);
    nqueue(40);
    display();
    dqueue();
    display();
    return 0;
}