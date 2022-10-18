// // Extend the above program to display the area of circles. This requires the addition of a new derived class 'Circle' that computes the area of a circle. Remember, for a circle we need only one value, its radius, but the setData() function in the base class requires two values to be passed. (Hint: Make the second argument of setData() function as a default one with zero value.)

// // Header files
#include <iostream>

// // use namespace
using namespace std;

// // define class Shape
class Shape
{
protected:
    // // instance member variables
    double d1, d2;

public:
    // // instance member function to set data
    void setData(double d1, double d2 = 0)
    {
        this->d1 = d1;
        this->d2 = d2;
    }

    // // virtual instance member function to display the area
    virtual void displayArea() const
    {
        cout << "\nNot Implemented this for class Shape...";
    }
};

// // define class Triangle by inheriting class Shape
class Triangle : public Shape
{
public:
    // // override base class function displayArea
    void displayArea() const override
    {
        cout << "\nArea of Triangle => " << 0.5 * d1 * d2;
    }
};

// // define class Rectangle by inheriting class Shape
class Rectangle : public Shape
{
public:
    // // override base class function displayArea
    void displayArea() const override
    {
        cout << "\nArea of Rectangle => " << d1 * d2;
    }
};

// // define class Circle by inheriting class Shape
class Circle : public Shape
{
public:
    // // override base class function displayArea
    void displayArea() const override
    {
        cout << "\nArea of Circle => " << 3.14159 * d1 * d1;
    }
};

int main()
{
    // // create an instance of Triangle
    Triangle t1;
    t1.setData(4, 3);
    t1.displayArea();

    // // create an instance of Rectangle
    Rectangle r1;
    r1.setData(4, 5);
    r1.displayArea();

    // // create an instance of Circle
    Circle c1;
    c1.setData(7.5);
    c1.displayArea();

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
