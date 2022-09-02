// // Write a C++ program to calculate the percentage of a student using multi-level inheritance. Accept the marks of three subjects in base class. A class will be derived from the above mentioned class which includes a function to find the total marks obtained and another class derived from this class which calculates and return the percentage of students.

// // Header files
#include <iostream>

#include <iomanip>

// // use namespace
using namespace std;

// // define class AcceptNumbers
class AcceptNumbers
{

protected:
    // // instance member variables
    double m1, m2, m3;

public:
    // // instance member function to set marks
    void setMarks(double m1, double m2, double m3)
    {
        this->m1 = m1;
        this->m2 = m2;
        this->m3 = m3;
    }
};

// // define class Derived by inheriting class AcceptNumbers
class TotalMarks : public AcceptNumbers
{
protected:
    // // instance member variable
    double totalMarks;

public:
    // // instance member function to find totalMarks
    double calculateTotalMarks()
    {
        totalMarks = m1 + m2 + m3;
        return totalMarks;
    }
};

// // define class Percentage by inheriting class TotalMarks
class Percentage : public TotalMarks
{
private:
    // // instance member variable
    double percentage;

public:
    // // instance member function to calcuate percentage
    double calculatePercentage()
    {
        percentage = totalMarks / 300 * 100;
        return percentage;
    }
};

// // Main Function Start
int main()
{
    // // create an instance of Percentage class
    Percentage p1;

    // // set marks
    p1.setMarks(77, 82, 56);

    // // calculate and get total Marks
    cout << "\nTotal Marks => " << p1.calculateTotalMarks();

    // // calculate
    cout << "\nPercentage => " << setprecision(4) << p1.calculatePercentage() << "%";

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
