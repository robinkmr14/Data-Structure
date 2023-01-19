// PROGRAM TO EVALUATE THE AVERAGE OF FIVE NUMBERS.

#include <iostream>
using namespace std;

int main()
{
    int arr[5], avg = 0, i, sum =0;

    cout << "Enter five numbers : ";
    for (i = 0; i < 5; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }

    avg = sum / 5;
    cout << "Average = " << avg;
    return 0;
}