#include <iostream>
using namespace std;

bool isPrime(int x)
{

    if (x == 2)
        return 1;

    for (int i = 2; i <= x; i++)
    {
        if (x % i == 0)
            return 0;
    }

    return 1;
}

int main()
{
    int n;
    cin >> n;

    if (isPrime(n))
        cout << "Is Prime Number";
    else
        cout << "Not Prime number";

    return 0;
}

