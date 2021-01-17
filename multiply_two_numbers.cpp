#include <iostream>
using namespace std;

int main()
{
    double num_1, num_2, product;
    cout << "Enter two numbers: ";
    cin >> num_1 >> num_2;

    product = num_1 * num_2;
    cout << num_1 << " x " << num_2 << " = " << product;
    return 0;
}