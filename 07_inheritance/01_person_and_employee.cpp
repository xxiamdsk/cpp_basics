// // Define a class Person with instance members name and age. Also define member functions setName(), setAge(), getName(), getAge(). Now define class Employee by inheriting Person class. In the Employee class define empid and salary as instance members. Also define setEmpid, setSalary, getEmpid, getSalary.

// // Header files
#include <iostream>

#include <string.h>

// // use namespace
using namespace std;

// // define class Person
class Person
{

public:
    // // static member variable
    static const int MAX_CHARS_NAME = 31;

private:
    // // instance member variables
    char name[MAX_CHARS_NAME];
    int age;

public:
    // // instance member function to set age
    void setAge(int age)
    {
        this->age = age;
    }

    // // instance member function to set name
    void setName(const char *name)
    {
        strcpy(this->name, name);
    }

    // // instance member function to get age
    int getAge() const
    {
        return age;
    }

    // // instance member function to get name
    const char *getName() const
    {
        return name;
    }
};

// // define class Employee by inheriting class Person
class Employee : public Person
{
private:
    // // instance member variables
    int empId;
    double salary;

public:
    // // instance member function to set empId
    void setEmpId(int empId)
    {
        this->empId = empId;
    }

    // // instance member function to set salary
    void setSalary(double salary)
    {
        this->salary = salary;
    }

    // // instance member function to get empId
    int getEmpId() const
    {
        return empId;
    }

    // // instance member function to get salary
    double getSalary()
    {
        return salary;
    }
};

// // Main Function Start
int main()
{

    // // create an instance of Employee class
    Employee e1;

    // // set details
    e1.setName("Aman Kumar");
    e1.setAge(20);
    e1.setEmpId(01);
    e1.setSalary(20000000);

    // // get and display details
    cout << "\nEmployee Name => " << e1.getName();
    cout << "\nEmployee Age => " << e1.getAge();
    cout << "\nEmployee Id => " << e1.getEmpId();
    cout << "\nEmployee Salary => " << e1.getSalary();

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
