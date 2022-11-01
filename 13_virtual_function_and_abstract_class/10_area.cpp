// // Create a base class called shape. Use this class to store two double type values that could be used to compute the area of figures. Derive two specific classes called Rectangle and parallelogram from the base shape.Add to the base class, a member function setData() to initialise base class data members and another member function displayArea() to compute and display the area of figures.Make displayArea() as a pure virtual function and redefine this function in the derived classes to suit their requirements.Using these three classes, design a program that will accept dimensions of a square or a parallelogram interactively, and display the area.

// // Header files
#include <iostream>

// // use namespace
using namespace std;

// // define ab abstract class Shape
class Shape
{
protected:
    // // instance member variables
    double length, breadth;

public:
    // // constructor
    Shape(int l, int b) : length(l), breadth(b) {}

    // // pure virtual function to be overridden by derived classes
    virtual void displayArea() const = 0;
};

// // define class Rectangle by inheriting an abstract class Shape
class Rectangle : public Shape
{
public:
    // // inheriting the constructor of the base class
    using Shape::Shape;

    // // override base class function displayArea
    void displayArea() const
    {
        cout << "\nArea of Rectangle => " << length * breadth;
    }
};

// // define class Sphere by inheriting an abstract class Volume
class Parallelogram : public Shape
{
public:
    // // inheriting the constructor of the base class
    using Shape::Shape;

    // // override base class function displayArea
    void displayArea() const
    {
        cout << "\nArea of Parallelogram => " << 0.5 * length * breadth;
    }
};

int main()
{
    double length, breadth;
    cout << "\nEnter Dimensions of A Rectangle => ";
    cin >> length >> breadth;

    // // create an instance of Rectangle
    Rectangle r1(length, breadth);
    r1.displayArea();

    cout << "\n\nEnter Breadth And Height of A Parallelogram => ";
    cin >> breadth >> length;

    // // create an instance of Sphere
    Parallelogram p1(length, breadth);
    p1.displayArea();

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
