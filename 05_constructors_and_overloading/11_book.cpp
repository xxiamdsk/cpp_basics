// // Design a class Book with instance member variables for book title and book bookId Implement a parameterized constructor to initialize these variables during object creation.

// // Header files
#include <iostream>
#include <string.h>

// // use namespace
using namespace std;

// // define class Book
class Book
{
public:
    // // static member variable
    static const unsigned int MAX_CHARS_IN_TITLE = 31;

private:
    // // instance member variables
    unsigned int bookId;
    char bookTitle[MAX_CHARS_IN_TITLE];

public:
    // // constructors
    Book() {}

    Book(char *tl)
    {
        strcpy(bookTitle, tl);
    }

    Book(int i)
    {
        bookId = i;
    }

    Book(char *tl, int i)
    {
        strcpy(bookTitle, tl);
        bookId = i;
    }

    Book(int i, char *tl)
    {
        strcpy(bookTitle, tl);
        bookId = i;
    }

    // // instance member function to set Book Id
    void setBookId(int bookId)
    {
        if (bookId < 0) // if bookId is negative make it positive
            bookId = -bookId;

        bookId = bookId;
    }

    // // instance member function to get Book Id
    unsigned int getBookId()
    {
        return bookId;
    }

    // // instance member function to set Book Title
    void setBookTitle(char *bookTitle)
    {
        strcpy(this->bookTitle, bookTitle);
    }

    // // instance member function to get Book Title
    char *getBookTitle(char *bookTitle)
    {
        strcpy(bookTitle, this->bookTitle);
        return bookTitle;
    }
};

// // Main Function Start
int main()
{
    int bookId;
    char bookTitle[Book::MAX_CHARS_IN_TITLE];

    // // Get book book id
    cout << "\nEnter Book Id => ";
    cin >> bookId;

    // // Get book book title
    cout << "\nEnter Book Title (MAX_CHARS " << Book::MAX_CHARS_IN_TITLE - 1 << ") => ";
    cin.ignore();
    cin.getline(bookTitle, Book::MAX_CHARS_IN_TITLE);

    Book b1(bookTitle, bookId); // create object of Book

    cout << "\nBook Id => " << b1.getBookId();
    cout << "\nBook Title => " << b1.getBookTitle(bookTitle);

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
