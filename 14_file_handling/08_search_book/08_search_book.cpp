// // In the above program add a new feature to search a book in file using book id. if book record found then display it else display book not found.

// // Header files
#include <iostream>
#include <fstream>
#include <cstring>

// // use namespace
using namespace std;

#define MAX_BOOKS 50

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
    double bookPrice;

public:
    // // constructors
    Book()
    {
        bookId = -1;
        bookPrice = -1;
        bookTitle[0] = 0;
    }

    Book(int bookId, const char *bookTitle, double bookPrice)
    {
        this->bookId = bookId;
        strcpy(this->bookTitle, bookTitle);
        this->bookPrice = bookPrice;
    }

    // // instance member function to set bookId
    void setBookId(int bookId)
    {
        if (bookId < 0) // if bookId is negative make it positive
            bookId = -bookId;

        this->bookId = bookId;
    }

    // // instance member function to get bookId
    unsigned int getBookId()
    {
        return bookId;
    }

    // // instance member function to set bookTitle
    void setBookTitle(char *bookTitle)
    {
        strcpy(this->bookTitle, bookTitle);
    }

    // // instance member function to get bookTitle
    const char *getBookTitle()
    {
        return bookTitle;
    }

    // // instance member function to set bookPrice
    double setBookPrice(double bookPrice)
    {
        this->bookPrice = bookPrice;
    }

    // // instance member function to get bookPrice
    double getBookPrice()
    {
        return bookPrice;
    }

    // // instance member function to input and set book data
    void inputBookData()
    {
        int bookId;
        char bookTitle[Book::MAX_CHARS_IN_TITLE];
        double bookPrice;

        // // Get book id
        cout << "\nEnter Book Id => ";
        cin >> bookId;

        // // Get book title
        cout << "\nEnter Book Title (MAX_CHARS " << Book::MAX_CHARS_IN_TITLE - 1 << ") => ";
        cin.ignore();
        cin.getline(bookTitle, Book::MAX_CHARS_IN_TITLE);

        // // Get book price
        cout << "\nEnter Book Price => ";
        cin >> bookPrice;

        // // set data
        setBookId(bookId);
        setBookTitle(bookTitle);
        setBookPrice(bookPrice);
    }

    // // instance member function to show book data
    void showBookData()
    {
        cout << "\nBook Id => " << bookId;
        cout << "\nBook Title => " << bookTitle;
        cout << "\nBook Price => " << bookPrice;
    }

    // // instance member function to store book record
    int storeBookData()
    {
        if (bookId == -1 || bookPrice == -1)
            return 0; // book data not stored

        // // specify file name
        const char *fileName = "books_data.dat";

        // create an instance of ofstream for writing in a file
        ofstream fout;

        // // open file in binary mode for writing and append data
        fout.open(fileName, ios::app | ios::binary);

        // // check if the file is successfully opened
        if (!fout.is_open())
            return 0; // book data not stored

        fout.write((char *)this, sizeof(*this));

        // // close file
        fout.close();

        return 1; // book data successfully stored
    }
};

    // // function to fetch books data from a fike and show
    void fetchAndShowBookData()
    {
        // // specify file name
        const char *fileName = "books_data.dat";

        // create an instance of ifstream for reading from a file
        ifstream fin;

        // // open file in binary mode for reading
        fin.open(fileName, ios::in | ios::binary);

        // // check if the file is successfully opened
        if (!fin.is_open())
        {
            cout << "\nError: Unable to Open File...";
            return;
        }

        // // create an instance of Book to store fetched data
        Book tempBook;

        fin.read((char *)&tempBook, sizeof(tempBook));

        while (!fin.eof())
        {
            cout << endl;
            tempBook.showBookData();
            cout << endl;
            fin.read((char *)&tempBook, sizeof(tempBook));
        }

        // // close file
        fin.close();
    }

    // // function to search a book from file using book id
    void searchBookById(int bookId)
    {
        // // specify file name
        const char *fileName = "books_data.dat";

        // create an instance of ifstream for reading from a file
        ifstream fin;

        // // open file in binary mode for reading
        fin.open(fileName, ios::in | ios::binary);

        // // check if the file is successfully opened
        if (!fin.is_open())
        {
            cout << "\nError: Unable to Open File...";
            return;
        }

        // // create an instance of Book to store fetched data
        Book tempBook;
        int found = 0;

        fin.read((char *)&tempBook, sizeof(tempBook));

        while (!fin.eof())
        {
            if (tempBook.getBookId() == bookId)
            {
                cout << "\n>>>>>>>>> Book Found <<<<<<<<" << endl;
                tempBook.showBookData();
                found = 1;
                break;
            }

            fin.read((char *)&tempBook, sizeof(tempBook));
        }

        // // close file
        fin.close();

        if (!found)
            cout << "\nThere is No Book Data Stored having Book Id " << bookId << endl;
    }

    // // Main Function Start
    int main()
    {
        int n;

        cout << "\nHow Many Books' Data You Want to Store (MAX " << MAX_BOOKS << ") => ";
        cin >> n;

        // // invalid input
        if (n < 1 || n > MAX_BOOKS)
        {
            cout << "\n!!! Invalid Input..." << endl;
            return 0;
        }

        // // dynamically allocate memory for n objects of Book
        Book *books = new Book[n];

        // // input, set and store books data
        cout << "\n>>>>>>>>>> Enter Data of " << n << " Books <<<<<<<<<<<<<" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "\n>>>>>>>>>>> Enter Data of Book " << i + 1 << " <<<<<<<<<<<<" << endl;

            // // input and set book data
            books[i].inputBookData();

            // // store book data
            if (!(books[i].storeBookData()))
            {
                cout << "\n!!! Book Data Not Stored..." << endl;
                return 0;
            }
        }

        // // books data stored successfully
        cout << "\nBooks Data Successfully Stored..." << endl;

        // // read and show books data
        cout << "\n>>>>>>>>>> Books Data Stored In File <<<<<<<<<<<<<<";
        fetchAndShowBookData();

        // // get book id to search a book in file
        int bookId;

        cout << "\nEnter Book Id to Search A Book => ";
        cin >> bookId;

        // // search book
        searchBookById(bookId);

        cout << endl; // Add new line
        cin.ignore();
        return 0;
    }
    // // Main Function End
