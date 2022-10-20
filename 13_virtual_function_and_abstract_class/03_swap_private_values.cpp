// // Using the concept of pointers, write a function that swaps the private data values of two objects of the same class type.

// // Header files
#include <iostream>

// // use namespace
using namespace std;

// // define class Integer
class Integer
{
protected:
    // // instance member variable
    int data;

public:
    // // constructors
    Integer() {}

    Integer(int data) : data(data) {}

    // // instance member function to set data
    void setData(int data)
    {
        this->data = data;
    }

    // // instance member function to get data
    int getData() const
    {
        return data;
    }

    // // instance member function to swap values of private data members of two objects
    void swap(Integer *obj2)
    {
        // // Check if the pointer is valid (not nullptr)
        if (obj2)
        {
            int temp = data;
            data = obj2->data;
            obj2->data = temp;
        }
        else
        {
            cout << "\n!!! Invalid Pointer provided for Swapping." << endl;
        }
    }
};

int main()
{
    // // create instances of Integer
    Integer i1(2), i2(6);

    cout << "\n>>>>>>> Before Swapping <<<<<<<<";
    cout << "\ni1.data => " << i1.getData();
    cout << "\ni2.data => " << i2.getData();

    // // swap value of private data members
    i1.swap(&i2);

    cout << "\n\n>>>>>>> After Swapping <<<<<<<<";
    cout << "\ni1.data => " << i1.getData();
    cout << "\ni2.data => " << i2.getData();

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
