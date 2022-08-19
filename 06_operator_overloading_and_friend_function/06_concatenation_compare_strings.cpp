/*

Create a class CString to represent a string and define following
a. Overload the + operator to concatenate two strings.
b. == to compare 2 strings.

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
    static const int MAX_CHARS = 31;

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

    // // overload binary addition operator (+) to concate two strings
    CString operator+(CString str1)
    {
        CString temp;
        char s[MAX_CHARS];
        strcpy(s, str);
        strcat(s, str1.str);
        strcpy(temp.str, s);
        return temp;
    }

    // // overload  relational equality (==) operator

    int operator==(CString str1)
    {
        return strcmp(str, str1.str);
    }
};

// // Main Function Start
int main()
{
    char str1[CString::MAX_CHARS], str2[CString::MAX_CHARS], str3[CString::MAX_CHARS];

    // // Get strings
    cout << "\n>>>>>>>>>>>> Enter Any Two Strings To Perform Operations <<<<<<<<<<<<\n";

    cout << "\nEnter String-1 (MAX_CHARACTERS " << CString::MAX_CHARS - 17 << ") => ";
    cin.getline(str1, CString::MAX_CHARS - 17);

    cout << "\nEnter String-1 (MAX_CHARACTERS " << CString::MAX_CHARS - 17 << ") => ";
    cin.getline(str2, CString::MAX_CHARS - 17);

    CString s1(str1), s2(str2); // create objects of CString class
    CString s3;

    // // concatenation of s1 and s2
    s3 = s1 + s2;

    cout << "\nConcatenation of String-1 and String-2 => " << s3.getString(str3);

    // // check equality of strings
    bool isEqual = s1 == s2;

    if (isEqual == 0)
        cout << "\n\nBoth Strings Are Equal";
    else
        cout << "\n\nStrings Are Not Equal";

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
