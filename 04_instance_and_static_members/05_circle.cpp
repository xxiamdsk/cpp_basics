// // Design a class Circle with an instance member variable radius. Write a member function to calculate the circumference of the circle.

// // Header files
#include <iostream>

// // use namespace
using namespace std;

// // define class Circle
class Circle
{

private:
    // // instance member variables
    double radius, circumference = 0;

public:
    // // instance member function to set radius of circle
    void setRadius(int r)
    {
        radius = r;
    }

    // // instance member function to get radius of circle
    double getRadius(int l)
    {
        return radius;
    }

    // // instance member function to calculate circumference of circle
    double calculateCircumference()
    {
        circumference = 2 * (22.0 / 7) * radius;
        return circumference;
    }

    // // instance member function to get the circumference of circle
    double getCircumference()
    {
        return circumference;
    }
};

// // Main Function Start
int main()
{
    Circle cir1; // create object of Circle
    double rad, circumference;

    // // Get radius of a circle to find its circumference
    cout << "\nEnter Radius of A Circle => ";
    cin >> rad;

    cir1.setRadius(rad);                           // set radius of circle
    circumference = cir1.calculateCircumference(); // find circumference

    // // display circumference of circle
    cout << "\nCircumference of Circle => " << circumference;

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
