// // Design a class Employee with instance member variables for name, salary, and a static member variable for totalEmployees. Write a member function to display employee details and update the total number of employees.

// // Header files
#include <iostream>

#include <string.h>

// // use namespace
using namespace std;

// // define class Employee
class Employee
{

public:
    // // static member variable
    static const int MAX_CHARS_NAME = 31;

private:
    // // static member variable
    static unsigned int totalEmployees;

    // // instance member variables
    char name[MAX_CHARS_NAME];
    double salary;

public:
    // // static member function to get Total Employees
    static unsigned int getTotalEmployees()
    {
        return totalEmployees;
    }

    // // instance member function to set salary
    void setSalary(double sal)
    {
        salary = sal;
    }

    // // instance member function to get salary
    double getSalary()
    {
        return salary;
    }

    // // instance member function to set name
    void setName(char *nm)
    {
        strcpy(name, nm);
        totalEmployees++;
    }

    // // instance member function to get name
    char *getName(char *nm)
    {
        strcpy(nm, name);
        return nm;
    }
};

// // define and initialize static member variables
unsigned int Employee::totalEmployees = 0;

// // Main Function Start
int main()
{
    Employee emp1; // create object of Employee
    char name[Employee::MAX_CHARS_NAME];
    double sal;

    // // show number of employees
    cout << "\n\nNumber of Employees => " << Employee::getTotalEmployees() << endl;

    // // Get employee's Data
    cout << "\nEnter Employee's Salary => ";
    cin >> sal;

    cout << "\nEnter Employee's Name (MAX_CHARACTERS " << Employee::MAX_CHARS_NAME - 1 << ") => ";
    cin.ignore();
    cin.getline(name, Employee::MAX_CHARS_NAME);

    // // set employees's data
    emp1.setSalary(sal);
    emp1.setName(name);

    // // get and display employees's data
    cout << "\nEmployee's Salary => " << emp1.getSalary();
    cout << "\nEmployee's Name => " << emp1.getName(name);

    // // show number of employees
    cout << "\n\nNumber of Employees => " << Employee::getTotalEmployees() << endl;

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
