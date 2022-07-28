// // Implement a class Counter with a static member variable count and a static member function to get value of count.

// // Header files
#include <iostream>

// // use namespace
using namespace std;

// // define class Counter
class Counter
{
private:
    // // instance member variable
    int counter;

public:
    // // constructors
    Counter()
    {
        counter = 0;
    }

    Counter(int count)
    {
        counter = count;
    }

    // // instance member function to set counter
    int setCounter(int count)
    {
        counter = count;
    }

    // // instance member function to get counter
    int getCounter()
    {
        return counter;
    }

    // // instance member function to set counter
    int incrementCounter()
    {
        counter++;
    }
};

// // Main Function Start
int main()
{
    int count;
    cout << "\nEnter Number From Which You Want to Start Counter => ";
    cin >> count;

    Counter c1(count); // create object of Counter

    // // show counter
    cout << "\nCounter Started From => " << c1.getCounter();

    // // increment counter
    c1.incrementCounter();
    c1.incrementCounter();
    c1.incrementCounter();

    // // show counter
    cout << "\nCounter After Incremented 3 Times => " << c1.getCounter();

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End