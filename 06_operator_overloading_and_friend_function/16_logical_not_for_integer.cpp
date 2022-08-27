// // Create an Integer class and overload logical not operator for that class.

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

    // overload logical NOT (!) operator
    bool operator!()
    {
        return !value;
    }
};

int main()
{
    int val;
    cout << "\nEnter A Number => ";
    cin >> val;

    Integer num1(val); // create an object of Integer class

    // //  Use the overloaded logical NOT operator
    if (!num1)
        cout << "\nThe Number is Zero." << endl;
    else
        cout << "\nThe Number is not Zero." << endl;

    // // display the value
    cout << "\nNumber => " << num1.getValue();

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
