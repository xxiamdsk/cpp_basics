// // Write functions using function overloading to add two numbers having different data types.

// // Header files
#include <iostream>

#include <math.h>

// // use namespace
using namespace std;

// // Functions Declarations (Prototypes)
int addTwoNums(int, int);
double addTwoNums(double, double);

// // Main Function Start
int main()
{

    int num1, num2;
    double num3, num4;

    cout << "\nEnter 2 Integers Numbers to Add => ";
    cin >> num1 >> num2;

    cout << "\nSum of " << num1 << " and " << num2 << " => " << addTwoNums(num1, num2);

    cout << "\n\nEnter 2 Real Numbers to Add => ";
    cin >> num3 >> num4;

    cout << "\nSum of " << num3 << " and " << num4 << " => " << addTwoNums(num3, num4);

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End

// // Function Definition

// // Overloaded Function to Add Two Numbers of type int
int addTwoNums(int num1, int num2)
{
    return num1 + num2;
}

// // Overloaded Function to Add Two Numbers of type double
double addTwoNums(double num1, double num2)
{
    return num1 + num2;
}
