// // Write a C++ program to create a file and print “File created successfully”,otherwise display "Error: Unable to Create a File"

// // Header files
#include <iostream>
#include <fstream>

// // use namespace
using namespace std;

int main()
{

    // // specify file name
    const char *fileName = "newfile.txt";

    // // create an instance of ofstream for writing in a file
    ofstream fout;

    // // open file for writing, if file not exist it will be created
    fout.open(fileName, ios::out);

    // // check if the file is successfully opened
    if (fout.is_open())
        cout << "\nFile Created Successfully..." << endl;
    else
        cout << "\nError: Unable to Create File..." << endl;

    // // close file
    fout.close();

    cout << endl; // Add new line
    return 0;
}
