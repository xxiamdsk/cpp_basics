// // Write a C++ program to accept area pin code and throw an exception if it does not contain 6 digits.

// // Header files
#include <iostream>

// // use namespace
using namespace std;

#define MAX_CHARS 7
#define VALID_LENGTH 6

// // Main Function Start
int main()
{

    try
    {
        char pinCode[MAX_CHARS];
        int length = 0;

        cout << "\nEnter Pin Code (Must Be of " << VALID_LENGTH << " Digits , MAX_DIGITS " << MAX_CHARS - 1 << ") => ";
        cin.getline(pinCode, MAX_CHARS);

        while (pinCode[length])
        {
            if (pinCode[length] < '0' || pinCode[length] > '9')
            {
                length = 0;
                break;
            }

            length++;
        }

        if (length != VALID_LENGTH)
            throw "Pin Code is Invalid";

        cout << "\nPin Code is Valid...";
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
