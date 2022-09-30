// // Write a C++ program to accept Nickname and throw an exception if it is greater than 8 characters or does contain a digit or special symbol or space.

// // Header files
#include <iostream>

// // use namespace
using namespace std;

#define MAX_CHARS 9
#define TRUE 1
#define FALSE 0

// // Main Function Start
int main()
{

    try
    {
        char nickName[MAX_CHARS];
        int length = 0, isValid = TRUE;

        cout << "\nEnter Nick Name, Should Not Have Any Digit, Special Symbol Or Space ( MAX_CHARS " << MAX_CHARS - 1 << ") => ";
        cin.getline(nickName, MAX_CHARS);

        while (nickName[length])
        {
            if ((nickName[length] < 'A' || nickName[length] > 'Z') && (nickName[length] < 'a' || nickName[length] > 'z'))
            {
                isValid = FALSE;
                break;
            }

            length++;
        }

        if (!length || isValid == FALSE)
            throw "Nick Name is Invalid";

        cout << "\nNick Name is Valid...";
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
