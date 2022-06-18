// // Define a function to check whether a given number is a Prime number or not.

// // Header files
#include <iostream>

#include <math.h>

// // use namespace
using namespace std;

// // Function Declaration (Prototype)
int isPrime(int);

// // Main Function Start
int main()
{

    int num;
    cout << "\nEnter A Number to Check Whether It is Prime or Not => ";
    cin >> num;

    if (isPrime(num))
    {
        cout << endl
             << num << " is a Prime Number";
    }
    else
    {
        cout << endl
             << num << " is not a Prime Number";
    }

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End

// // Function Definition

// // Function to Check Whether A Given Number is Prime or Not
int isPrime(int num)
{
    if (num < 2)
        return 0; // not a prime number

    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            return 0; // not a prime number
    }

    return 1; // prime number
}