/*

Define a class Complex with appropriate instance variables and member functions.
Define following operators in the class :-
- a. +
- b. -
- c. *
- d. ==

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

    Complex(double r)
    {
        real = imag = r;
    }

    Complex(double r, double i)
    {
        real = r;
        imag = i;
    }

    // // instance member function to set compelx number
    void setData(double r, double i)
    {
        real = r;
        imag = i;
    }

    // // instance member function to display compelx number
    void showData()
    {
        cout << "\n"
             << real << " + " << imag << "i" << endl;
    }

    // // overload binary (addition +) operator
    Complex operator+(Complex c)
    {
        c.real = real + c.real;
        c.imag = imag + c.imag;
        return c;
    }

    // // overload binary (subtraction -) operator
    Complex operator-(Complex c)
    {
        c.real = real - c.real;
        c.imag = imag - c.imag;
        return c;
    }

    // // overload binary (multiplication *) operator
    Complex operator*(Complex c)
    {
        c.real = real * c.real;
        c.imag = imag * c.imag;
        return c;
    }

    // // overload  relational equality (==) operator
    bool operator==(Complex c)
    {
        if (real == c.real && imag == c.imag)
            return true;

        return false;
    }
};

// // Main Function Start
int main()
{
    Complex c3; // create object of Complex
    double real, imag;

    // // Get complex numbers  to add
    cout << "\n>>>>>>>> Enter Two Complex Numbers to Perform Various Operations <<<<<<<<<\n";

    // // Get first complex number
    cout << "\n>>>>>>>> Enter First Complex Number <<<<<<<<<\n";
    cout << "\nEnter Real Part => ";
    cin >> real;
    cout << "\nEnter Imaginary Part => ";
    cin >> imag;

    Complex c1(real, imag); // create object of Complex

    // // Get second complex number
    cout << "\n\n>>>>>>>> Enter Second Complex Number <<<<<<<<<\n";
    cout << "\nEnter Real Part => ";
    cin >> real;
    cout << "\nEnter Imaginary Part => ";
    cin >> imag;

    Complex c2(real, imag); // create object of Complex

    // // display first complex number
    cout << "\n>>>>>>>> First Complex Number <<<<<<<<<\n";
    c1.showData();

    // // display second complex number
    cout << "\n>>>>>>>> Second Complex Number <<<<<<<<<\n";
    c2.showData();

    // // add complex numbers
    c3 = c1 + c2;

    // // display addition of complex numbers
    cout << "\n>>>>>>>> Addition of Entered Complex Numbers <<<<<<<<<\n";
    c3.showData();

    // // subtraction complex numbers
    c3 = c1 - c2;

    // // display subtraction of complex numbers
    cout << "\n>>>>>>>> Subtraction of Entered Complex Numbers <<<<<<<<<\n";
    c3.showData();

    // // multiply complex numbers
    c3 = c1 * c2;

    // // display multiplication of complex numbers
    cout << "\n>>>>>>>> Multiplication of Entered Complex Numbers <<<<<<<<<\n";
    c3.showData();

    // // check equality of complex numbers
    bool isEqual = c1 == c2;

    // // display equality of complex numbers
    cout << "\n>>>>>>>> Entered Complex Numbers Are Equal or Not <<<<<<<<<\n";
    if (isEqual)
        cout << "\nEntered Complex Numbers Are Equal";
    else
        cout << "\nEntered Complex Numbers Are Not Equal";

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
