// // Define a class A having multiple constructors. Define another class B derived from class A. Create derived class constructors and show use of constructor in this single inheritance.

// // Header files
#include <iostream>

#include <string.h>

// // use namespace
using namespace std;

// // define class A
class A
{
private:
    int a;

public:
    // // constructors
    A()
    {
        cout << "\nDefault Constructor of Class A";
    }

    A(int a)
    {
        this->a = a;
        cout << "\nParametrized Constructor of Class A";
    }

    // // instance member function to get a
    int getA()
    {
        return a;
    }
};

// // define class B by Inheriting class A
class B : public A
{
private:
    int b;

public:
    // // constructors
    B() : A()
    {
        cout << "\nDefault Constructor of Class B";
    }

    B(int b) : A(b)
    {
        this->b = b;
        cout << "\nParametrized Constructor of Class B";
    }

    // // instance member function to get b
    int getB()
    {
        return b;
    }
};

// // Main Function Start
int main()
{
    // // instance of B
    B b1, b2 = 6;

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
