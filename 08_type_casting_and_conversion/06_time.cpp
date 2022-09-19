/*

Create a Time class and take Duration in seconds. Now you need to convert seconds(i.e in int ) to Time class.

Example :-

int main()
{
  int seconds;
  cout<<”Enter time duration in seconds”;
  cin>>duration;
  Time t1 = seconds;
  t1.showTime();
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

    Time(int sec)
    {
        h = sec / 3600;
        m = sec % 3600 / 60;
        s = sec % 3600 % 60;
    }

    // // instance member function to display time
    void showTime()
    {
        cout << "\n"
             << h << " hr " << m << " min " << s << " sec " << endl;
    }
};

// // Main Function Start
int main()
{
    int seconds;
    cout << "\nEnter time duration in seconds => ";
    cin >> seconds;

    // // seconds to Time
    Time t1 = seconds;

    t1.showTime();

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End