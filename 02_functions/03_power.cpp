// // Define a function to calculate x raised to the power y.

// // Header files
#include <iostream>

#include <math.h>

// // use namespace
using namespace std;

// // Function Declaration (Prototype)
double power(int, int);

// // Main Function Start
int main()
{

    double base, exp;

    cout << "\nEnter Base => ";
    cin >> base;

    cout << "\nEnter Exponent => ";
    cin >> exp;

    double res = power(base, exp);

    cout << "\n"
         << base << " Raised to the Power of " << exp << " => " << res;

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End

// // Function Definition

// // Function to Calculate X Raised to Power Y
double power(int base, int exp)
{
    double res = 1;

    int copyExp = abs(exp);

    while (copyExp--)
        res *= base;

    if (exp < 0)
        res = 1 / res;

    return res;
}