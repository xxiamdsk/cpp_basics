// // Write a C++ program to overload unary operators that is increment and decrement.

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

    // // overload insertion (<<) operator
    friend Complex operator<<(ostream &, Complex &);

    // // overload extraction (>>) operator
    friend Complex operator>>(istream &, Complex &);
};

// // overload insertion (<<) operator
Complex operator<<(ostream &temp, Complex &c)
{
    cout << "\n"
         << c.real << " + " << c.imag << "i" << endl;
    return c;
}

// // overload extraction (>>) operator
Complex operator>>(istream &temp, Complex &c)
{
    cout << "\nEnter Real => ";
    cin >> c.real;
    cout << "\nEnter Imaginary => ";
    cin >> c.imag;
    return c;
}

// // Main Function Start
int main()
{
    Complex c1; // create object of Complex

    // // Get complex number
    cout << "\n>>>>>>>> Enter Complex Number <<<<<<<<<\n";
    cin >> c1;

    // // display complex number
    cout << "\n>>>>>>>> Complex Number <<<<<<<<<";
    cout << c1;

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
