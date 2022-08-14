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

    // // overload pre-increment (++a) operator
    Complex operator++()
    {
        Complex temp;
        temp.real = ++real;
        temp.imag = ++imag;
        return temp;
    }

    // // overload post-increment (a++) operator
    Complex operator++(int)
    {
        Complex temp;
        temp.real = real++;
        temp.imag = imag++;
        return temp;
    }

    // // overload pre-increment (--a) operator
    Complex operator--()
    {
        Complex temp;
        temp.real = --real;
        temp.imag = --imag;
        return temp;
    }

    // // overload post-increment (a--) operator
    Complex operator--(int)
    {
        Complex temp;
        temp.real = real--;
        temp.imag = imag--;
        return temp;
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

    Complex c1(real, imag), c2; // create objects of Complex

    // // display complex number
    cout << "\n>>>>>>>> Complex Number <<<<<<<<<\n";
    c1.showData();

    // // pre-increment (++a)
    ++c1;

    // // display complex number
    cout << "\n>>>>>>>> Complex Number After Performing Pre-Increment (++a) <<<<<<<<<\n";
    c1.showData();

    // // post-increment (a++)
    c1++;

    // // display complex number
    cout << "\n>>>>>>>> Complex Number After Performing Post-Increment (a++) <<<<<<<<<\n";
    c1.showData();

    // // pre-decrement (--a)
    --c1;

    // // display complex number
    cout << "\n>>>>>>>> Complex Number After Performing Pre-Decrement (--a) <<<<<<<<<\n";
    c1.showData();

    // // post-decrement (a--)
    c1--;

    // // display complex number
    cout << "\n>>>>>>>> Complex Number After Performing Post-Decrement (a--) <<<<<<<<<\n";
    c1.showData();

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
