// //  Write a C++ program to accept an email address and throw an exception if it does not contain @ symbol.

// // Header files
#include <iostream>

// // use namespace
using namespace std;

#define MAX_CHARS 31
#define TRUE 1
#define FALSE 0

// // Main Function Start
int main()
{

    try
    {
        char email[MAX_CHARS];
        int isValid = FALSE;

        cout << "\nEnter Email Address Must have '@' Symbol (MAX_CHAR " << MAX_CHARS - 1 << ") => ";
        cin.getline(email, MAX_CHARS);

        for (int i = 0; email[i]; i++)
        {
            if (email[i] == '@')
            {
                isValid = TRUE;
                break;
            }
        }

        if (!isValid)
            throw "Email Address is Invalid, Don't have '@' symbol";

        cout << "\nEmail is Valid...";
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
