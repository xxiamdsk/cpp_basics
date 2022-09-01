// // Write a C++ program to add two numbers using single inheritance. Accept and add these two numbers in base class and display the sum of these two numbers in derived class.

// // Header files
#include <iostream>

// // use namespace
using namespace std;

// // define class Base
class Base
{

private:
    // // instance member variables
    int num1, num2;

protected:
    int sum;

public:
    // // instance member function to set numbers
    void setNumbers(int num1, int num2)
    {
        this->num1 = num1;
        this->num2 = num2;
    }

    // // instance member function to add numbers
    void addNumbers()
    {
        sum = num1 + num2;
    }
};

// // define class Derived by inheriting class Base
class Derived : public Base
{

public:
    void displaySum()
    {
        cout << "\nSum of Numbers => " << sum;
    }
};

// // Main Function Start
int main()
{
    // // create an instance of Derived class
    Derived d1;

    // // set numbers
    d1.setNumbers(5, 15);

    // // add numbers
    d1.addNumbers();

    // // display sum of numbers
    d1.displaySum();

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
