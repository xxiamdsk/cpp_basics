// // Create a class ComplexNumber with instance member variables for the real and imaginary parts. Implement multiple constructors, including one default constructor and another that takes the real and imaginary parts separately.

// // Header files
#include <iostream>

// // use namespace
using namespace std;

// // define class Complex
class Complex
{

private:
    // // instance member variables
    double a;
    double b;

public:
    // // constructors
    Complex()
    {
        a = b = 0;
    }

    Complex(double r)
    {
        a = b = r;
    }

    Complex(double r, double i)
    {
        a = r;
        b = i;
    }

    // // instance member function to set compelx number
    void setData(double r, double i)
    {
        a = r;
        b = i;
    }

    // // instance member function to display compelx number
    void showData()
    {
        cout << "\n"
             << a << " + " << b << "i" << endl;
    }
};

// // Main Function Start
int main()
{
    double real, imag;

    // // Get complex number
    cout << "\nEnter Real Part => ";
    cin >> real;
    cout << "\nEnter Imaginary Part => ";
    cin >> imag;

    Complex c1(real, imag); // create objects of Complex

    // // display complex number
    cout << "\n>>>>>>>> Complex Number <<<<<<<<<\n";
    c1.showData();

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
