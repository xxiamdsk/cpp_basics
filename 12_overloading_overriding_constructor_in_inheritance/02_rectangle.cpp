// // Define a class Rectangle and overload area function for different types of data type.

// // Header files
#include <iostream>

// // use namespace
using namespace std;

// // define class Rectangle
class Rectangle
{

private:
    // // instance member variables
    double length, breadth;

public:
    // // constructors
    Rectangle()
    {
        length = breadth = 0;
    }

    Rectangle(double length)
    {
        this->length = length;
        this->breadth = length;
    }

    Rectangle(double length, double breadth)
    {
        this->length = length;
        this->breadth = breadth;
    }

    // // instance member function to set dimensions
    void setDimensions(double length)
    {
        this->length = length;
        this->breadth = length;
    }

    void setDimensions(double length, double breadth)
    {
        this->length = length;
        this->breadth = breadth;
    }

    // // instance member function to show dimensions
    void showDimensions()
    {
        cout << "\nlength => " << length << ", Breadth => " << breadth;
    }

    // // ooverloaded instance member function to calculate area
    double area() const
    {
        return length * breadth;
    }

    // // ooverloaded instance member function to calculate area of rectangle
    double area(double length) const
    {
        return length * length;
    }

    // // ooverloaded instance member function to calculate area of rectangle
    double area(double length, double breadth) const
    {
        return length * breadth;
    }

    // // ooverloaded instance member function to calculate area of rectangle
    double area(const Rectangle &rectange) const
    {
        return rectange.area();
    }
};

// // Main Function Start
int main()
{
    double area, length = 4.5, breadth = 8;

    // // create object of Rectangle
    Rectangle rect1(length, breadth);

    // // find area of rect1
    area = rect1.area();

    // // display area of rect1
    cout << "\nArea of Rectangle Having Dimensions " << length << " and " << breadth << " => " << area;

    // // find area of any 2 dimensions
    length = 5;
    breadth = 9;
    area = rect1.area(length, breadth);

    cout << "\nArea of Rectangle Having Dimensions " << length << " and " << breadth << " => " << area;

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
