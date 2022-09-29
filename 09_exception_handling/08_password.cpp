// // Write a C++ program to accept a password and throw an exception if the password has less than 6 characters or does not contain a digit or does not contain any special character or does not contain any capital letter.

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
        char password[MAX_CHARS];
        int length = 0, haveDigit = FALSE, haveSpecialChar = FALSE, haveCapitalLetter = FALSE, isValid = FALSE;

        cout << "\nEnter Password, Should Have A Digit, A Capital Letter And A Special Character (MIN_CHARS " << MIN_CHARS << " , MAX_CHARS " << MAX_CHARS - 1 << ") => ";

        cin.getline(password, MAX_CHARS);

        while (password[length])
        {
            if (!haveCapitalLetter && password[length] >= 'A' && password[length] <= 'Z')
                haveCapitalLetter = TRUE;

            if (!haveDigit && password[length] >= '0' && password[length] <= '9')
                haveDigit = TRUE;

            if (!haveSpecialChar && (password[length] < '0' || password[length] > '9') && (password[length] < 'A' || password[length] > 'Z') && (password[length] < 'a' || password[length] > 'z'))
                haveSpecialChar = TRUE;

            length++;

            if (length > MIN_CHARS - 1 && haveCapitalLetter && haveDigit && haveSpecialChar)
            {
                isValid = TRUE;
                break;
            }
        }

        if (length < MIN_CHARS || isValid == FALSE)
            throw "Password is Invalid";

        cout << "\nPassword is Valid...";
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
