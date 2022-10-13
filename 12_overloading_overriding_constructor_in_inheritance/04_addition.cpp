// // Define a class Addition that can add 2 or 3 numbers of different data types using function overloading.

// // Header files
#include <iostream>

// // use namespace
using namespace std;

// // define class Addition
class Addition
{

public:
    // // overloaded instance member function to add 2 numbers of type int
    static int add(int n1, int n2)
    {
        return n1 + n2;
    }

    // // overloaded instance member function to add 3 numbers of type int
    static int add(int n1, int n2, int n3)
    {
        return n1 + n2 + n3;
    }

    // // overloaded instance member function to add 2 numbers of type float
    static int add(float n1, float n2)
    {
        return n1 + n2;
    }

    // // overloaded instance member function to add 3 numbers of type float
    static int add(float n1, float n2, float n3)
    {
        return n1 + n2 + n3;
    }

    // // overloaded instance member function to add 2 numbers of type double
    static int add(double n1, double n2)
    {
        return n1 + n2;
    }

    // // overloaded instance member function to add 3 numbers of type double
    static int add(double n1, double n2, double n3)
    {
        return n1 + n2 + n3;
    }
};

// // Main Function Start
int main()
{

    int i1 = 5, i2 = 89, i3 = 6;
    float f1 = 3.5, f2 = 90.0, f3 = 7.9;
    double d1 = 44.5, d2 = 20.3, d3 = 24.6;

    cout << "\nAdditon of " << i1 << " and " << i2 << " => " << Addition::add(i1, i2);
    cout << "\nAdditon of " << i1 << ", " << i2 << " and " << i3 << " => " << Addition::add(i1, i2, i3);
    cout << "\nAdditon of " << f1 << " and " << f2 << " => " << Addition::add(f1, f2);
    cout << "\nAdditon of " << f1 << ", " << f2 << " and " << f3 << " => " << Addition::add(f1, f2, f3);
    cout << "\nAdditon of " << d1 << " and " << d2 << " => " << Addition::add(d1, d2);
    cout << "\nAdditon of " << d1 << ", " << d2 << " and " << d3 << " => " << Addition::add(d1, d2, d3);

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
