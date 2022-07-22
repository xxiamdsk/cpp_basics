// // Define a class Product with instance member variables for Product Name, price, and a static member variable for totalProducts. Implement member functions for displaying product details and updating the total number of products.

// // Header files
#include <iostream>

#include <string.h>

// // use namespace
using namespace std;

// // define class Product
class Product
{

public:
    // // static member variable
    static const int MAX_CHARS_PRD_NAME = 51;

private:
    // // static member variable
    static unsigned int totalProducts;

    // // instance member variables
    char productName[MAX_CHARS_PRD_NAME];
    double price;

public:
    // // static member function to get Total Products
    static unsigned int getTotalProducts()
    {
        return totalProducts;
    }

    // // instance member function to set price
    void setPrice(double pri)
    {
        price = pri;
    }

    // // instance member function to get price
    double getPrice()
    {
        return price;
    }

    // // instance member function to set productName
    void setName(char *nm)
    {
        strcpy(productName, nm);
        totalProducts++;
    }

    // // instance member function to get productName
    char *getName(char *nm)
    {
        strcpy(nm, productName);
        return nm;
    }
};

// // define and initialize static member variables
unsigned int Product::totalProducts = 0;

// // Main Function Start
int main()
{
    Product p1; // create object of Product
    char productName[Product::MAX_CHARS_PRD_NAME];
    double pri;

    // // show number of products
    cout << "\n\nNumber of Products => " << Product::getTotalProducts() << endl;

    // // Get product's Data
    cout << "\nEnter Product Price => ";
    cin >> pri;

    cout << "\nEnter Product Name (MAX_CHARACTERS " << Product::MAX_CHARS_PRD_NAME - 1 << ") => ";
    cin.ignore();
    cin.getline(productName, Product::MAX_CHARS_PRD_NAME);

    // // set product data
    p1.setPrice(pri);
    p1.setName(productName);

    // // get and display products's data
    cout << "\nProduct Price => " << p1.getPrice();
    cout << "\nProduct Name => " << p1.getName(productName);

    // // show number of products
    cout << "\n\nNumber of Products => " << Product::getTotalProducts() << endl;

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
