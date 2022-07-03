// // Define a class LargestNumber which should be able to find largest of 2 or 3 numbers. So, define appropriate instance member functions to do this task.

// // Header files
#include <iostream>

// // use namespace
using namespace std;

// // define class LargestNumber
class LargestNumber
{

private:
    // // instance member variables
    int num1, num2, num3, largest;

public:
    // // instance member function to set number 2 numbers
    void setNumbers(int n1, int n2)
    {
        num1 = n1;
        num2 = n2;
    }

    // // instance member function to set number 3 numbers
    void setNumbers(int n1, int n2, int n3)
    {
        num1 = n1;
        num2 = n2;
        num3 = n3;
    }

    // // instance member function to find largest of 2 numbers
    int findLargestOfTwo()
    {
        largest = num1 > num2 ? num1 : num2;

        return largest;
    }

    // // instance member function to find largest among three  numbers
    int findLargestOfThree()
    {
        if (num1 > num2)
        {
            if (num1 > num3)
                largest = num1;
            else
                largest = num3;
        }
        else if (num2 > num3)
            largest = num2;
        else
            largest = num3;

        return largest;
    }
};

// // Main Function Start
int main()
{
    LargestNumber l1; // create object of LargestNumber
    int n1, n2, n3, largest;

    // // Get two numbers to find largest of 2 numbers
    cout << "\nEnter Two Numbers to Find Largest => ";
    cin >> n1 >> n2;

    l1.setNumbers(n1, n2);           // set numbers to find largest of two numbers
    largest = l1.findLargestOfTwo(); // find largest of two numbers

    // // display largest number
    cout << "\nLargest Number => " << largest;

    // // Get three numbers to find largest of 2 numbers
    cout << "\n\nEnter Three Numbers to Find Largest => ";
    cin >> n1 >> n2 >> n3;

    l1.setNumbers(n1, n2, n3);         // set numbers to find largest among three numbers
    largest = l1.findLargestOfThree(); // find largest of two numbers

    // // display largest number
    cout << "\nLargest Number => " << largest;

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
