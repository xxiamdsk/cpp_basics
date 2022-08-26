// // Create a student class and overload new and delete operators as a member function of the class.

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

    // // overload new operator
    void *operator new(size_t size)
    {
        cout << "\n\nOverloaded new operator called with size: " << size << " bytes" << endl;
        return ::operator new(size);
    }

    // // overload new[] operator
    void *operator new[](size_t size)
    {
        cout << "\n\nOverloaded new operator called with size: " << size << " bytes" << endl;
        return ::operator new(size);
    }

    // Overload delete operator
    void operator delete(void *ptr)
    {
        cout << "\n\nOverloaded delete operator called." << endl;
        ::operator delete(ptr);
    }

    // Overload delete[] operator
    void operator delete[](void *ptr)
    {
        cout << "\n\nOverloaded delete operator called." << endl;
        ::operator delete(ptr);
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

    Student *s1;
    s1 = new Student(roll, name); // create object of Student dynamically

    // // display students's data
    cout << "\n>>>>>>>>>>>> Student's Data <<<<<<<<<<<\n"
         << endl;
    s1->showData();

    // // deallocate memory of object s1
    delete s1;

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
