// WRITE A PROGRAM WHICH READ TWO MATRIX AND THEN PRINT A MATRIX WHICH IS ADDITION OF THESE TWO MATRIX.

#include <iostream>
using namespace std;

int main()
{
    int arr[5][5], arr2[5][5], sum[5][5], i, j, n;

    cout << "Enter size of the matrix :";
    cin >> n;

    cout << "Enter first matrix : ";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "\nEnter second matrix :";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> arr2[i][j];
        }
    }

    cout << "\nfirst matrix : ";
    for (i = 0; i < n; i++)
    {
        cout << endl;
        for (j = 0; j < n; j++)
        {
            cout << arr[i][j] << "\t";
        }
    }
    cout << "\nsecond matrix : ";
    for (i = 0; i < n; i++)
    {
        cout << endl;
        for (j = 0; j < n; j++)
        {
            cout << arr2[i][j] << "\t";
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            sum[i][j] = arr[i][j] + arr2[i][j];
        }
    }
    cout << "\nSum of two matrix : ";
    for (i = 0; i < n; i++)
    {
        cout << endl;
        for (j = 0; j < n; j++)
        {
            cout << sum[i][j] << "\t";
        }
    }

    return 0;
}