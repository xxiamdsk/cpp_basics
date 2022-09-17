/*

Create Product and Item class and convert Product type to Item type using casting operator.

Example :-

int main()
{
  Item i1;
  Product p1;
  p1.setProductId(15);
  i1=p1;
  return 0;
}

*/

// // Header files
#include <iostream>

// // use namespace
using namespace std;

// // define class Item
class Item
{

private:
    // // instance member variables
    int itemId;

public:
    // // constructors
    Item()
    {
        itemId = 0;
    }

    Item(int id)
    {
        itemId = id;
    }

    // // instance member function to set product id
    void setItemId(int id)
    {
        itemId = id;
    }

    // // instance member function to display get product id
    int getItemId()
    {
        return itemId;
    }
};

// // define class Product
class Product
{

private:
    // // instance member variables
    int productId;

public:
    // // constructors
    Product()
    {
        productId = 0;
    }

    Product(int id)
    {
        productId = id;
    }

    // // instance member function to set product id
    void setProductId(int id)
    {
        productId = id;
    }

    // // instance member function to display get product id
    int getProductId()
    {
        return productId;
    }

    // // overload typecasting operator to convert Product to Item
    operator Item()
    {
        return productId;
    }
};

// // Main Function Start
int main()
{
    Item i1;
    Product p1;

    p1.setProductId(15);

    // // Product to Item using type casting operator
    i1 = p1;

    cout
        << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
