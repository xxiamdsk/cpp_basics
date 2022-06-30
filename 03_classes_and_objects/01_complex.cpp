// // Define a class Complex to represent a complex number. Declare instance member variables to store real and imaginary part of a complex number, also define instance member functions to set values of complex number and display values of complex number.

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
    // // instance member function to set compelx number
    void setComplex(double r, double i)
    {
        real = r;
        imag = i;
    }

    // // instance member function to display compelx number
    void displayComplex()
    {
        cout << "\n"
             << real << " + " << imag << "i" << endl;
    }
};

// // Main Function Start
int main()
{
    Complex c1; // create object of Complex
    double real, imag;

    // // Get Complex number
    cout << "\n>>>>>>>> Enter A Complex Number <<<<<<<<<\n";
    cout << "\nEnter Real Part => ";
    cin >> real;
    cout << "\nEnter Imaginary Part => ";
    cin >> imag;

    c1.setComplex(real, imag); // set complex number

    cout << "\n>>>>>>>> Entered Complex Number <<<<<<<<<";
    c1.displayComplex(); // display complex number

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
