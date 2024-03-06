#include <iostream>
#include <climits>
using namespace std;

int getMax(int num[], int n)
{

    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (num[i] > max)
            max = num[i];
    }

    return max;
}

int getMin(int num[], int n)
{
    int min = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (num[i] < min)
            min = num[i];
    }

    return min;
}

int main()
{

    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int num[100];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element: ";
        cin >> num[i];
    }

    cout << "The largest element is: " << getMax(num, size) << endl;
    cout << "The smallest value is: " << getMin(num, size) << endl;

    return 0;
}