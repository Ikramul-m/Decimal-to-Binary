#include <iostream>
using namespace std;

int binarySearch(int arr[], int key, int n)
{
    int start = 0, end = n - 1;

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

    return 0;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element: ";
        cin >> arr[i];
    }

    cout << "Array is: ";
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }

    int k;
    cout << "\nEnter the key: ";
    cin >> k;

    int r = binarySearch(arr, k, n);

    if (r)
        cout << r;
    else
        cout << "Not such element in the array";

    return 0;
}