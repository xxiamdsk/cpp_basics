// // Write a simple C++ program to demonstrate try, throw and catch statements.

// // Header files
#include <iostream>

// // use namespace
using namespace std;

// // Main Function Start
int main()
{
    int tempRoll, roll;

    try
    {
        cout << "\nEnter Roll Number of a Student (Must be Positive) => ";
        cin >> tempRoll;

        if (tempRoll < 1)
            throw tempRoll; // throw exception

        roll = tempRoll; // set roll number
        cout << "\nEntered Roll Number is Valid..." << endl;
    }
    catch (int ex)
    {
        cout << "\n!!! Invalid Roll Number, Roll Number Must be Positive !!! Try Again..." << endl;
    }

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
