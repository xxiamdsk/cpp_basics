// // Write a C++ program to find the largest of two numbers.

// // Header files
#include <iostream>

// // use namespace
using namespace std;

// // Main Function Start
int main()
{
    int num1, num2, largest;

    cout << "\nEnter Two Numbers to Find Largest => ";
    cin >> num1 >> num2;

    // // using conditional operator
    largest = num1 > num2 ? num1 : num2;

    // // using if-else
    if (num1 > num2)
        largest = num1;
    else
        largest = num2;

    cout << "\nLargest of " << num1 << " and " << num2 << " => " << largest;

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
