// // Define a class student and write a program to enter student details using constructor and define member function to display all the details.

// // Header files
#include <iostream>

#include <string.h>

// // use namespace
using namespace std;

// // define class Student
class Student
{
public:
    // // static member variables
    static const unsigned int MAX_CHARS_NAME = 31;

private:
    // // instance member variables
    char name[MAX_CHARS_NAME];
    int roll;

public:
    // // constructors
    Student() {}

    Student(char *nm)
    {
        strcpy(name, nm);
    }

    Student(int r)
    {
        roll = r;
    }

    Student(char *nm, int r)
    {
        strcpy(name, nm);
        roll = r;
    }

    Student(int r, char *nm)
    {
        strcpy(name, nm);
        roll = r;
    }

    // // overloaded instance member function to set student's data
    void setData(char *nm, int r)
    {
        strcpy(name, nm);
        roll = r;
    }

    // // overloaded instance member function to set student's data
    void setData(int r, char *nm)
    {
        strcpy(name, nm);
        roll = r;
    }

    // // instance member function to show student's data
    void showData()
    {
        cout << "Name => " << name << ", Roll no. => " << roll;
    }

    // // instance member function to set roll
    void setRoll(int r)
    {
        roll = r;
    }

    // // instance member function to set name
    void setName(char *nm)
    {
        strcpy(name, nm);
    }

    // // instance member function to get roll
    int getRoll()
    {
        return roll;
    }

    // // instance member function to get name
    char *getName(char *nm)
    {
        strcpy(nm, name);
        return nm;
    }
};

// // Main Function Start
int main()
{
    char name[Student::MAX_CHARS_NAME];
    int roll;

    // // Get student's Data
    cout << "\nEnter Student's Roll Number => ";
    cin >> roll;

    cout << "\nEnter Student's Name (MAX_CHARACTERS " << Student::MAX_CHARS_NAME - 1 << ") => ";
    cin.ignore();
    cin.getline(name, Student::MAX_CHARS_NAME);

    Student s1(name, roll); // create object of Student

    // // display students's data
    cout << "\n>>>>>>>>>>>> Student's Data <<<<<<<<<<<\n"
         << endl;
    s1.showData();

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
