/*

Create a Dollar class and add necessary functions to support int to Dollar type conversion.

Example :-

int main()
{
  int x = 50;
  Dollar d;
  d = x;
  cout << "Dollar => " << d.getDollar();
  return 0;
}

*/

// // Header files
#include <iostream>

// // use namespace
using namespace std;

// // define class Dollar
class Dollar
{

private:
    // // instance member variables
    int d;

public:
    // // constructors
    Dollar()
    {
        d = 0;
    }

    Dollar(int d)
    {
        this->d = d;
    }

    // // instance member function to set dollar
    void setDollar(int d)
    {
        this->d = d;
    }

    // // instance member function to get dollar
    int getDollar()
    {
        return d;
    }
};

// // Main Function Start
int main()
{
    int x = 50;

    Dollar d;

    // // int to Dollar
    d = x;

    cout << "Dollar => " << d.getDollar();

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
