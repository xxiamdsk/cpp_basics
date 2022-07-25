// // Define a class Triangle with instance member variables for the three sides (side1, side2, side3). Write a static member function to check if the triangle is valid.

// // Header files
#include <iostream>

#include <stdlib.h>

// // use namespace
using namespace std;

// // define class Triangle
class Triangle
{

private:
    double side1, side2, side3;

public:
    // // static member function to check whether the triangle is valid or not
    static int isValid(double s1, double s2, double s3)
    {
        if (s1 + s2 > s3 && s2 + s3 > s1 && s3 + s1 > s2)
            return 1; // valid

        return 0; // invalid
    }

    // // instance member function to set sides
    void setSides(double s1, double s2, double s3)
    {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

    // // instance member function to show sides
    void showSides()
    {
        cout << side1 << " " << side2 << " " << side3;
    }
};

// // Main Function Start
int main()
{
    Triangle t1;
    double s1, s2, s3;

    cout << "\nThree Sides of a Triangle => ";
    cin >> s1 >> s2 >> s3;

    // // check whether given sides are valid for a triangle or not
    if (!Triangle::isValid(s1, s2, s3))
    {
        cout << "\n!!! Entered Sides Are Not Valid for a Triangle...\n";
        exit(0);
    }

    cout << "\nEntered Sides Valid For A Triangle...\n";

    // // set sides
    t1.setSides(s1, s2, s3);

    // // show sides
    cout << "\nSides of Triangle Are => ";
    t1.showSides();

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
