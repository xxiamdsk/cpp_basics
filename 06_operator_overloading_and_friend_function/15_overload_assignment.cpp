// // Create a complex class and overload assignment operator for that class.

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

    // // overload assignment (=) operator
    Complex operator=(Complex c)
    {
        real = c.real;
        imag = c.imag;
        return c;
    }
};

// // Main Function Start
int main()
{
    double real, imag;

    // // Get complex
    cout << "\n>>>>>>>> Enter A Complex Number <<<<<<<<<\n";
    cout << "\nEnter Real Part => ";
    cin >> real;
    cout << "\nEnter Imaginary Part => ";
    cin >> imag;

    Complex c1(real, imag), c2; // create objects of Complex
    c2 = c1;                    // assign c1 to c2

    // // display first complex number
    cout << "\n>>>>>>>> First Complex Number <<<<<<<<<\n";
    c1.showData();

    cout << "\n>>>>>>>> Copy of Complex Number <<<<<<<<<\n";
    c2.showData();

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
