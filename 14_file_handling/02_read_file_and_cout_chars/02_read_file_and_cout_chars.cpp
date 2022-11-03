// // Write a C++ program to read a text file and count the number of characters in it.

// // Header files
#include <iostream>
#include <fstream>

// // use namespace
using namespace std;

int main()
{

    // // specify file name
    const char *fileName = "read.txt";

    // // create an instance of ifstream for reading from a file
    ifstream fin;

    // // open file for reading
    fin.open(fileName, ios::in);

    // // check if the file is successfully opened
    if (!fin.is_open())
    {
        cout << "\nError: Unable to Open File..." << endl;
        return 1;
    }

    // // read file character by character and count the characters
    char ch;         // to store character
    int counter = 0; // to count characters

    while (fin.get(ch)) // run till the end of the file
        counter++;      // increment counter

    // // display number of characters
    cout << "\n\nNumber of Characters in File => " << counter << endl;

    // // close file
    fin.close();

    cout << endl; // Add new line
    return 0;
}
