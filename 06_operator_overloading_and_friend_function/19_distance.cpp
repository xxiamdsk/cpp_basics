// // Create a Distance class having 2 instance variable feet and inches. Also create default constructor and parameterized constructor takes 2 variables . Now overload () function call operator that takes 3 arguments a , b and c and set feet = a + c + 5 and inches = a + b + 15.

// // Header files
#include <iostream>

// // use namespace
using namespace std;

// // define class Distance
class Distance
{
private:
    // // instance memeber variable
    double feet, inches;

public:
    // // constructors
    Distance()
    {
        feet = inches = 0;
    }

    Distance(double feet, double inches)
    {
        (*this).feet = feet;
        (*this).inches = inches;
    }

    // // instance memebr function to set distance
    void setDistance(double feet, double inches)
    {
        (*this).feet = feet;
        (*this).inches = inches;
    }

    // // instance memebr function to show distance
    int showDistance()
    {
        cout << "\nfeet => " << feet;
        cout << "\ninches => " << inches;
    }

    // overload function call parenthesis () operator
    double operator()(double a, double b, double c)
    {
        feet = a + c + 5;
        inches = a + b + 15;
    }
};

int main()
{

    Distance d1(14, 4); // create objects of Distance class

    cout << "\n\n>>>>>>>>>>> Distance d1 <<<<<<<<<<<";
    d1.showDistance();

    d1(5, 3, 7);

    cout << "\n\n>>>>>>>>>>> Distance After calling d1(5,3,7) <<<<<<<<<<<";
    d1.showDistance();

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
