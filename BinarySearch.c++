#include <iostream>
using namespace std;

int binarySearch(int arr[], int key, int num)
{
    int start = 0, end = num - 1;

    int mid = (start + end) / 2;

    for (; start <= end;)
    {

        if (arr[mid] == key)
        {
            return mid;
        }

        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = (start + end) / 2;
    }

    return -1;
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element at index " << i << ": ";
        cin >> arr[i];
    }

    cout << "Array is: ";
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << "     ";
    }

    int k;
    cout << "\nEnter the key: ";
    cin >> k;

    int r = binarySearch(arr, k, n);

    if (r != -1)
        cout << "It is present at Index -> " << r;
    else
        cout << "No such element in the array";

    return 0;
}
