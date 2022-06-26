// // Define overloaded functions to calculate area of circle, area of rectangle.

// // Header files
#include <iostream>

#include <math.h>

// // use namespace
using namespace std;

// // Functions Declarations (Prototypes)
double area(double);
double area(double, double);

// // Main Function Start
int main()
{
    double l, b, radius;

    cout << "\nEnter Length and Breadth of Rectangle to Find Area => ";
    cin >> l >> b;

    // // calculate area of rectangle using overloaded area function
    cout << "\nArea of Rectangle => " << area(l, b);

    cout << "\n\nEnter Radius of Circle to Find Area => ";
    cin >> radius;

    // // calculate area of circle using overloaded area function
    cout << "\nArea of Circle => " << area(radius);

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End

// // Function Definition

// // Overloaded Function to Find Area of Rectangle
double area(double l, double b)
{
    return l * b;
}

// // Overloaded Function to Find Area of Circle
double area(double radius)
{
    return 22.0 / 7 * radius * radius;
}
