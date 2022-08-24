// // Overload subscript operator [] that will be useful when we want to check for an index out of bound.

/*

In C++, the use of const after the parenthesis of a member function indicates that the function is a const member function. This means that the function does not modify the state of the object on which it is called. The const qualifier is part of the method's signature and is used to enforce the const-correctness of your code.

Here's an explanation of how const is used in the context of member functions:

Const Member Function:

If a member function is declared as const, it means that the function promises not to modify the state of the object on which it is called. This is particularly useful when you have a constant object or a pointer/reference to a constant object.
Const After Parenthesis:

When you see const after the parenthesis, like in void someFunction() const, it indicates that the member function is a const member function.

class MyClass {

public:
    void modifyState() {
        // This function can modify the state of the object
    }

    void readState() const {
        // This function is a const member function and cannot modify the state
    }
};


*/

// // Header files
#include <iostream>

#include <iomanip>

// // use namespace
using namespace std;

// // define class Array
class Array
{

private:
    // // instance member variables
    int a[5], size = 5;

public:
    // // constructors
    Array() {}

    // // instance member function to input matrix
    void inputArray()
    {
        for (int i = 0; i < size; i++)
        {
            cin >> a[i];
        }
    }

    // // instance member function to show matrix
    void showArray()
    {
        for (int i = 0; i < size; i++)
        {
            cout << a[i];
        }
    }

    // // instance member function to set element
    void setElement(int index, int value)
    {
        if (index >= 0 && index < size)
            a[index] = value;
        else
            cout << "\nInvalid Index...";
    }

    // // instance member function to get element
    int getElement(int index, int value)
    {
        if (index >= 0 && index < size)
            a[index] = value;
        else
            cout << "\nInvalid Index...";
    }

    // // overload subscript ([]) operator for reading element
    int operator[](int index) const
    {
        if (index < 0 || index >= size)
            cout << "\n!!! Invalid Index, Array Index Out of Bound...\n";

        return a[index];
    }

    // // overload subscript ([]) operator for writing element
    int &operator[](int index)
    {
        if (index < 0 || index >= size)
            cout << "\n!!! Invalid Index, Array Index Out of Bound...\n";

        return a[index];
    }
};

// // Main Function Start
int main()
{

    Array arr1; // // create object of Array class

    // // input elements of array
    cout << "\nEnter 5 Elements of Array => ";
    for (int i = 0; i < 5; i++)
        cin >> arr1[i];

    // // show elements of array
    cout << "\n>>>>>>>>>> Elements of Array Are <<<<<<<<<<<<\n";
    for (int i = 0; i < 5; i++)
        cout << arr1[i] << " ";

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
