#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
            return 1;
    }

    return 0;
}

int main()
{

    int arr[100];

    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element: ";
        cin >> arr[i];
    }

    cout << "Enter the element to search for: " << endl;
    int key;
    cin >> key;

    bool found = search(arr, n, key);

    if (found)
        cout << "Key is present." << endl;
    else
        cout << "Key is absent." << endl;

    return 0;
}