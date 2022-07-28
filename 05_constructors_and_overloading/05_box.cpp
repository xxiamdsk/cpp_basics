// // Define a class Box and write a program to enter s1gth, breadth and height and initialise objects using constructor also define member functions to calculate volume of the box.

// // Header files
#include <iostream>

// // use namespace
using namespace std;

// // define class Box
class Box
{

private:
    // // instance member variables
    double side1, side2, side3, volume;

public:
    // // constructors
    Box()
    {
        side1 = side2 = side3 = 0;
    }

    Box(double s1)
    {
        if (s1 < 0)
            s1 = -s1;

        side1 = side2 = side3 = s1;
    }

    Box(double s1, double s2)
    {
        if (s1 < 0)
            s1 = -s1;
        else if (s2 < 0)
            s2 = -s2;

        side1 = s1;
        side2 = side3 = s2;
    }

    Box(double s1, double s2, double s3)
    {
        if (s1 < 0)
            s1 = -s1;
        else if (s2 < 0)
            s2 = -s2;
        else if (s3 < 0)
            s3 = -s3;

        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

    // // instance member function to set dimensions
    void sideDimensions(double s1, double s2, double s3)
    {
        if (s1 < 0)
            s1 = -s1;
        else if (s2 < 0)
            s2 = -s2;
        else if (s3 < 0)
            s3 = -s3;

        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

    // // instance member function to show dimensions
    void showDimensions()
    {
        cout << side1 << ", " << side2 << ", " << side3;
    }

    // // instance member function to calculate volume of box
    double calculateVolume()
    {
        volume = side1 * side2 * side3;

        return volume;
    }

    // // instance member function to get volume of box
    double getVolume()
    {
        return volume;
    }
};

// // Main Function Start
int main()
{
    double s1, s2, s3, vol;

    // // get s1gth of a box
    cout << "\nEnter Length, Breadth and Height of A Box => ";
    cin >> s1 >> s2 >> s3;

    Box b1(s1, s2, s3); // create object of Box

    // // show dimensions of box
    cout << "\nDimensions of Box => ";
    b1.showDimensions();

    // // calculate volume
    vol = b1.calculateVolume();

    // // show volume
    cout << "\n\nVolume of Box => " << vol;

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
