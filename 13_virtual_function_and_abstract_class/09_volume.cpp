// // Create a base class called volume. Use this class to store a double type value that could be used to compute the volume of figures. Derive two specific classes called cube and sphere from the base shape. Add to the base class, a member function setData() to initialise base class data member and another member function displayVolume() to compute and display the volume of figures. Make displayVolume() as a pure virtual function and redefine this function in the derived classes to suit their requirements. Using these three classes, design a program that will accept dimensions of a cube or a sphere interactively, and display the volume.

// // Header files
#include <iostream>

// // use namespace
using namespace std;

// // define ab abstract class Volume
class Volume
{
protected:
    // // instance member variable
    double data;

public:
    // // constructor
    Volume(int dt) : data(dt) {}

    // // pure virtual function to be overridden by derived classes
    virtual void displayVolume() const = 0;
};

// // define class Cube by inheriting an abstract class Volume
class Cube : public Volume
{
public:
    // // inheriting the constructor of the base class
    using Volume::Volume;

    // // override base class function displayVolume
    void displayVolume() const
    {
        cout << "\nVolume of Cube => " << data * data * data;
    }
};

// // define class Sphere by inheriting an abstract class Volume
class Sphere : public Volume
{
public:
    // // inheriting the constructor of the base class
    using Volume::Volume;

    // // override base class function displayVolume
    void displayVolume() const
    {
        cout << "\nVolume of Sphere => " << 4.0 / 3 * 3.14159 * data * data * data;
    }
};

int main()
{

    double data;
    cout << "\nEnter Dimension of A Cube => ";
    cin >> data;

    // // create an instance of Cube
    Cube c1(data);
    c1.displayVolume();

    cout << "\n\nEnter Radius of A Sphere => ";
    cin >> data;

    // // create an instance of Sphere
    Sphere s1(data);
    s1.displayVolume();

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
