// // Write a C++ program to design a base class Person (name, address, phoneNumber). Derive a class Employee (empId) from Person. Derive a class Manager (designation, departmentName, basicSalary) from Employee. Now, Accept all details of 'n' managers and display manager having highest salary.

// // Header files
#include <iostream>

#include <string.h>
#include <stdlib.h>

// // use namespace
using namespace std;

// // define Macro
#define MAX_MANAGERS 20

// // define class Person
class Person
{

public:
    // // static member variable
    static const int MAX_CHARS_IN_NAME = 31;
    static const int MAX_CHARS_IN_ADDRESS = 21;
    static const int MAX_DIGITS_IN_NUMBER = 11;

private:
    // // instance member variables
    char *name, *address, *phoneNumber;

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

    // // instance member function to set address
    void setAddress(const char *address)
    {
        int length = strlen(address);

        this->address = new char[length > MAX_CHARS_IN_ADDRESS - 1 ? MAX_CHARS_IN_ADDRESS : length + 1];

        if (length > MAX_CHARS_IN_ADDRESS - 1)
        {
            strncpy(this->address, address, MAX_CHARS_IN_ADDRESS - 1);
            this->address[MAX_CHARS_IN_ADDRESS - 1] = 0; // // terminate with null character
        }
        else
        {
            strcpy(this->address, address);
        }
    }

    // // instance member function to get address
    const char *getAddress() const
    {
        return address;
    }

    // // instance member function to set phoneNumber
    void setPhoneNumber(const char *phoneNumber)
    {

        this->phoneNumber = new char[MAX_DIGITS_IN_NUMBER];

        if (strlen(phoneNumber) > MAX_DIGITS_IN_NUMBER - 1)
        {
            strncpy(this->phoneNumber, phoneNumber, MAX_DIGITS_IN_NUMBER - 1);

            this->phoneNumber[MAX_DIGITS_IN_NUMBER - 1] = 0; // // terminate with null character
        }
        else
        {
            strcpy(this->phoneNumber, phoneNumber);
        }
    }

    // // instance member function to get phoneNumber
    const char *getPhoneNumber() const
    {
        return phoneNumber;
    }

    // // instance member function to input and set details
    void setDetails()
    {
        char name[MAX_CHARS_IN_NAME], address[MAX_CHARS_IN_ADDRESS], phoneNumber[MAX_DIGITS_IN_NUMBER];

        cout << "\nEnter Name (MAX_CHARS " << MAX_CHARS_IN_NAME - 1 << ") => ";
        cin.ignore();
        cin.getline(name, MAX_CHARS_IN_NAME);
        setName(name);

        cout << "\nEnter Address (MAX_CHARS " << MAX_CHARS_IN_ADDRESS - 1 << ") => ";
        cin.getline(address, MAX_CHARS_IN_ADDRESS);
        setAddress(address);

        cout << "\nEnter Phone Number (MAX_CHARS " << MAX_DIGITS_IN_NUMBER - 1 << ") => ";
        cin.getline(phoneNumber, MAX_DIGITS_IN_NUMBER);
        setPhoneNumber(phoneNumber);
    }

    // // instance member function to show details
    void showDetails() const
    {
        cout << "\nName => " << name;
        cout << "\nPhone Number => " << phoneNumber;
        cout << "\nAddress => " << address;
    }

    // // destructor
    ~Person()
    {
        delete[] name;
        delete[] address;
        delete[] phoneNumber;
    }
};

// // define class Employee by inheriting class Person
class Employee : public Person
{
private:
    // // instance member variables
    int empId;

public:
    // // instance member function to set empId
    void setEmpId(int empId)
    {
        this->empId = empId;
    }

    // // instance member function to get empId
    int getEmpId() const
    {
        return empId;
    }

    // // instance member function to input and set details
    void setDetails()
    {
        Person::setDetails();
        cout << "\nEnter Employee Id => ";
        cin >> empId;
    }

    // // instance member function to show details
    void showDetails()
    {
        Person::showDetails();
        cout << "\nEmployee Id => " << empId;
    }
};

// // define class Manager by inheriting class Employee
class Manager : public Employee
{
public:
    // // static member variable
    static const int MAX_CHARS_IN_DESIGNATION = 51;
    static const int MAX_CHARS_IN_DEPARTMENT_NAME = 51;

private:
    // // instance member variables
    char *designation, *departmentName;
    double basicSalary;

public:
    // // instance member function to set designation
    void setDesignation(const char *designation)
    {
        int length = strlen(designation);

        this->designation = new char[length > MAX_CHARS_IN_DESIGNATION - 1 ? MAX_CHARS_IN_DESIGNATION : length + 1];

        if (length > MAX_CHARS_IN_DESIGNATION - 1)
        {
            strncpy(this->designation, designation, MAX_CHARS_IN_DESIGNATION - 1);
            this->designation[MAX_CHARS_IN_DESIGNATION - 1] = 0; // // terminate with null character
        }
        else
        {
            strcpy(this->designation, designation);
        }
    }

    // // instance member function to get designation
    const char *getDesignation() const
    {
        return designation;
    }

    // // instance member function to set departmentName
    void setDepartmentName(const char *departmentName)
    {
        int length = strlen(departmentName);

        this->departmentName = new char[length > MAX_CHARS_IN_DEPARTMENT_NAME - 1 ? MAX_CHARS_IN_DEPARTMENT_NAME : length + 1];

        if (length > MAX_CHARS_IN_DEPARTMENT_NAME - 1)
        {
            strncpy(this->departmentName, departmentName, MAX_CHARS_IN_DEPARTMENT_NAME - 1);

            this->departmentName[MAX_CHARS_IN_DEPARTMENT_NAME - 1] = 0; // // terminate with null character
        }
        else
        {
            strcpy(this->departmentName, departmentName);
        }
    }

    // // instance member function to get departmentName
    const char *getDepartmentName() const
    {
        return departmentName;
    }

    // // instance member function to set basicSalary
    void setBasicSalary(double basicSalary)
    {
        this->basicSalary = basicSalary;
    }

    // // instance member function to get basicSalary
    double getBasicSalary() const
    {
        return basicSalary;
    }

    // // instance member function to input and set details
    void setDetails()
    {

        char designation[MAX_CHARS_IN_DESIGNATION], departmentName[MAX_CHARS_IN_DEPARTMENT_NAME];

        Employee::setDetails();

        cout << "\nEnter Designation (MAX_CHARS " << MAX_CHARS_IN_DESIGNATION - 1 << ") => ";
        cin.ignore();
        cin.getline(designation, MAX_CHARS_IN_DESIGNATION);
        setDesignation(designation);

        cout << "\nEnter Department Name (MAX_CHARS " << MAX_CHARS_IN_DEPARTMENT_NAME - 1 << ") => ";
        cin.getline(departmentName, MAX_CHARS_IN_DEPARTMENT_NAME);
        setDepartmentName(departmentName);

        cout << "\nEnter Basic Salary => ";
        cin >> basicSalary;
    }

    // // instance member function to show details
    void showDetails()
    {
        Person::showDetails();
        cout << "\nDesignation => " << designation;
        cout << "\nDepartment Name => " << departmentName;
        cout << "\nBasic Salary => " << basicSalary;
    }

    // // destructor
    ~Manager()
    {
        delete[] designation;
        delete[] departmentName;
    }

    // // friend function to find manager with the highest salary
    friend int highestSalary(Manager[], int);
};

// // friend function to find manager with the highest salary
int highestSalary(Manager managers[], int size)
{
    int highestIndex = 0;

    for (int i = 0; i < size; i++)
    {
        if (managers[i].basicSalary > managers[highestIndex].basicSalary)
            highestIndex = i;
    }

    return highestIndex;
}

// // Main Function Start
int main()
{
    int n;
    cout << "\nHow Many Managers Details You Want to Enter (MAX " << MAX_MANAGERS << " ) => ";
    cin >> n;

    // // invalid input
    if (n < 1 || n > MAX_MANAGERS)
    {
        cout << "\n!!! Invalid Input...";
        exit(0);
    }

    // // create an array of instances of Manager
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

    // // find employee with highest salary
    int highestIndex = highestSalary(managers, n);

    // // show employee with highest salary
    cout << "\n\nManager with the Highest Salary => " << managers[highestIndex].getBasicSalary();
    cout << "\nManager Name => " << managers[highestIndex].getName();

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
