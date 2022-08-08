// // Define a class Circle with instance member variables radius and area. Implement a parameterized constructor that takes the radius as an argument and calculates the area.

// // Header files
#include <iostream>

// // use namespace
using namespace std;

// // define class Circle
class Circle
{

private:
    // // instance member variables
    double radius, area = 0;

public:
    // // constructors
    Circle()
    {
        radius = 0;
    }

    Circle(double r)
    {
        radius = r;
    }

    Circle(int r)
    {
        radius = r;
    }

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

    // // instance member function to calculate area of circle
    double calculateArea()
    {
        area = 22.0 / 7 * radius * radius;

        return area;
    }

    // // instance member function to get the area of circle
    double getArea()
    {
        return area;
    }
};

// // Main Function Start
int main()
{
    double rad, area;

    // // Get radius of a circle to find its area
    cout << "\nEnter Radius of A Circle => ";
    cin >> rad;

    Circle cir1; // create object of Circle

    cir1.setRadius(rad);         // set radius
    area = cir1.calculateArea(); // find area

    // // display area of circle
    cout << "\nArea of Circle => " << area;

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
