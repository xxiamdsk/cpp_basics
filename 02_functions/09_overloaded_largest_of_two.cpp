// // Write functions using function overloading to find largest of two numbers and both the numbers can be integer or real.

// // Header files
#include <iostream>

#include <math.h>

// // use namespace
using namespace std;

// // Functions Declarations (Prototypes)
int largestOfTwo(int, int);
double largestOfTwo(double, double);

// // Main Function Start
int main()
{

    int num1, num2;
    double num3, num4;

    cout << "\nEnter 2 Integer Numbers to Find Largest => ";
    cin >> num1 >> num2;

    cout << "\nLargest of " << num1 << " and " << num2 << " => " << largestOfTwo(num1, num2);

    cout << "\n\nEnter 2 Real Numbers to Find Largest => ";
    cin >> num3 >> num4;

    cout << "\nLargest of " << num3 << " and " << num4 << " => " << largestOfTwo(num3, num4);

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End

// // Function Definition

// // Overloaded Function to Find Largest of Two Integer Constants
int largestOfTwo(int num1, int num2)
{
    return num1 > num2 ? num1 : num2;
}

// // Overloaded Function to Largeet of Two Real Constants
double largestOfTwo(double num1, double num2)
{
    return num1 > num2 ? num1 : num2;
}
