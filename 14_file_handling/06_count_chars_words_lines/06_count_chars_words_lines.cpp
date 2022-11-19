// // Write a C++ program that counts the total number of characters, words and lines in the file.

// // Header files
#include <iostream>
#include <fstream>

#define WORD_SIZE 50

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

    // // read file character by character and count the characters, words and lines
    char ch; // to store character
    int charCounter = 0, wordCounter = 0, lineCounter = 0;
    char word[WORD_SIZE]; // to store word extracted from file

    // // count characters and lines
    while (fin.get(ch)) // run till the end of the file
    {
        charCounter++; // increment charCounter

        if (charCounter == 1)
            lineCounter++;

        // // if new line character occurs
        if (ch == '\n')
            lineCounter++;
    }

    // // clear the end-of-file flag and reset the stream state
    fin.clear();

    // // set the position to the beginning
    fin.seekg(1);

    // // count words
    while (fin >> word) // run till the end of the file
        wordCounter++;

    // // display number of characters,words and lines
    cout << "\nNumber of Characters in File => " << charCounter;
    cout << "\nNumber of Words in File => " << wordCounter;
    cout << "\nNumber of Lines in File => " << lineCounter;

    // // close file
    fin.close();

    cout << endl; // Add new line
    return 0;
}
