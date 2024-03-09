#include <iostream>
using namespace std;

int main()
{
    int num;

    cin >> num;

    string number[] = {"one", "two", "three", "four", "five",
                       "six", "seven", "eight", "nine"};

    if (num >= 1 && num <= 9)
        cout << number[num - 1] << endl;
    else
        cout << "Greater than 9" << endl;

    return 0;
}
