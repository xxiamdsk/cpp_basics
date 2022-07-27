// // Define a class Cube and calculate Volume of Cube and initialise it using constructor.

// // Header files
#include <iostream>

// // use namespace
using namespace std;

// // define class Cube
class Cube
{

private:
    // // instance member variables
    double length, volume;

public:
    // // constructors
    Cube()
    {
        length = 0;
    }

    Cube(double len)
    {
        if (len < 0)
            len = -len;

        length = len;
    }

    // // instance member function to set length
    void setLength(double len)
    {
        length = len;
    }

    // // instance member function to get length
    double getLength()
    {
        return length;
    }

    // // instance member function to calculate volume of cube
    double calculateVolume()
    {
        volume = length * length * length;

        return volume;
    }

    // // instance member function to get volume of cube
    double getVolume()
    {
        return volume;
    }
};

// // Main Function Start
int main()
{
    Cube c1; // create object of Cube
    double len, vol;

    // // get length of a cube
    cout << "\nEnter Length of A Cube => ";
    cin >> len;

    // // set length
    c1.setLength(len);

    // // get and show length
    cout << "\nLength of Cube => " << c1.getLength();

    // // calculate volume
    vol = c1.calculateVolume();

    // // show volume
    cout << "\n\nVolume of Cube => " << vol;

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
