// WRITE A PROGRAM TO INPUT ARRAY FROM USER AND PRINT.

#include <iostream>
using namespace std;

int main()
{
    int arr[5], i;

    cout << "Enter five numbers :";
    for (i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout<<"Array elements : ";
    for (i = 0; i < 5; i++)
    {
        cout << arr[i]<<endl;
    }

    return 0;
}