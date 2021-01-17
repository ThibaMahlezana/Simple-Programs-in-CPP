#include <iostream>
using namespace std;

int main()
{
    int n, reversedNum = 0, remainder;

    cout << "Enter a number: ";
    cin >> n;

    while (n != 0)
    {
        remainder = n % 10;
        reversedNum = reversedNum * 10 + remainder;
        n /= 10;
    }

    cout << "Reversed Number = " << reversedNum;
    return 0;
}