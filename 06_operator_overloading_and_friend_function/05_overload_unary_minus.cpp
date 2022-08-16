/*

Consider following :-
class Numbers
{
  int x,y,z;

};
Overload the operator unary vus (-) to negate the numbers.

*/

// // Header files
#include <iostream>

// // use namespace
using namespace std;

// // define class Numbers
class Numbers
{

private:
    // // instance member variables
    int x, y, z;

public:
    // // constructors
    Numbers()
    {
        x = y = z = 0;
    }

    Numbers(int a)
    {
        x = a;
        y = z = 0;
    }

    Numbers(int a, int b)
    {
        x = a;
        y = b;
        z = 0;
    }

    Numbers(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }

    // // instance member function to set Numbers
    void setNumbers(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }

    // // instance member function to display Numbers
    void showNumbers()
    {
        cout << "\nx => " << x;
        cout << "\ny => " << y;
        cout << "\nz => " << z;
    }

    // // overload unary minus (-a) operator
    Numbers operator-()
    {
        Numbers temp;
        temp.x = -x;
        temp.y = -y;
        temp.z = -z;
        return temp;
    }
};

// // Main Function Start
int main()
{
    int a, b, c;

    cout << "\nEnter Three Numbers => ";
    cin >> a >> b >> c;

    Numbers n1(a, b, c); // create object of Numbers
    Numbers n2;          // create object of Numbers

    cout << "\n>>>>>>>>> Numbers Are <<<<<<<<<<<<<";
    n1.showNumbers();

    n2 = -n1;

    cout << "\n\n>>>>>>>>> Negation of Numbers <<<<<<<<<<<<<";
    n2.showNumbers();

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
