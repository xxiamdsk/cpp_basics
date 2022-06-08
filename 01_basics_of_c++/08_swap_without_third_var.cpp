// // Write a C++ program to swap values of two int variables without using third variable.

// // Header files
#include <iostream>

// // use namespace
using namespace std;

// // Main Function Start
int main()
{

    int a, b;
    cout << "\nEnter value of a => ";
    cin >> a;
    cout << "\nEnter value of b => ";
    cin >> b;
    cout << "\n\n>>>>>>>>>>> Before Swapping <<<<<<<<<<<" << endl;
    cout << "a => " << a << ", b => " << b;

    // // using Addition and Subtraction
    a = a + b;
    b = a - b;
    a = a - b;

    // // using Divison and Multiplication
    // // a = a * b;
    // // b = a / b;
    // // a = a / b;

    // // using Bitwise XOR (^)
    // // a = a ^ b;
    // // b = a ^ b;
    // // a = a ^ b;

    // // In Single line
    // // a = (a + b) - (b = a);

    cout << "\n\n>>>>>>>>>>> After Swapping <<<<<<<<<<<" << endl;
    cout << "a => " << a << ", b => " << b;

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
