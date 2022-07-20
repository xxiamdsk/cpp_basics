// // Define a class StaticCount and create a static variable. Increment this variable in a instance member function named increment and call this 3 times and display the result.

// // Header files
#include <iostream>

// // use namespace
using namespace std;

// // define class StaticCount
class StaticCount
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

    // // instance member function to increment count
    void increment()
    {

        count++;
        cout << "\nCount Incremented";
    }
};

// // define and initialize static member variables
int StaticCount::count = 0;

// // Main Function Start
int main()
{

    cout << "\nInitial Value of Count => " << StaticCount::getCount() << endl;

    StaticCount s1;

    s1.increment();
    s1.increment();
    s1.increment();

    cout << "\n\nValue of Count After Calling Function 3 Times => " << StaticCount::getCount();

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End