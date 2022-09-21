/*

Create a Rupee class and convert it into int. And Display it.

Example :-

int main()
{
  Rupee r = 10;
  int x = r;
  cout<<x;
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

// // Main Function Start
int main()
{
    Rupee r = 10;

    // // Rupee to int
    int x = r;

    cout << x;

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
