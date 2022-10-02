// // Define a class Complex with appropriate instance variables and member functions.One of the functions should be setData() to set the properties of the object. Make sure the names of formal arguments are the same as names of instance variables.

/*

this pointer :-

In C++, the this pointer is a reserved keyword that represents a pointer to the instance of the class for which a member function is called. It is implicitly passed as a hidden argument to all non-static member functions and is used to refer to the calling object. The this pointer provides a way for a member function to access the object's data members and member functions.

*/

// // Header files
#include <iostream>

// // use namespace
using namespace std;

// // define class Complex
class Complex
{

private:
    // // instance member variables
    double real;
    double imag;

public:
    // // constructors
    Complex()
    {
        real = imag = 0;
    }

    Complex(double real)
    {
        // // use of this pointer
        this->real = imag = real;
    }

    Complex(double real, double imag)
    {
        // // use of this pointer
        this->real = real;
        this->imag = imag;
    }

    // // instance member function to set compelx number
    void setData(double real, double imag)
    {
        // // use of this pointer
        this->real = real;
        this->imag = imag;
    }

    // // instance member function to display compelx number
    void showData()
    {
        cout << "\n"
             << real << " + " << imag << "i" << endl;
    }
};

// // Main Function Start
int main()
{
    double real, imag;

    // // Get complex number
    cout << "\n>>>>>>>> Enter Complex Number <<<<<<<<<\n";
    cout << "\nEnter Real Part => ";
    cin >> real;
    cout << "\nEnter Imaginary Part => ";
    cin >> imag;

    Complex c1(real, imag); // create object of Complex

    // // display complex number
    cout << "\n>>>>>>>> Complex Number <<<<<<<<<\n";
    c1.showData();

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
