// // Write class declarations and member function definitions for a C++ base class to represent an Employee (empId, name). Derive two classes as Fulltime (dailyRate, numberOfDays, salary) and Parttime (numberOfHours, hourlyRate, salary).

// // Header files
#include <iostream>

#include <string.h>
#include <stdlib.h>

// // use namespace
using namespace std;

// // define Macro
#define MAX_EMPS 20

// // define class Employee
class Employee
{

public:
    // // static member variable
    static const int MAX_CHARS_IN_NAME = 31;

private:
    // // instance member variables
    char *name;
    int empId;

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
    virtual void setDetails()
    {
        char name[MAX_CHARS_IN_NAME];

        cout << "\nEnter Name (MAX_CHARS " << MAX_CHARS_IN_NAME - 1 << ") => ";
        cin.ignore();
        cin.getline(name, MAX_CHARS_IN_NAME);
        setName(name);

        cout << "\nEnter Employee Id => ";
        cin >> empId;
    }

    // // instance member function to show details
    virtual void showDetails() const
    {
        cout << "\nName => " << name;
        cout << "\nEmployee Id => " << empId;
    }

    // // friend function to search employee by id
    friend int searchByEmpid(Employee **, int, int);

    // // destructor
    ~Employee()
    {
        delete[] name;
    }
};

// // define class FullTime by inheriting class Employee
class FullTime : public Employee
{
private:
    // // instance member variables
    int numberOfDays, dailyRate, salary;

public:
    // // static member variable
    static const char status[];

    // // instance member function to set numberOfDays
    void setNumberOfDays(int numberOfDays)
    {
        this->numberOfDays = numberOfDays;
    }

    // // instance member function to get numberOfDays
    int getNumberOfDays() const
    {
        return numberOfDays;
    }

    // // instance member function to set dailyRate
    void setDailyRate(int dailyRate)
    {
        this->dailyRate = dailyRate;
    }

    // // instance member function to get dailyRate
    int getDailyRate() const
    {
        return dailyRate;
    }

    // // instance member function to calculate salary
    int calculateSalary()
    {
        return this->salary = dailyRate * numberOfDays;
    }

    // // instance member function to input and set details
    void setDetails()
    {
        Employee::setDetails();

        cout << "\nEnter Daily Rate => ";
        cin >> dailyRate;

        cout << "\nEnter Number of Days => ";
        cin >> numberOfDays;
    }

    // // instance member function to show details
    void showDetails()
    {
        Employee::showDetails();
        cout << "\nDaily Rate => " << dailyRate;
        cout << "\nNumber of Days => " << numberOfDays;
        cout << "\nSalary => " << calculateSalary();
        cout << "\nStatus => " << status;
    }
};

// // define static member variables of class FullTime
const char FullTime::status[] = "Full Time";

// // define class PartTime by inheriting class Employee
class PartTime : public Employee
{
private:
    // // instance member variables
    int numberOfHours, hourlyRate, salary;

public:
    // // static member variable
    static const char status[];

    // // instance member function to set numberOfHours
    void setNumberOfHours(int numberOfHours)
    {
        this->numberOfHours = numberOfHours;
    }

    // // instance member function to get numberOfHours
    int getNumberOfHours() const
    {
        return numberOfHours;
    }

    // // instance member function to set hourlyRate
    void setHourlyRate(int hourlyRate)
    {
        this->hourlyRate = hourlyRate;
    }

    // // instance member function to get hourlyRate
    int getHourlyRate() const
    {
        return hourlyRate;
    }

    // // instance member function to calculate salary
    int calculateSalary()
    {
        return this->salary = hourlyRate * numberOfHours;
    }

    // // instance member function to input and set details
    void setDetails()
    {
        Employee::setDetails();

        cout << "\nEnter Hourly Rate => ";
        cin >> hourlyRate;

        cout << "\nEnter Number of Hours => ";
        cin >> numberOfHours;
    }

    // // instance member function to show details
    void showDetails()
    {
        Employee::showDetails();
        cout << "\nHourly Rate => " << hourlyRate;
        cout << "\nNumber of Hours => " << numberOfHours;
        cout << "\nSalary => " << calculateSalary();
        cout << "\nStatus => " << status;
    }
};
// // define static member variables of class PartTime
const char PartTime::status[] = "Part Time";

// // friend function to search employee by id
int searchByEmpid(Employee **ptr, int size, int empId)
{

    for (int i = 0; i < size; i++)
    {
        if (ptr[i]->empId == empId)
            return i;
    }

    return -1;
}

// // Main Function Start
int main()
{

    int n, empId, indexOfFoundEmp;
    cout << "\nHow Many Employees Details You Want to Enter (MAX " << MAX_EMPS << ") => ";
    cin >> n;

    // // invalid input
    if (n < 1 || n > MAX_EMPS)
    {
        cout << "\n!!! Invalid Input...";
        exit(0);
    }

    // // create an array of pointers to instances of Employees
    Employee *emps[n] = {nullptr};

    // // get details
    cout << "\n>>>>>>>>> Enter Details of " << n << " Employees <<<<<<<<<<<\n";
    for (int i = 0; i < n; i++)
    {
        cout << "\n>>>>>>>> Enter Details of Employee-" << i + 1 << " <<<<<<<<<<\n";

        char empType;

        while (true)
        {
            cout << "\nEnter Employee Type Full Time or Part Time (Press F for Full Time or P for Part Time) => ";
            cin.ignore();
            cin >> empType;

            if (empType == 'F' || empType == 'f' || empType == 'P' || empType == 'p')
                break;
            else
            {
                cout << "\n!!!Invalid Employee Type, Please Enter Valid Type. Try Again...\n";
            }
        }

        if (empType == 'F' || empType == 'f')
            emps[i] = new FullTime;
        else
            emps[i] = new PartTime;

        emps[i]->setDetails();
    }

    // // show details
    cout << "\n>>>>>>>>> Details of " << n << " Full Time Employees <<<<<<<<<<<\n";
    for (int i = 0; i < n; i++)
    {
        cout << "\n\n>>>>>>>> Details of Employee-" << i + 1 << " <<<<<<<<<<";
        emps[i]->showDetails();
    }

    // // get employee id to search an employee
    cout << "\n\nEnter Employee Id to Search An Employee => ";
    cin >> empId;

    // // search employee by its id
    indexOfFoundEmp = searchByEmpid(emps, n, empId);

    // // show if employee found
    if (indexOfFoundEmp == -1)
        cout << "\n\nThere is No Employee Having Id " << empId;
    else
    {
        cout << "\n\n>>>>>>>>>> Employee Found <<<<<<<<<<<\n";
        emps[indexOfFoundEmp]->showDetails();
    }

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
