#include <iostream>
using namespace std;

void swapAlternative(int arr[], int size)
{

    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
            swap(arr[i], arr[i + 1]);
    }
}

void printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element: ";
        cin >> arr[i];
    }

    swapAlternative(arr, size);
    printArray(arr, size);

    cout << endl;

    return 0;
}