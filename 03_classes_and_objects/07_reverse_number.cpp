// // Define a class ReverseNumber and define an instance member function to find Reverse of a Number using class.

// // Header files
#include <iostream>

// // use namespace
using namespace std;

// // define class ReverseNumber
class ReverseNumber
{

private:
    // // instance member variables
    int num, revOfNum;

public:
    // // instance member function to set number
    void setNumber(int n)
    {
        num = n;
    }

    // // instance member function to get the value of num
    int getNumber()
    {
        return num;
    }

    // // instance member function to calculate square of num
    int findReverse()
    {
        int copyNum = num;
        revOfNum = 0;

        while (copyNum)
        {
            revOfNum = revOfNum * 10 + copyNum % 10;
            copyNum /= 10;
        }

        return revOfNum;
    }
};

// // Main Function Start
int main()
{
    ReverseNumber rev1; // create object of ReverseNumber
    int num, rev;

    // // Get a number to find its reverse
    cout << "\nEnter A Number to Find It's Reverse => ";
    cin >> num;

    rev1.setNumber(num);      // set number to find it's reverse
    rev = rev1.findReverse(); // find reverse

    // // display reverse of num
    cout << "\nReverse of " << num << " => " << rev;

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
