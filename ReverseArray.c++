#include <iostream>
using namespace std;

void reverse(int arr[], int n)
{

    int start = 0;
    int end = n - 1;

    for (; start != end;)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "    ";
    }
    cout << endl;
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

    reverse(arr, n);
    printArray(arr, n);

    return 0;
}