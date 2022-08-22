/*

Consider the following class mystring
Class CString
{
  char str [100];
};
Overload operator “!” to reverse the case of each alphabet in the string (Uppercase to Lowercase and vice versa).

*/

// // Header files
#include <iostream>

#include <string.h>

// // use namepsace
using namespace std;

// // define class CString
class CString
{

public:
    // // static member variable
    static const int MAX_CHARS = 101;

private:
    // // instance member variables
    char str[MAX_CHARS];
    int length;

public:
    // // constructors
    CString()
    {
        length = 0;
    }

    CString(const char *s)
    {
        strcpy(str, s);
        length = strlen(str);
    }

    CString(char *s)
    {
        strcpy(str, s);
        length = strlen(str);
    }

    // // overloaded instance member function to set string
    void setString(const char *s)
    {
        strcpy(str, s);
        length = strlen(str);
    }

    // // overloaded instance member function to set string
    void setString(char *s)
    {
        strcpy(str, s);
    }

    // // instance member function to get string
    char *getString(char *s)
    {
        strcpy(s, str);
        return s;
    }

    // // instance member function print string
    void printString()
    {
        cout << str;
    }

    // // overload logical not (!) operator
    CString operator!()
    {
        CString temp;
        int i;
        for (i = 0; str[i]; i++)
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
                temp.str[i] = str[i] + 32;
            else if (str[i] >= 'a' && str[i] <= 'z')
                temp.str[i] = str[i] - 32;
            else
                temp.str[i] = str[i];
        }
        temp.str[i] = 0; // add null character to terminate string

        return temp;
    }
};

// // Main Function Start
int main()
{
    char str1[CString::MAX_CHARS], str2[CString::MAX_CHARS], str3[CString::MAX_CHARS];

    // // Get string
    cout << "\nEnter Any String (s1) (MAX_CHARACTERS " << CString::MAX_CHARS << ") => ";
    cin.getline(str1, CString::MAX_CHARS);

    CString s1(str1), s2; // create objects of CString class

    cout << "\nString => ";
    s1.printString();

    // // perform operation of string
    s2 = !s1;

    cout << "\nResult After Performing (s2 = !s1) Operation On String => ";
    s2.printString();

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
