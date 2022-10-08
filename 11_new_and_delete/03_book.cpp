// // Implement a program that involves a class Book with attributes bookId and price. Dynamically create an object of Book and use it.

// // Header files
#include <iostream>

#include <string.h>

// // use namespace
using namespace std;

// // define class Book
class Book
{
private:
    // // instance member variables
    unsigned int bookId;
    double price;

public:
    // // constructors
    Book() {}

    Book(int bookId, double price)
    {
        this->bookId = bookId;
        this->price = price;
    }

    // // instance member function to set Book Id
    void setBookId(int bookId)
    {
        if (bookId < 0) // if bookId is negative make it positive
            bookId = -bookId;

        this->bookId = bookId;
    }

    // // instance member function to get Book Id
    unsigned int getBookId()
    {
        return bookId;
    }

    // // instance member function to set Price
    void setPrice(double price)
    {
        if (price < 0) // if price is negative make it positive
            price = -price;

        this->price = price;
    }

    // // instance member function to get price
    double getPrice()
    {
        return price;
    }
};

// // Main Function Start
int main()
{
    int bookId;
    double price;

    // // Get book book bookId
    cout << "\nEnter Book Id => ";
    cin >> bookId;

    // // Get book Price
    cout << "\nEnter Book Price => ";
    cin >> price;

    Book *b1 = new Book(bookId, price); // create an object of Book dynamically

    cout << "\nBook Id => " << b1->getBookId();
    cout << "\nBook Title => " << b1->getPrice();

    // // deallocate memory
    delete b1;

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
