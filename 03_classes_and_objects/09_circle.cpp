// // Define a class Circle and define an instance member function to find the area of the circle.

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
    Circle cir1; // create object of Circle
    double rad, area;

    // // Get radius of a circle to find its area
    cout << "\nEnter Radius of A Circle => ";
    cin >> rad;

    cir1.setRadius(rad);         // set radius of circle
    area = cir1.calculateArea(); // find area

    // // display area of circle
    cout << "\nArea of Circle => " << area;

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
