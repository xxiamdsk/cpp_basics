// // Write a C++ program to merge the content of two files and generate a new file

// // Header files
#include <iostream>
#include <fstream>

// // use namespace
using namespace std;

int main()
{
    // // specify files names
    const char *file1 = "file1.txt";
    const char *file2 = "file2.txt";
    const char *mergedFile = "merged_file.txt";

    // // create an instances of fstream for both reading and writing in a file
    fstream fout, fin;

    // // open file1 for reading
    fin.open(file1, ios::in);

    // // check if the file is successfully opened
    if (!fin.is_open())
    {
        cout << "\nError: Unable to Open File1...\n";
        return 1;
    }

    // // open file for writing
    fout.open(mergedFile, ios::out);

    // // check if the file is successfully opened
    if (!fout.is_open())
    {
        cout << "\nError: Unable to Open or Create New Merged File...\n";
        return 1;
    }

    // // read characters from file1 one by one and write in merged file
    char ch; // to store character

    while (fin.get(ch))
    {
        // // write in merged file
        fout << ch;
    }

    // // close file1
    fin.close();

    // // open file2 for reading
    fin.open(file2, ios::in);

    // // check if the file is successfully opened
    if (!fin.is_open())
    {
        cout << "\nError: Unable to Open File1...\n";
        return 1;
    }

    // // add space in merged file
    fout << " ";

    // // read characters from file2 one by one and write in merged file
    while (fin.get(ch))
    {
        // // write in merged file
        fout << ch;
    }

    // // close files
    fout.close();
    fin.close();

    // // files merged successfully
    cout << "\nContent of the Files Merged Successfully..." << endl;

    cout << endl; // Add new line
    return 0;
}
