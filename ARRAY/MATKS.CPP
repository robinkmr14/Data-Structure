// WRITE A PROGRAM WHICH STORE THE MARKS OF 5 STUDENTS IN AN ARRAY AND THEN PRINT ALL THE MARKS.

#include <iostream>
using namespace std;

int main()
{
    int marks[5], i;

    cout << "Enter marks of five students : ";
    for (i = 0; i < 5; i++)
    {
        cin >> marks[i];
    }
    cout<<"Marks of the students : ";
    for (i = 0; i < 5; i++)
    {
        cout << marks[i]<<endl;
    }
    return 0;
}