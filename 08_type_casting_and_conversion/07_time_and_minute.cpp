/*

Create two class Time and Minute and add required getter and setter including constructors. Now you need to type cast Time object into Minute to fetch the minute from Time and display it.

Example :-

int main()
{
  Time t1(2,30,44);
  Minute m1;
  m1=t1 // Fetch minute from time
  cout << "\n?>>>>>> Time <<<<<<<<<";
  t1.showTime();
  cout << "\n>>>>>>>> Fetched Minute <<<<<<<<<";
  m1.showMinute();
  return 0;
}

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
    // // constructors
    Time()
    {
        h = m = s = 0;
    }

    Time(int hr, int min, int sec)
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

    // // instance member function to get minute
    int getMinute()
    {
        return m;
    }
};

// // define class Minute
class Minute
{

private:
    // // instance member variables
    int min;

public:
    // // constructors
    Minute()
    {
        min = 0;
    }

    Minute(int m)
    {

        min = m;
    }

    Minute(Time t)
    {

        min = t.getMinute();
    }

    // // instance member function to display minute
    void showMinute()
    {
        cout << "\n"
             << min << endl;
    }
};

// // Main Function Start
int main()
{
    Time t1(2, 30, 44);
    Minute m1;

    m1 = t1; // Fetch minute from time

    cout << "\n?>>>>>> Time <<<<<<<<<";
    t1.showTime();

    cout << "\n>>>>>>>> Fetched Minute <<<<<<<<<";
    m1.showMinute();

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
