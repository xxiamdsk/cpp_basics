// // Create an Integer class that contains int x as an instance variable and overload casting int() operator that will type cast your Integer class object to int data type.

// // Header files
#include <iostream>

// // use namespace
using namespace std;

// // define class Integer
class Integer
{
private:
    // // instance memeber variable
    int value;

public:
    // // constructors
    Integer()
    {
        value = 0;
    }

    Integer(int val)
    {
        value = val;
    }

    // // instance memebr function to set value
    void setValue(int val)
    {
        value = val;
    }

    // // instance memebr function to get value
    int getValue()
    {
        return value;
    }

    // overload typecast operator
    operator int()
    {
        return value;
    }
};

int main()
{
    int val;
    cout << "\nEnter A Number => ";
    cin >> val;

    Integer num1(val); // create an object of Integer class

    int getval = num1;

    cout << "\nEntered Number => " << getval;

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
