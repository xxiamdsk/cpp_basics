// // Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate number of instance member variables and also define instance member functions to set values for time and display values of time.

// // Header files
#include <iostream>

// // use namespace
using namespace std;

// // define class Time
class Time
{

private:
    // // instance member variables
    int hours, minutes, seconds;

public:
    // // instance member function to set time
    void setTime(int hr, int min, int sec)
    {
        hours = hr;
        minutes = min;
        seconds = sec;
    }

    // // instance member function to display time
    void displayTime()
    {
        cout << "\n"
             << hours << " hr " << minutes << " min " << seconds << " sec " << endl;
    }
};

// // Main Function Start
int main()
{
    Time t1; // create object of Time
    int hr, min, sec;

    // // Get Time
    cout << "\n>>>>>>>> Enter Time (24 Hour Format) <<<<<<<<<\n";
    cout << "\nEnter Hours => ";
    cin >> hr;
    cout << "\nEnter Minutes => ";
    cin >> min;
    cout << "\nEnter Seconds => ";
    cin >> sec;

    t1.setTime(hr, min, sec); // set time

    cout << "\n>>>>>>>> Entered Time <<<<<<<<<";
    t1.displayTime(); // display time

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
