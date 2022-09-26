// //  Write a C++ program to perform arithmetic operations on two numbers and throw an exception if the divisor is zero.

// // Header files
#include <iostream>

// // use namespace
using namespace std;

// // Main Function Start
int main()
{

    try
    {
        float numerator, denominator, result;
        cout << "\n>>>>>>>>>> Enter Two Numbers to Divide <<<<<<<<<<<" << endl;
        cout << "\nEnter Numerator => ";
        cin >> numerator;
        cout << "\nEnter Denominator => ";
        cin >> denominator;

        if (denominator == 0)
            throw "Denominator Cannot be 0";

        result = numerator / denominator;

        cout << "\nResult => " << result;
    }
    catch (const char *e)
    {
        cout << e;
    }

    cout
        << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
