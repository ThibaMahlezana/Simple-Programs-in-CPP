#include <iostream>
using namespace std;

int main()
{
    double num_1, num_2, quotient;
    cout << "Enter two numbers: ";
    cin >> num_1 >> num_2;

    quotient = num_1 / num_2;
    cout << num_1 << " / " << num_2 << " = " << quotient;
    return 0;
}