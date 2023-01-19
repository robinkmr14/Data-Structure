#include <iostream>
using namespace std;
#define max 10
int arr[max];

void binarysearch(int arr[], int key)
{
    int low = 0;        
    int high = max - 1; 
    while (low <= high)
    {
        int mid = (low + high) / 2; 
        if (arr[mid] == key)
        {
            cout << arr[mid] << " th Element is "
                 << "at Index :" << mid;
            return;
        }
        else if (arr[mid] <= key) 
        {
            low = mid + 1;
        }
        else if (arr[mid] >= key) 
        {
            high = mid - 1;
        }
    }
}

int main()
{
    cout << "Enter the array  :";
    for (int i = 0; i < max; i++)
    {
        cin >> arr[i];
    }
    cout << "the array is  :";
    for (int i = 0; i < max; i++)
    {
        cout << arr[i] << " ";
    }
    int key;
    cout << "Enter the element to be searched" << endl;
    cin >> key;
    binarysearch(arr, key);

    return 0;
}