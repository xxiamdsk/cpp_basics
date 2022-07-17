// // Define a class Student with instance member variables for name, rollNumber, and an array marks of size 5 to store subject-wise marks. Write a member function to calculate the average marks.

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
    static const unsigned int MAX_SUBS = 5;

private:
    // // instance member variables
    char name[MAX_CHARS_NAME];
    int roll;
    int marks[MAX_SUBS];
    double avgOfMarks = -1;

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

    // // instance member function to set Marks
    void setMarks(int *m)
    {
        for (int i = 0; i < MAX_SUBS; i++)
            marks[i] = m[i];
    }

    // // instance member function to calculate average of marks
    double calculateAvgofMarks()
    {
        double sum = 0;

        for (int i = 0; i < MAX_SUBS; i++)
            sum += marks[i];

        avgOfMarks = sum / MAX_SUBS;
    }

    // // instance member function to get average of marks
    double getAvgofMarks()
    {
        return avgOfMarks;
    }
};

// // Main Function Start
int main()
{
    Student s1; // create object of Student
    char name[Student::MAX_CHARS_NAME];
    int roll;
    int marks[Student::MAX_SUBS];

    // // Get student's Data
    cout << "\nEnter Student's Roll Number => ";
    cin >> roll;

    cout << "\nEnter Student's Name (MAX_CHARACTERS " << Student::MAX_CHARS_NAME - 1 << ") => ";
    cin.ignore();
    cin.getline(name, Student::MAX_CHARS_NAME);

    cout << "\nEnter Student's Marks in " << Student::MAX_SUBS << " Subjects => ";
    for (int i = 0; i < Student::MAX_SUBS; i++)
        cin >> marks[i];

    // // set students's data
    s1.setRoll(roll);
    s1.setName(name);
    s1.setMarks(marks);

    // // get and display students's data
    cout << "\nStudent's Roll Number => " << s1.getRoll();
    cout << "\nStudent's Name => " << s1.getName(name);
    cout << "\nAverage Marks => " << s1.calculateAvgofMarks();

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
