// // Use this pointer to get the reference of caller object. define a class A and a member function that returns the reference of caller object.

// // Header files
#include <iostream>

// // use namespace
using namespace std;

// // define class A
class A
{

public:
    // // instance member function that returns the reference of caller or current object
    A &getReference()
    {
        return *this; // this pointer points to the current object
    }
};

// // Main Function Start
int main()
{
    // // create an instance of class A
    A a1;

    // // get reference of a1
    A refOfA1 = a1.getReference();

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
