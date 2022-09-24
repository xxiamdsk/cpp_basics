/*

Create two classes Rupee and Dollar and add necessary functions to support Rupee to
Dollar and Dollar to Rupee conversion.

Example :-

int main()
{
  Rupee r = 23;
  Dollar d = r; // Rupee to Dollar conversion
  cout<<"\nDollar => "<<d.getDollar();
  cout<<"\nRupee => "<<r.getRupee();
  r = d; // Dollar to Rupee Conversion
  cout<<"\nDollar => "<<d.getDollar();
  cout<<"\nRupee => "<<r.getRupee();
  return 0;
}

*/

// // Header files
#include <iostream>

// // use namespace
using namespace std;

// // define class Rupee
class Rupee
{

private:
    // // instance member variables
    int r;

public:
    // // constructors
    Rupee()
    {
        r = 0;
    }

    Rupee(int r)
    {
        this->r = r;
    }

    // // instance member function to set rupee
    void setRupee(int r)
    {
        this->r = r;
    }

    // // instance member function to get rupee
    int getRupee()
    {
        return r;
    }

    // // overload typecasting operator to convert Rupee to int
    operator int()
    {
        return r;
    }
};

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

    Dollar(Rupee r1)
    {
        this->d = r1.getRupee();
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

    // // overload type casting operator to convert Dollar to Rupee
    operator Rupee()
    {
        return d;
    }
};

// // Main Function Start
int main()
{
    Rupee r = 23;

    // // Rupee to Dollar conversion
    Dollar d = r;

    cout << "\nDollar => " << d.getDollar();
    cout << "\nRupee => " << r.getRupee();

    // // Dollar to Rupee Conversion
    r = d;

    cout << "\nDollar => " << d.getDollar();
    cout << "\nRupee => " << r.getRupee();

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
