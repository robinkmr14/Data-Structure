// FIND THE GIVEN NUMBER IS PALLANDROME OR NOt ?

#include <iostream>
using namespace std;

int main()
{
    int  i, rev, n, num;

    cout << "Enter the numbers :";
    cin >> n;
    num = n;

    while (n > 0)
    {
        rev = (rev * 10) + n % 10;
        n = n / 10;
    }
    if (rev == i)
    {
        cout << "Number is pallamdrom.";
    }
    else
        cout << "Number is not Pallandrom.";
    return 0;
}