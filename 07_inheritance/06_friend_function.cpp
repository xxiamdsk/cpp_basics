// // Write a C++ program to demonstrate how a common friend function can be used to exchange the private values of two classes. (Use call by reference method).

// // Header files
#include <iostream>

// // use namespace
using namespace std;

// // forward declaration of class B
class B;

// // define class A
class A
{

private:
    // // instance member variables
    int a;

public:
    // // instance member function to set data
    void setData(int a)
    {
        this->a = a;
    }

    // // instance member function to get data
    int getData() const
    {
        return a;
    }

    // // friend function to exchange or swap values of private data members of class A and class B
    friend void exchange(A &, B &);
};

// // define class B
class B
{

private:
    // // instance member variables
    int b;

public:
    // // instance member function to set data
    void setData(int b)
    {
        this->b = b;
    }

    // // instance member function to get data
    int getData() const
    {
        return b;
    }

    // // friend function to exchange or swap values of private data members of class A and class B
    friend void exchange(A &, B &);
};

// // friend function to exchange or swap values of private data members of class A and class B
void exchange(A &objA, B &objB)
{
    A objTemp;
    objTemp.a = objA.a;
    objA.a = objB.b;
    objB.b = objTemp.a;
}

// // Main Function Start
int main()
{

    // // create an instance of class A
    A objA;

    // // create an instance of class B
    B objB;

    // // set data
    objA.setData(100);
    objB.setData(1000);

    // // display values before data exchange
    cout << "\n>>>>>>>>> Values Before Data Exchange <<<<<<<<<<<\n";
    cout << "\nobjA.a => " << objA.getData();
    cout << "\nobjB.b => " << objB.getData();

    // // exchange values
    exchange(objA, objB);

    // // display values before after exchange
    cout << "\n\n>>>>>>>>> Values After Data Exchange <<<<<<<<<<<\n";
    cout << "\nobjA.a => " << objA.getData();
    cout << "\nobjB.b => " << objB.getData();

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
