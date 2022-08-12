// // Create a class Rectangle with instance member variables length and nreadth. Implement two constructors - one default constructor that initializes both to 0 and another parameterized constructor that sets them based on user input.

// // Header files
#include <iostream>

// // use namespace
using namespace std;

// // define class Rectangle
class Rectangle
{

private:
    // // instance member variables
    double length, breadth, area = 0;

public:
    // // constructors
    Rectangle()
    {
        length = breadth = 0;
    }

    Rectangle(double l, double b)
    {
        length = l;
        breadth = b;
    }

    Rectangle(double l)
    {
        length = breadth = l;
    }

    // // instance member function to set length of rectangle
    void setLength(int l)
    {
        length = l;
    }

    // // instance member function to set breadth of rectangle
    void setBreadth(int b)
    {
        breadth = b;
    }

    // // instance member function to set dimensions of rectangle
    void setDimensions(int l, int b)
    {
        setLength(l);
        setBreadth(b);
    }

    // // instance member function to get length of rectangle
    double getLength(int l)
    {
        return length;
    }

    // // instance member function to get breadth of rectangle
    double getBreadth(int b)
    {
        return breadth;
    }

    // // instance member function to calculate area of rectangle
    double calculateArea()
    {
        area = length * breadth;
        return area;
    }

    // // instance member function to get the area of rectangle
    double getArea()
    {
        return area;
    }
};

// // Main Function Start
int main()
{
    double l, area;

    // // Get length and breadth of a rectangle to find its area
    cout << "\nEnter Only Length of A Rectangle => ";
    cin >> l;

    Rectangle rec1(l); // create object of Rectangle

    area = rec1.calculateArea(); // find area

    // // display area of rectangle
    cout << "\nArea of Rectangle => " << area;

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
