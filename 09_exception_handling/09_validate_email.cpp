// // Write a C++ program to accept Gmail id only and throw an exception if the id does not contain @ and gmail.com.

// // Header files
#include <iostream>

#include <cstring>

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
        char email[MAX_CHARS], substr[] = "gmail.com";
        int isValid = FALSE, haveSymbol = FALSE, haveSubStr = FALSE;

        cout << "\nEnter Email Address Must have '@' Symbol and \"gmail.com\" (MAX_CHAR " << MAX_CHARS - 1 << ") => ";
        cin.getline(email, MAX_CHARS);

        int j = 0;

        for (int i = 0; email[i]; i++)
        {
            if (!haveSymbol && email[i] == '@')
                haveSymbol = TRUE;

            if (!haveSubStr && email[i] == substr[j])
            {
                j++;
                if (j == strlen(substr))
                {
                    haveSubStr = TRUE;
                }
            }
            else
                j = 0;

            if (haveSymbol && haveSubStr)
            {
                isValid = TRUE;
                break;
            }
        }

        if (!isValid)
            throw "Email Address is Invalid";

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
