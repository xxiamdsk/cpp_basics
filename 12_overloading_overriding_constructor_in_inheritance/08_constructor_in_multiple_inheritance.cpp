// // C++ Program to illustrate the use of Constructors in multiple inheritance of your choice.

// // Header files
#include <iostream>

#include <string.h>

// // use namespace
using namespace std;

// define class Person
class Person
{
public:
    // // static member variable
    static const int MAX_CHARS_IN_NAME = 31;

private:
    char *name;

public:
    // // constructors
    Person()
    {
        name = new char[1];
        name[0] = '\0'; // // terminate with null char
        cout << "\nDefault Constructor of Class Person";
    }

    Person(const char *name)
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

        cout << "\nParametrized Constructor of Class Person";
    }

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

    // // destructor
    ~Person()
    {
        delete[] name;
    }
};

// define class Employee by inheriting class Person
class Employee : public Person
{
protected:
    int empId;

public:
    // // constructors
    Employee() : Person()
    {
        empId = 0;
        cout << "\nDefault Constructor of Class Person";
    }

    Employee(const char *&name, int empId) : Person(name)
    {
        if (empId < 0) // // if empId is negative, then make it positive
            empId = -empId;

        this->empId = empId;

        cout << "\nDefault Constructor of Class Employee";
    }

    // // instance member function to set empId
    void setEmpId(int empId)
    {
        if (empId < 0) // // if empId is negative, then make it positive
            empId = -empId;

        this->empId = empId;
    }

    // // instance member function to get empId
    int getEmpId() const
    {
        return empId;
    }
};

// // define class Student by inheriting class Person
class Student : public Person
{
private:
    int roll;

public:
    // // constructors
    Student() : Person()
    {
        roll = 0;
        cout << "\nDefault Constructor of Class Student";
    }

    Student(const char *name, int roll) : Person(name)
    {
        if (roll < 0) // if roll is negative, then make it positive
            roll = -roll;

        this->roll = roll;
        cout << "\nParametrized Constructor of Class Student";
    }

    // // instance member function to set roll
    void setRoll(int roll)
    {
        if (roll < 0) // if roll is negative, then make it positive
            roll = -roll;

        this->roll = roll;
    }

    // // instance member function to get roll
    int getRoll() const
    {
        return roll;
    }
};

// define class EmployeeStudent by inheriting class Employee and Student
class EmployeeStudent : public Employee, public Student
{
public:
    EmployeeStudent() : Employee(), Student()
    {
        cout << "\nDefault Constructor of Class EmployeeStudent";
    }

    // // constructors
    EmployeeStudent(const char *name, int empId, int roll)
        : Employee(name, empId), Student(name, roll)
    {
        cout << "\nParameterized Constructor of Class EmployeeStudent";
    }

    // Function to display details
    void displayDetails()
    {
        cout << "\nName => " << Student::getName();
        cout << "\nEmployee Id => " << getEmpId();
        cout << "\nStudent Roll =>  " << getRoll();
    }
};

// // Main Function Start
int main()
{

    // // create an instance of EmployeeStudent
    EmployeeStudent empStu1("Aman", 234, 103);

    // // display details using function in EmployeeStudent class
    empStu1.displayDetails();

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
