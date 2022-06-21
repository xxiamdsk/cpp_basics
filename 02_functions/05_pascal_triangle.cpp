// // Define a function to print Pascal Triangle up to N lines.

/*

              1
            1   1
          1   2   1
        1   3   3   1
      1   4   6   4   1

      Pascal Traingle

      1st Formula..
      Find Element For Any Position = row! / ( col! * (row-col)! )
      where, row =  0 1 2 ...... N and col = 0 1 2 ..... N

      2nd Formula..
      Find Element For Any Position =>  n =  n * (row - col) / (col + 1).
      where, n Starts with 1 for Each Row, row =  0 1 2 ...... N and col = 0 1 2 ..... N

*/

// // Header files
#include <iostream>

#include <math.h>
#include <iomanip>

// // use namespace
using namespace std;

// // Function Declaration (Prototype)
void pascalTriangle(int);
long long unsigned int factorial(int);

// // Main Function Start
int main()
{
    int lines;
    cout << "\nHow Many Lines of Pascal Triangle You Want to Print => ";
    cin >> lines;

    pascalTriangle(lines);

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End

// // Function Definition

// // Function to Print Pascal Triangle Upto N Lines
void pascalTriangle(int maxRows)
{
    cout << "\n-------------------------------------------------------------\n";

    int element;

    for (int row = 0; row < maxRows; row++)
    {

        for (int space = 0; space < maxRows - row - 1; space++)
            cout << "   ";

        for (int col = 0; col <= row; col++)
        {
            element = factorial(row) / (factorial(col) * factorial(row - col));
            cout << setw(3) << element << "   ";
        }

        cout << endl;
    }
}

// // Function to Find Factorial
long long unsigned int factorial(int num)
{
    long long unsigned fact = 1;

    for (int i = 2; i <= num; i++)
        fact *= i;

    return fact;
}