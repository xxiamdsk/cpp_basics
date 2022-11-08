// // Write a C++ program to open a file 'output.txt' and append data to it.

// // Header files
#include <iostream>
#include <fstream>

// // use namespace
using namespace std;

int main()
{
    // // specify file name
    const char *fileName = "output.txt";

    // // data to be appended
    const char *appendData = "Cpp Programming";

    // // create an instance of ofstream for writing in a file
    ofstream fout;

    // // open file for writing, if file not exist it will be created
    fout.open(fileName, ios::app);

    // // check if the file is successfully opened
    if (!fout.is_open())
    {
        cout << "\nError: Unable to Open File..." << endl;
        return 1;
    }

    // // append data in file using insertion operator
    fout << appendData;

    // // close file
    fout.close();

    // // data appended successfully
    cout << "\nData Appended Successfully..." << endl;

    cout << endl; // Add new line
    return 0;
}
