// // Define a class Animal with a pure virtual function makeSound(). Derive three classes Dog, Cat, and Bird from Animal and implement the makeSound() function in each derived class. Create objects of each class and make them produce sounds.

// // Header files
#include <iostream>

// // use namespace
using namespace std;

// // define an abstract class Animal
class Animal
{
public:
    // // pure virtual function to be overridden by derived classes
    virtual void makeSound() = 0;
};

// // define class Dog by inheriting an abstract class Animal
class Dog : public Animal
{
public:
    // // override base class function makeSound
    void makeSound() override
    {
        cout << "\nSound of Dog...";
    }
};

// // define class Cat by inheriting an abstract class Animal
class Cat : public Animal
{
public:
    // // override base class function makeSound
    void makeSound() override
    {
        cout << "\nSound of Cat...";
    }
};

// // define class Bird by inheriting an abstract class Animal
class Bird : public Animal
{
public:
    // // override base class function makeSound
    void makeSound() override
    {
        cout << "\nSound of Bird...";
    }
};

// // Main Function Start
int main()
{
    // // instance of Dog
    Dog d1;
    d1.makeSound();

    // // instance of Cat
    Cat c1;
    c1.makeSound();

    // // instance of Bird
    Bird b1;
    b1.makeSound();

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
