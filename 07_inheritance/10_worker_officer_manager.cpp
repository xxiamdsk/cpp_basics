// // Consider two base classes worker(int code, char name, float salary), officer(float DA, HRA) class manager(float TA(is 10% of salary), grossSalary) is derived from both base classes. Write necessary member functions.

// // Header files
#include <iostream>

#include <string.h>
#include <stdlib.h>

// // use namespace
using namespace std;

// // define Macro
#define MAX_MANAGERS 20

// // define class Worker
class Worker
{

public:
    // // static member variable
    static const int MAX_CHARS_IN_NAME = 31;

private:
    // // instance member variables
    char *name;
    int code;
    double salary;

public:
    // // instance member function to set name
    void setName(const char *name)
    {
        int length = strlen(name);

        this->name = new char[length > MAX_CHARS_IN_NAME - 1 ? MAX_CHARS_IN_NAME : length + 1];

        if (length > MAX_CHARS_IN_NAME - 1)
        {
            strncpy(this->name, name, MAX_CHARS_IN_NAME - 1);
            this->name[MAX_CHARS_IN_NAME - 1] = 0; // // terminate with null character
        }
        else
        {
            strcpy(this->name, name);
        }
    }

    // // instance member function to get name
    const char *getName() const
    {
        return name;
    }

    // // instance member function to set code
    void setCode(int code)
    {
        this->code = code;
    }

    // // instance member function to get code
    int getCode() const
    {
        return code;
    }

    // // instance member function to set salary
    void setSalary(double salary)
    {
        this->salary = salary;
    }

    // // instance member function to get salary
    double getSalary() const
    {
        return salary;
    }

    // // instance member function to input and set details
    void setDetails()
    {
        char name[MAX_CHARS_IN_NAME];

        cout << "\nEnter Name (MAX_CHARS " << MAX_CHARS_IN_NAME - 1 << ") => ";
        cin.ignore();
        cin.getline(name, MAX_CHARS_IN_NAME);
        setName(name);

        cout << "\nEnter Code => ";
        cin >> code;

        cout << "\nEnter Salary => ";
        cin >> salary;
    }

    // // instance member function to show details
    void showDetails() const
    {
        cout << "\nName => " << name;
        cout << "\nCode => " << code;
        cout << "\nSalary => " << salary;
    }

    // // destructor
    ~Worker()
    {
        delete[] name;
    }
};

// // define class Officer
class Officer
{

private:
    // // instance member variables
    double DA, HRA;

public:
    // // instance member function to set DA
    void setDA(double DA)
    {
        this->DA = DA;
    }

    // // instance member function to get DA
    double getDA()
    {
        return DA;
    }

    // // instance member function to set HRA
    void setHRA(double HRA)
    {
        this->HRA = HRA;
    }

    // // instance member function to get HRA
    double getHRA()
    {
        return HRA;
    }

    // // instance member function to input and set details
    void setDetails()
    {
        cout << "\nEnter DA => ";
        cin >> DA;

        cout << "\nEnter HRA => ";
        cin >> HRA;
    }

    // // instance member function to show details
    void showDetails() const
    {
        cout << "\nDA => " << DA;
        cout << "\nHRA => " << HRA;
    }
};

// // define class FullTime by inheriting class Worker and class Officer
class Manager : public Worker, public Officer
{

private:
    // // instance member variables
    double TA, grossSalary;

public:
    // // instance member function to input and set details
    void setDetails()
    {
        Worker::setDetails();
        Officer::setDetails();
    }

    // // instance member function to show details
    void showDetails()
    {
        Worker::showDetails();
        Officer::showDetails();
        cout << "\nTA => " << calculateTA();
        cout << "\nGross Salary => " << calculateGrossSalary();
    }

    // // instance member function to calculate grossSalary
    double calculateGrossSalary()
    {
        return grossSalary = calculateTA() + getSalary() + getDA() + getHRA();
    }

    // // instance member function to calculate TA
    double calculateTA()
    {
        return TA = 10.0 / 100 * getSalary();
    }
};

// // Main Function Start
int main()
{
    int n;
    cout << "\nHow Many Managers Details You Want to Enter (MAX " << MAX_MANAGERS << ") => ";
    cin >> n;

    // // invalid input
    if (n < 1 || n > MAX_MANAGERS)
    {
        cout << "\n!!! Invalid Input...";
        exit(0);
    }

    // // create an array of pointers to instances of Manager
    Manager managers[n];

    // // get details
    cout << "\n>>>>>>>>> Enter Details of " << n << " Managers <<<<<<<<<<<\n";
    for (int i = 0; i < n; i++)
    {
        cout << "\n>>>>>>>> Enter Details of Manager-" << i + 1 << " <<<<<<<<<<\n";
        managers[i].setDetails();
    }

    // // show details
    cout << "\n>>>>>>>>> Details of " << n << " Managers <<<<<<<<<<<\n";
    for (int i = 0; i < n; i++)
    {
        cout << "\n\n>>>>>>>> Details of Manager-" << i + 1 << " <<<<<<<<<<";
        managers[i].showDetails();
    }

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
