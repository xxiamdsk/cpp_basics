// // Write a C++ program to accept a username, throw exception if the username has less than 6 characters or does contain any digit or special symbol.

// // Header files
#include <iostream>

// // use namespace
using namespace std;

#define MAX_CHARS 21
#define MIN_CHARS 6
#define TRUE 1
#define FALSE 0

// // Main Function Start
int main()
{

    try
    {
        char username[MAX_CHARS];
        int length = 0, isValid = TRUE;

        cout << "\nEnter Username, Should Not Have Any Digit Or Special Symbol (MIN_CHARS " << MIN_CHARS << " , MAX_CHARS " << MAX_CHARS - 1 << ") => ";

        cin.getline(username, MAX_CHARS);

        while (username[length])
        {
            if ((username[length] < 'A' || username[length] > 'Z') && (username[length] < 'a' || username[length] > 'z'))
            {
                isValid = FALSE;
                break;
            }

            length++;
        }

        if (length < MIN_CHARS || isValid == FALSE)
            throw "Username is Invalid";

        cout << "\nUsername is Valid...";
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
