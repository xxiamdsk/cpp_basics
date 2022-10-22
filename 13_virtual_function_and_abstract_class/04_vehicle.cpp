// // Create an abstract class Vehicle with a pure virtual function start() and another pure virtual function stop(). Derive two classes Car and Motorcycle from Vehicle and implement the start() and stop() functions in each class. Create objects of both classes and call the start() and stop() functions to demonstrate the use of pure virtual functions.

// // Header files
#include <iostream>

// // use namespace
using namespace std;

// // define an abstract class Vehicle
class Vehicle
{
public:
    // // pure virtual functions to be overridden by child classes
    virtual void start() = 0;
    virtual void stop() = 0;
};

// // define class Car by inheriting class abstract class Vehicle
class Car : public Vehicle
{
public:
    // // override base class start function
    void start() override
    {
        cout << "\nCar Started...";
    }

    // // override base class stop function
    void stop() override
    {
        cout << "\nCar Stopped...";
    }
};

// // define class MotorCycle by inheriting abstract class Vehicle
class MotorCycle : public Vehicle
{
public:
    // // override base class start function
    void start() override
    {
        cout << "\nMotorCycle Started...";
    }

    // // override base class stop function
    void stop() override
    {
        cout << "\nMotorCycle Stopped...";
    }
};

int main()
{
    // // create an instance of Car
    Car c1;
    c1.start();
    c1.stop();

    // // create an instance of MotorCycle
    MotorCycle m1;
    m1.start();
    m1.stop();

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
