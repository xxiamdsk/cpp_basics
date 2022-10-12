// // Define a base class Animal having member function sound(). Define another derived class from Animal class named Dog. You need to override the sound function of the base class in the derived class.

// // Header files
#include <iostream>

#include <string.h>

// // use namespace
using namespace std;

// // define class Animal
class Animal
{
public:
    // // instance member function to produce sound
    void sound()
    {
        cout << "\nSound of Animal...";
    }
};

// // define class Dog by inheriting class Animal
class Dog : public Animal
{
public:
    // // instance member function to produce sound
    void sound()
    {
        cout << "\nSound of Dog...";
    }
};

// // Main Function Start
int main()
{
    // // instance of Animal
    Animal a1;
    a1.sound();

    //  // instance of Dog
    Dog d1;
    d1.sound();

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
