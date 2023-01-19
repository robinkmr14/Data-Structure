#include<iostream>
using namespace std;
class A
{
    public:
    void print()
    {
        cout<<"Base class."<<endl;
    }

};
class derived:public A{
    public:
    void print()
    {
        cout<<"derived class";
    }
};



int main()
{
    derived d1;
    d1.print();
    return 0;
}