// // Write a C++ program to accept a mobile number and throw an exception if it does not contain 10 digits.

// // Header files
#include <iostream>

// // use namespace
using namespace std;

#define MAX_CHARS 11
#define VALID_LENGTH 10

// // Main Function Start
int main()
{

    try
    {
        char mobileNumber[MAX_CHARS];
        int length = 0;

        cout << "\nEnter Your Mobile Number (Must Be of " << VALID_LENGTH << " Digits , MAX_DIGITS " << MAX_CHARS - 1 << ") => ";
        cin.getline(mobileNumber, MAX_CHARS);

        while (mobileNumber[length])
        {
            if (mobileNumber[length] < '0' || mobileNumber[length] > '9')
            {
                length = 0;
                break;
            }

            length++;
        }

        if (length != VALID_LENGTH)
            throw "Mobile Number is Invalid";

        cout << "\nMobile Number is Valid...";
    }
    catch (const char *e)
    {
        cout << e;
    }

    cout
        << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
