// // Define a function to swap data of two int variables using call by reference.

// // Header files
#include <iostream>

#include <math.h>

// // use namespace
using namespace std;

// // Function Declaration (Prototype)
void swap(int &, int &);

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

    // // swap values of a and b
    swap(a, b);

    cout << "\n\n>>>>>>>>>>> After Swapping <<<<<<<<<<<" << endl;
    cout << "a => " << a << ", b => " << b;

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End

// // Function Definition

// // Function to Print Pascal Triangle Upto N Lines
void swap(int &a, int &b)
{

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
}
