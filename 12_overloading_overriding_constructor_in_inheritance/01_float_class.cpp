// // Create a class Float that contains one float data member. Overload (+,-,/) arithmetic operators so that they can operate on the objects of FLOAT.

// // Header files
#include <iostream>

// // use namespace
using namespace std;

// // define class Float
class Float
{

private:
    // // instance member variables
    float data;

public:
    // // constructors
    Float() {}

    Float(float data)
    {
        this->data = data;
    }

    // // instance member function to set data
    void setData(float data)
    {
        this->data = data;
    }

    // // instance member function to get data
    float getData()
    {
        return data;
    }

    // // overload arithmetic plus (+) operator
    Float operator+(Float f)
    {
        f.data = data + f.data;
        return f;
    }

    // // overload arithmetic binary subtraction (-) operator
    Float operator-(Float f)
    {
        f.data = data - f.data;
        return f;
    }

    // // overload arithmetic divison (/) operator
    Float operator/(Float f)
    {
        f.data = data / f.data;
        return f;
    }
};

// // Main Function Start
int main()
{
    Float f1 = 15.5f, f2, result;

    // // set data for f2
    f2.setData(5.3);

    // // addition
    result = f1 + f2;
    cout << "f1 + f2 => " << result.getData() << endl;

    // // subtraction
    result = f1 - f2;
    cout << "f1 - f2 => " << result.getData() << endl;

    // // division
    result = f1 / f2;
    cout << "f1 / f2 => " << result.getData() << endl;

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
