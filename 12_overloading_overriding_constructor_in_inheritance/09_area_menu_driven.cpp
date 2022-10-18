// // Write a C++ program to calculate the area of triangle, rectangle and circle using constructor overloading. The program should be menu driven.

// // Header files
#include <iostream>

// // use namespace
using namespace std;

const double PI = 3.14159265358979323846;

// // define class Shape
class Shape
{
private:
    // // instance member variable
    double area;

public:
    // // constructors
    Shape() {}

    // Constructor for triangle
    Shape(double base, double height)
    {
        area = 0.5 * base * height;
    }

    // constructor for rectangle
    Shape(double length, double width, int)
    {
        area = length * width;
    }

    // constructor for circle
    Shape(double radius)
    {
        area = PI * radius * radius;
    }

    // instance member function to display the area
    void displayArea()
    {
        cout << "\nArea => " << area << endl;
    }
};

int main()
{
    int choice;

    do
    {
        system("cls");
        cout << "\n>>>>>>>> Choose A Shape To Calculate Area <<<<<<<<<<<";
        cout << "\nPress 1. Triangle";
        cout << "\nPress 2. Rectangle";
        cout << "\nPress 3. Circle";
        cout << "\nPress 4. Exit";
        cout << "\n\nEnter Your Choice => ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            double base, height;
            cout << "\nEnter the Base of the Triangle => ";
            cin >> base;
            cout << "\nEnter the Height of the Triangle => ";
            cin >> height;

            // // create an instance of Shape using triangle constructor
            Shape triangle(base, height);
            triangle.displayArea();
        }
        break;

        case 2:
        {
            double length, width;
            cout << "\nEnter the Length of the Rectangle => ";
            cin >> length;
            cout << "\nEnter the Width of the Rectangle => ";
            cin >> width;

            // // create an instance of Shape using rectangle constructor
            Shape rectangle(length, width, 0);
            rectangle.displayArea();
        }
        break;

        case 3:
        {
            double radius;
            cout << "\nEnter the Radius of the Circle => ";
            cin >> radius;

            // // create an instance of Shape using circle constructor
            Shape circle(radius);
            circle.displayArea();
        }
        break;

        case 4:
            cout << "\nExiting Program...." << endl;
            break;

        default:
            cout << "\n !!!Invalid Choice..." << endl;
        }
        cin.ignore();
    } while (choice != 4);

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
