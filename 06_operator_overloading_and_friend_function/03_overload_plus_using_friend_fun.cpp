// // Write a C++ program to add two complex numbers using operator overloaded by a friend function.

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

    // // overload binary (addition +) operator using friend function
    friend Complex operator+(Complex, Complex);
};

// // overload binary (addition +) operator using friend function
Complex operator+(Complex c1, Complex c2)
{
    c1.real = c1.real + c2.real;
    c1.imag = c1.imag + c2.imag;
    return c1;
}

// // Main Function Start
int main()
{
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
    Complex c3;             // create object of Complex

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

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
