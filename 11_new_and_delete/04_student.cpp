// // Define a class representing a student with attributes like name and roll number. Dynamically create an array of student objects based on user input for the number of students. Allow the user to input details for each student, display their information, and then use delete to free the memory.

// // Header files
#include <iostream>

#include <string.h>
#include <stdlib.h>

// // use namespace
using namespace std;

#define MAX_STUDENTS 10

// // define class Student
class Student
{
public:
    // // static member variable
    static const int MAX_CHARS_NAME = 31;

private:
    // // instance member variables
    char name[MAX_CHARS_NAME];
    int roll;

public:
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
    int numOfStudents;
    cout << "\nHow Many Students Data You Want to Enter => ";
    cin >> numOfStudents;

    // // invalid input
    if (numOfStudents < 1 || numOfStudents > MAX_STUDENTS)
    {
        cout << "\n!!! Invalid Input..." << endl;
        exit(0);
    }

    Student *students = new Student[numOfStudents]; // dynamically create array of objects of Student
    char name[Student::MAX_CHARS_NAME];
    int roll;

    // // Get Students Data
    cout << "\n>>>>>>>>>> Enter Data of " << numOfStudents << " Students <<<<<<<<<<<<<\n";

    for (int i = 0; i < numOfStudents; i++)
    {

        cout << "\n>>>>>>>>> Enter Data of Student-" << i + 1 << " <<<<<<<<<<<<<\n";
        cout << "\nEnter Student's Roll Number => ";
        cin >> roll;

        cout << "\nEnter Student's Name (MAX_CHARACTERS " << Student::MAX_CHARS_NAME - 1 << ") => ";
        cin.ignore();
        cin.getline(name, Student::MAX_CHARS_NAME);

        // // set students's data
        students[i].setRoll(roll);
        students[i].setName(name);
    }

    // // get and display Students data
    cout << "\n>>>>>>>>>> Data of " << numOfStudents << " Students <<<<<<<<<<<<<\n";
    for (int i = 0; i < numOfStudents; i++)
    {
        cout << "\n>>>>>>>>> Data of Student-" << i + 1 << " <<<<<<<<<<<<<\n";
        cout << "\nStudent's Roll Number => " << students[i].getRoll();
        cout << "\nStudent's Name => " << students[i].getName(name) << endl;
    }

    // // deallocate memory
    delete[] students;

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
