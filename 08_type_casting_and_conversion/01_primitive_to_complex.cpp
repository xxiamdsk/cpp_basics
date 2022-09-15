/*

Write a C++ program to convert Primitive type to Complex type.

Example :-

int main()
{
  Complex c1;
  Int x=5;
  c1=x;
  return 0;
}

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
    int real;
    int imag;

public:
    // // constructors
    Complex()
    {
        real = imag = 0;
    }

    Complex(int r)
    {
        real = imag = r;
    }

    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }

    // // instance member function to set compelx number
    void setData(int r, int i)
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
};

// // Main Function Start
int main()
{
    Complex c1;

    int x = 5;

    // // primitive to Complex
    c1 = x;

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
