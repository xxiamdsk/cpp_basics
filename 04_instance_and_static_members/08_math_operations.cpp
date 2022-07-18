// // Develop a class MathOperations with a static member function square that calculates the square of a given number.

// // Header files
#include <iostream>

// // use namespace
using namespace std;

// // define class MathOperations
class MathOperations
{

public:
    // // static member function to find square of a number
    static long unsigned int square(int num)
    {
        return num * num;
    }
};

// // Main Function Start
int main()
{
    int num;
    long unsigned sq;
    cout << "\nEnter A Number to Find Square of it => ";
    cin >> num;

    // // call static member function (square) using class name and scope resolution
    sq = MathOperations::square(num);

    // // print square of num
    cout << "\nSquare of " << num << " => " << sq;

    cout << "\n\nEnter Another Number to Find Square of it => ";
    cin >> num;

    MathOperations m1;
    // // call static member function (square) using an object
    sq = m1.square(num);

    // // print square of num
    cout << "\nSquare of " << num << " => " << sq;

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
