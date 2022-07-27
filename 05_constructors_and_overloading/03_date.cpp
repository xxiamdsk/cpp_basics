// // Define a class Date and write a program to Display Date and initialize date object using Constructors.

// // Header files
#include <iostream>

// // use namespace
using namespace std;

// // define class Date
class Date
{

private:
    // // instance member variables
    unsigned int day;
    unsigned int month;
    unsigned int year;

public:
    // // constructors
    Date()
    {
        day = 1;
        month = 1;
        year = 1;
    }

    Date(int d)
    {
        day = d;
        month = 1;
        year = 1;
    }

    Date(int d, int m)
    {
        day = d;
        month = m;
        year = 1;
    }

    Date(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
    }

    // // instance member function to set tate
    void setDate(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
    }

    // // instance member function to display tate
    void displayDate()
    {
        cout << "\n"
             << day << "/" << month << "/" << year << endl;
    }
};

// // Main Function Start
int main()
{
    int day, month, year;

    // // get date
    cout << "\n>>>>>>>> Enter Date <<<<<<<\n";
    cout << "\nEnter Day => ";
    cin >> day;
    cout << "\nEnter Month => ";
    cin >> month;
    cout << "\nEnter Year => ";
    cin >> year;

    Date t1(day, month, year); // create object of Date

    cout << "\n>>>>>>>> Entered Date <<<<<<<<<";
    t1.displayDate(); // display tate

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
