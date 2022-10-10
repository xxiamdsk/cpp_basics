// // Demonstrate the use of new operator with reference variable in cpp

// // Header files
#include <iostream>

// // use namespace
using namespace std;

// // define class A
class Hello
{

public:
    // // instance member function to print hello
    void printHello()
    {
        cout << "\nHello";
    }
};

// // Main Function Start
int main()
{
    // // create an reference obejct of class Hello
    Hello &h1 = *(new Hello);

    h1.printHello();

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
