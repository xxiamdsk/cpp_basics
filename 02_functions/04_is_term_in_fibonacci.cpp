// // Define a function to check whether a given number is a term in a Fibonacci  series or not.

// // Header files
#include <iostream>

#include <math.h>

// // use namespace
using namespace std;

// // Function Declaration (Prototype)
int isTermInFibonacci(int);

// // Main Function Start
int main()
{

    int num;

    cout << "\nEnter A Number to Check Whether It is a Term In Fibonacci Series or Not => ";
    cin >> num;

    if (isTermInFibonacci(num))
    {
        cout << "\nYes, " << num << " is a Term in Fibonacci Series";
    }
    else
    {
        cout << "\nNo, " << num << " is not a Term in Fibonacci Series";
    }

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End

// // Function Definition

// // Function to Check whether A Given Number is a Term in Fibonacci Series or Not
int isTermInFibonacci(int num)
{
    // // Assuming Series Starting from 0,1,1,2,3.... N

    int prev = -1, next = 1, res = 0;

    while (res < num)
    {
        res = prev + next;
        prev = next;
        next = res;
    }

    if (res == num)
        return 1; // Yes, num is a term in fibonacci series

    return 0; // No, num is not a term in fibonacci series
}