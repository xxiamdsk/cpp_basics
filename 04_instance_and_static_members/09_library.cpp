// // Create a class Library with a static member variable totalBooks and a static member function getTotalBooks. Track the number of available books in the library.

// // Header files
#include <iostream>

#include <string.h>

// // use namespace
using namespace std;

// // define class Library
class Library
{
public:
    // // static member variable
    static const unsigned int MAX_CHARS_IN_TITLE = 31;

private:
    // // static member variables
    static unsigned int totalBooks;

    // // instance member variables
    unsigned int bookId;
    char bookTitle[MAX_CHARS_IN_TITLE];

public:
    // // static member function to get Total Books
    static unsigned int getTotalBooks()
    {
        return totalBooks;
    }

    // // instance member function to set Book Id
    void setBookId(int id)
    {
        if (id < 0) // if id is negative make it positive
            id = -id;

        bookId = id;
        totalBooks++;
    }

    // // instance member function to get Book Id
    unsigned int getBookId()
    {
        return bookId;
    }

    // // instance member function to set Book Title
    void setBookTitle(char *title)
    {
        strcpy(bookTitle, title);
    }

    // // instance member function to get Book Title
    char *getBookTitle(char *title)
    {
        strcpy(title, bookTitle);
        return title;
    }
};

// // define and initialize static member variables
unsigned int Library::totalBooks = 0;

// // Main Function Start
int main()
{
    Library b1; // create object of Library
    int id;
    char title[Library::MAX_CHARS_IN_TITLE];

    // // show total books in library
    cout << "\nTotal Books In Library => " << Library::getTotalBooks() << endl;

    // // Get book id
    cout << "\nEnter Book Id => ";
    cin >> id;

    // // Get book title
    cout << "\nEnter Book Title (MAX_CHARS " << Library::MAX_CHARS_IN_TITLE - 1 << ") => ";
    cin.ignore();
    cin.getline(title, Library::MAX_CHARS_IN_TITLE);

    // // set book details
    b1.setBookId(id);
    b1.setBookTitle(title);

    // // show total books in library
    cout << "\nTotal Books In Library => " << Library::getTotalBooks() << endl;

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
