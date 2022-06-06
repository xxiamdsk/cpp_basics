// // Write a C++ program to calculate the square of a number.

// // Header files
#include <iostream>

// // use namespace
using namespace std;

// // Main Function Start
int main()
{
    int num, square;

    cout << "\nEnter A Number to Calculate Square => ";
    cin >> num;

    square = num * num;

    cout << "\nSquare of " << num << " => " << square;

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
