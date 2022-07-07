// // Define a class Square to find the square of a number and write a C++ program to Count number of times a function is called.

// // Header files
#include <iostream>

// // use namespace
using namespace std;

// // define class Square
class Square
{

private:
    // // instance member variables
    int num;
    long long unsigned int square;

public:
    // static member variable to count number of times the calculateSquare function has called
    static int countFunctionCalls;

    // // instance member function to set the value of num
    void setNumber(int n)
    {
        num = n;
    }

    // // instance member function to get the value of num
    int getNumber()
    {
        return num;
    }

    // // instance member function to calculate square of num
    long long unsigned int calculateSquare()
    {
        square = num * num;
        countFunctionCalls++;

        return square;
    }
};

// define (initialize) static member variable of Square class
int Square::countFunctionCalls = 0;

// // Main Function Start
int main()
{
    Square sqr1, sqr2; // create object of Square
    int num;
    long long unsigned int square;

    // // Get a number to calculate square of it
    cout << "\nEnter A Number to Calculate Square => ";
    cin >> num;

    sqr1.setNumber(num);             // set number to calculate square
    square = sqr1.calculateSquare(); // calculate square

    // // display square
    cout << "\nSquare of " << num << " => " << square;

    // // Get a number to calculate square of it
    cout << "\n\nEnter A Number to Calculate Square => ";
    cin >> num;

    sqr2.setNumber(num);             // set number to calculate square
    square = sqr2.calculateSquare(); // calculate square

    // // display square
    cout << "\nSquare of " << num << " => " << square;

    // // display number of times the calculateSquare function has called
    cout << "\nYou Have Calculated Square of " << Square::countFunctionCalls << " Numbers";

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
