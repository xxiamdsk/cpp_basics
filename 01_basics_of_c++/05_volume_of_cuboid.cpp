// // Write a C++ program to calculate the volume of a cuboid.

// // Header files
#include <iostream>

// // use namespace
using namespace std;

// // Main Function Start
int main()
{
    double l, b, h, vol;

    cout << "\nEnter Length, Breadth and Height of Cuboid to Find Volume => ";
    cin >> l >> b >> h;

    // // calculate volume
    vol = l * b * h;

    cout << "\nVolume of Cuboid => " << vol;

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End