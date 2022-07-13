/*

Define a class Time to represent a time with instance variables h,m and s to store hour, minute and second. Also define following member functions :-

- a. void setTime(int,int,int)
- b. void showTime()
- c. void normalize()
- d. Time add(Time)


Normalization of Time :-

Normalizing time typically involves converting time into a standardized representation, often as a decimal or a specific unit. Here are a couple of common scenarios for normalizing time:

1. Convert Time to Decimal Hours:
For example, if you have hours, minutes, and seconds, you can normalize it to decimal hours.
Formula: Decimal Hours = Hours + (Minutes / 60) + (Seconds / 3600)

2. Convert Time to Total Seconds:
Another common normalization is converting the time to total seconds.
Formula: Total Seconds = (Hours * 3600) + (Minutes * 60) + Seconds

*/

// // Header files
#include <iostream>

// // use namespace
using namespace std;

// // define class Time
class Time
{

private:
    // // instance member variables
    int h, m, s;

public:
    // // instance member function to set time
    void setTime(int hr, int min, int sec)
    {
        h = hr;
        m = min;
        s = sec;
    }

    // // instance member function to display time
    void showTime()
    {
        cout << "\n"
             << h << " hr " << m << " min " << s << " sec " << endl;
    }

    // // instance member function to normalize time
    double normalize()
    {
        return h + m / 60.0 + s / 3600.0;
    }

    // // instance member function to add two times
    Time add(Time t)
    {
        Time temp;

        temp.s = s + t.s;
        if (temp.s > 59)
        {
            m += temp.s / 60;
            temp.s = temp.s % 60;
        }

        temp.m = m + t.m;
        if (temp.m > 59)
        {
            h += temp.m / 60;
            temp.m = temp.m % 60;
        }

        temp.h = h + t.h;

        return temp;
    }
};

// // Main Function Start
int main()
{
    Time t1, t2, t3; // create objects of Time
    int hr, min, sec;
    double normalizedTime;

    // // Get two time periods to add
    cout << "\n>>>>>>>> Enter Two Time Periods to Add <<<<<<<<<\n";

    // // Get first time period
    cout << "\n>>>>>>>> Enter First Time Period (24 Hour Format) <<<<<<<<<\n";
    cout << "\nEnter Hours => ";
    cin >> hr;
    cout << "\nEnter Minutes => ";
    cin >> min;
    cout << "\nEnter Seconds => ";
    cin >> sec;

    t1.setTime(hr, min, sec); // set time for t1

    // // Get 2nd time period
    cout << "\n>>>>>>>> Enter Second Time Period (24 Hour Format) <<<<<<<<<\n";
    cout << "\nEnter Hours => ";
    cin >> hr;
    cout << "\nEnter Minutes => ";
    cin >> min;
    cout << "\nEnter Seconds => ";
    cin >> sec;

    t2.setTime(hr, min, sec); // set time for t2

    // // display first time period
    cout << "\n>>>>>>>> First Time Period <<<<<<<<<\n";
    t1.showTime();

    // // display second time period
    cout << "\n>>>>>>>> Second Time Period <<<<<<<<<\n";
    t2.showTime();

    // // add time periods
    t3 = t1.add(t2);

    cout << "\n>>>>>>>> Sum of Entered Time Periods <<<<<<<<<\n";
    t3.showTime(); // display sum time periods

    // // normalize added time
    normalizedTime = t3.normalize();

    cout << "\nNormalization of Added Time Period => " << normalizedTime;

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
