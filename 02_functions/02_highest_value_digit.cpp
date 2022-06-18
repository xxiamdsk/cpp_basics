// // Define a function to find the highest value digit in a given number.

// // Header files
#include <iostream>

// // use namespace
using namespace std;

// // Function Declaration (Prototype)
int highestDigit(int);

// // Main Function Start
int main()
{

    int num, highDigit;
    cout << "\nEnter A Number => ";
    cin >> num;

    highDigit = highestDigit(num);

    cout << "\nHighest value Digit of " << num << " => " << highDigit;

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End

// // Function Definition

// // Function to Find Highest Value Digit of A Number
int highestDigit(int num)
{
    int highDigit = num % 10;

    num /= 10;

    while (num)
    {
        if (num % 10 > highDigit)
            highDigit = num % 10;

        num /= 10;
    }

    return highDigit;
}