// // Write a C++ program to implement the following class hierarchy : Student(roll, name) and StudentExam(derived from Student) containing Marks of 6 subjects and StudentResult(derived from StudentExam) with data member percentage. Define appropriate functions to accept and display details.Create 'n' objects of the StudentResult class and display the marklist.

// // Header files
#include <iostream>

#include <string.h>
#include <stdlib.h>

// // use namespace
using namespace std;

// // define Macro
#define MAX_STUDENTS 20

// // define class Student
class Student
{

public:
    // // static member variable
    static const int MAX_CHARS_IN_NAME = 31;

private:
    // // instance member variables
    char *name;
    int roll;

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
    void setRoll(int roll)
    {
        this->roll = roll;
    }

    // // instance member function to get roll
    int getRoll() const
    {
        return roll;
    }

    // // instance member function to input and set details
    virtual void setDetails()
    {
        char name[MAX_CHARS_IN_NAME];

        cout << "\nEnter Name (MAX_CHARS " << MAX_CHARS_IN_NAME - 1 << ") => ";
        cin.ignore();
        cin.getline(name, MAX_CHARS_IN_NAME);
        setName(name);

        cout << "\nEnter Roll Number => ";
        cin >> roll;
    }

    // // instance member function to show details
    virtual void showDetails() const
    {
        cout << "\nName => " << name;
        cout << "\nRoll Number => " << roll;
    }

    // // destructor
    ~Student()
    {
        delete[] name;
    }
};

// // define class FullTime by inheriting class Student
class StudentExam : public Student
{

public:
    // // static member variable
    static const int MAX_SUBS = 6;
    static const int TOTAL_MARKS = 6 * 100;

private:
    // // instance member variables
    double marks[MAX_SUBS];
    double totalObtainedMarks;

public:
    // // instance member function to input and set marks
    void
    inputAndSetMarks()
    {
        for (int i = 0; i < MAX_SUBS; i++)
        {
            cout << "\nEnter Marks of Subject-" << i + 1 << " (Out of 100) => ";
            cin >> marks[i];
        }
    }

    // // instance member function to show marks
    void showMarks() const
    {
        for (int i = 0; i < MAX_SUBS; i++)
        {
            cout << "\nMarks of Subject-" << i + 1 << " => " << marks[i];
        }
    }

    // // instance member function to calculate total obtained marks
    double calculateTotalObtainedMarks()
    {
        totalObtainedMarks = 0;
        for (int i = 0; i < MAX_SUBS; i++)
        {
            totalObtainedMarks += marks[i];
        }

        return totalObtainedMarks;
    }

    // // instance member function to input and set details
    void setDetails()
    {
        Student::setDetails();
        inputAndSetMarks();
    }

    // // instance member function to show details
    void showDetails()
    {
        Student::showDetails();
        showMarks();
    }
};

// // define class FullTime by inheriting class StudentExam
class StudentResult : public StudentExam
{

private:
    // // instance member variables
    double percent;

public:
    // // instance member function to calculate percent
    double calculatePercent()
    {
        percent = calculateTotalObtainedMarks() / TOTAL_MARKS * 100;
        return percent;
    }
};

// // Main Function Start
int main()
{
    int n;
    cout << "\nHow Many Students Details You Want to Enter (MAX " << MAX_STUDENTS << ") => ";
    cin >> n;

    // // invalid input
    if (n < 1 || n > MAX_STUDENTS)
    {
        cout << "\n!!! Invalid Input...";
        exit(0);
    }

    // // create an array of pointers to instances of Students
    StudentResult students[n];

    // // get details
    cout << "\n>>>>>>>>> Enter Details of " << n << " Students <<<<<<<<<<<\n";
    for (int i = 0; i < n; i++)
    {
        cout << "\n>>>>>>>> Enter Details of Student-" << i + 1 << " <<<<<<<<<<\n";
        students[i].setDetails();
    }

    // // show details
    cout << "\n>>>>>>>>> Details of " << n << " Students <<<<<<<<<<<\n";
    for (int i = 0; i < n; i++)
    {
        cout << "\n\n>>>>>>>> Details of Student-" << i + 1 << " <<<<<<<<<<";
        students[i].showDetails();
        cout << "\nTotal Percentage => " << students[i].calculatePercent();
        cout << "\nTotal Marks => " << students[i].calculateTotalObtainedMarks();
    }

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
