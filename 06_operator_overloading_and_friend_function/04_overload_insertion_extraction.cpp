/*

Create a class Time which contains hours,minutes and seconds as data members. Write a C++ program using operator overloading for the following :-
1. == : To check whether two Times are the same or not.
2. >> : To accept the time.
3. << : To display the time.

output should be :-

>>>>>>>> Enter Two Time Periods to Check Equality <<<<<<<<<

>>>>>>>> Enter First Time Period (24 Hour Format) <<<<<<<<<

Enter Hours => 5

Enter Minutes => 7

Enter Seconds => 3

>>>>>>>> Enter Second Time Period (24 Hour Format) <<<<<<<<<

Enter Hours => 3

Enter Minutes => 6

Enter Seconds => 3


>>>>>>>> First Time Period <<<<<<<<<

Hours => 5
Minutes => 7
Seconds => 3

>>>>>>>> Second Time Period <<<<<<<<<

Hours => 3
Minutes => 6
Seconds => 3

Time Periods Are Not Equal

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
    int hours, minutes, seconds;

public:
    // // constructors
    Time()
    {
        hours = minutes = seconds = 0;
    }

    Time(int hr)
    {
        hours = hr;
        minutes = seconds = 0;
    }

    Time(int hr, int min)
    {
        hours = hr;
        minutes = min;
        seconds = 0;
    }

    Time(int hr, int min, int sec)
    {
        hours = hr;
        minutes = min;
        seconds = sec;
    }

    // // instance member function to set time
    void setTime(int hr, int min, int sec)
    {
        hours = hr;
        minutes = min;
        seconds = sec;
    }

    // // instance member function to display time
    void showTime()
    {
        cout << "\nHours => " << hours;
        cout << "\nMinutes => " << minutes;
        cout << "\nSeconds => " << seconds;
    }

    // // overload relational equality (==) operator
    bool operator==(Time t)
    {
        if (hours == t.hours && minutes == t.minutes && seconds == t.seconds)
            return true;

        return false;
    }

    // // overload insertion (<<) operator
    friend Time operator<<(ostream &, Time &);

    // // overload extraction (>>) operator
    friend Time operator>>(istream &, Time &);
};

// // overload insertion (<<) operator
Time operator<<(ostream &temp, Time &t)
{
    cout << "\nHours => " << t.hours;
    cout << "\nMinutes => " << t.minutes;
    cout << "\nSeconds => " << t.seconds;
    return t;
}

// // overload extraction (>>) operator
Time operator>>(istream &temp, Time &t)
{
    cout << "\nEnter Hours => ";
    cin >> t.hours;
    cout << "\nEnter Minutes => ";
    cin >> t.minutes;
    cout << "\nEnter Seconds => ";
    cin >> t.seconds;
    return t;
}

// // Main Function Start
int main()
{
    int hr, min, sec;
    Time t1, t2; // create objects of Time

    // // Get two time periods to add
    cout << "\n>>>>>>>> Enter Two Time Periods to Check Equality <<<<<<<<<\n";

    // // Get first time period
    cout << "\n>>>>>>>> Enter First Time Period (24 Hour Format) <<<<<<<<<\n";
    cin >> t1;

    // // Get 2nd time period
    cout << "\n>>>>>>>> Enter Second Time Period (24 Hour Format) <<<<<<<<<\n";
    cin >> t2;

    // // display first time period
    cout << "\n\n>>>>>>>> First Time Period <<<<<<<<<\n";
    cout << t1;

    // // display second time period
    cout << "\n\n>>>>>>>> Second Time Period <<<<<<<<<\n";
    cout << t2;

    // // check equality of time periods
    bool isEqual = t1 == t2;

    if (isEqual)
        cout << "\n\nBoth Time Periods Are Equal";
    else
        cout << "\n\nTime Periods Are Not Equal";

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
