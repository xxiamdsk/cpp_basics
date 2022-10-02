// // Create a class Rectangle and include a member function area and a function setDimensions to set width and height of the rectangle. Enable method chaining by returning the this pointer from the setDimensions function.

// // Header files
#include <iostream>

// // use namespace
using namespace std;

// // define class Rectangle
class Rectangle
{

private:
    // // instance member variables
    double length;
    double breadth;

public:
    // // instance member function to set dimensions
    Rectangle &setDimensions(double length, double breadth)
    {
        this->length = length;
        this->breadth = breadth;
        return *this;
    }

    // // instance member function to find area of rectangle
    void area()
    {
        cout << "\nArea => " << length * breadth;
    }
};

// // Main Function Start
int main()
{
    // // create an instance of Rectangle
    Rectangle r1;

    // // set dimensions and calculate area
    r1.setDimensions(5, 10).area();

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
