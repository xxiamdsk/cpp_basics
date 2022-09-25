// // Write a C++ program to demonstrate the use multiple catch blocks.

// // Header files
#include <iostream>

// // use namespace
using namespace std;

// // Main Function Start
int main()
{
    int num;

    cout << "\nPress 1. To Throw Exception Using Instance of int";
    cout << "\nPress 2. To Throw Exception Using Instance of double";
    cout << "\nPress 3. To Throw Exception Using Instance of string";

    try
    {
        cout << "\n\nEnter Your Choice => ";
        cin >> num;

        if (num == 1)
            throw 1; // throw instance of int
        else if (num == 2)
            throw 1.1; // throw instance of double
        else if (num == 3)
            throw "string"; // throw instance of string
        else
            throw exception(); // throw any exception
    }
    catch (int e)
    {
        cout << "\nInstance of int";
    }
    catch (double e)
    {
        cout << "\nInstance of double";
    }
    catch (const char *e)
    {
        cout << "\nInstance of string";
    }
    catch (...)
    {
        cout << "\nInvalid Choice";
    }

    cout
        << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
