#include <iostream>
using namespace std;

int main()
{
    double num_1, num_2, difference;
    cout << "Enter two numbers: ";
    cin >> num_1 >> num_2;

    difference = num_1 - num_2;
    cout << num_1 << " - " << num_2 << " = " << difference;
    return 0;
}