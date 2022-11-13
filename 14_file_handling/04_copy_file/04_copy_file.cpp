// // Write a program to copy the content of one text file to another while changing the case of every alphabet

// // Header files
#include <iostream>
#include <fstream>

// // use namespace
using namespace std;

int main()
{
    // // specify files names
    const char *sourceFile = "source.txt";
    const char *destinationFile = "destination.txt";

    // // create an instances of fstream for both reading and writing in a file
    fstream fout, fin;

    // // open file for reading
    fin.open(sourceFile, ios::in);

    // // check if the file is successfully opened
    if (!fin.is_open())
    {
        cout << "\nError: Unable to Open Source File...\n";
        return 1;
    }

    // // open file for writing
    fout.open(destinationFile, ios::out);

    // // check if the file is successfully opened
    if (!fout.is_open())
    {
        cout << "\nError: Unable to Open or Create Destination File...\n";
        return 1;
    }

    // // read characters from source file one by one and write in destination file
    char ch; // to store character

    while (fin.get(ch)) // // run till the end of file
    {
        // // if character in uppercase, then convert it in lowercase and vice-versa
        if (ch >= 'A' && ch <= 'Z')
            ch += 32;
        else if (ch >= 'a' && ch <= 'z')
            ch -= 32;

        // // write in file
        fout << ch;
    }

    // // close files
    fout.close();
    fin.close();

    // // file copied successfully
    cout << "\nFile Content Successfully Copied..." << endl;

    cout << endl; // Add new line
    return 0;
}
