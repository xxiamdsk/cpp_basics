// // Write a function using the default argument that is able to add 2 or 3 numbers.

// // Default Argument :- A default argument is a value provided in a function declaration that is automatically assigned by the compiler if the calling function doesn’t provide a value for the argument. In case any value is passed, the default value is overridden.

// // Header files
#include <iostream>

#include <math.h>

// // use namespace
using namespace std;

// // Function Declaration (Prototype)
int add(int, int, int = 0); // default argument

// // Main Function Start
int main()
{
    int num1, num2, num3;

    cout << "\nEnter 2 Numbers to Add => ";
    cin >> num1 >> num2;

    cout << "\nSum of " << num1 << " and " << num2 << " => " << add(num1, num2);

    cout << "\n\nEnter 3 Numbers to Add => ";
    cin >> num1 >> num2 >> num3;

    cout << "\nSum of " << num1 << ", " << num2 << " and " << num3 << " => " << add(num1, num2, num3);

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End

// // Function Definition

// // Function to Print Pascal Triangle Upto N Lines
int add(int num1, int num2, int num3)
{
    return num1 + num2 + num3;
}
