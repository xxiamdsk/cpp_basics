// // Implement a class Counter with a static member variable count and a static member function to get value of count.

// // Header files
#include <iostream>

// // use namespace
using namespace std;

// // define class Counter
class Counter
{
private:
    // // static member variable
    static int count;

public:
    // // static member function to get count
    static int getCount()
    {
        return count;
    }
};

// // define and initialize static member variables
int Counter::count = 0;

// // Main Function Start
int main()
{

    cout << "\nValue of Count => " << Counter::getCount() << endl;

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End