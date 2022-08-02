// // Create a class Person with instance member variables for name and age. Implement a constructor that initializes these variables.

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
    // // constructors
    Person() {}

    Person(int a)
    {
        age = a;
    }

    Person(char *nm)
    {
        strcpy(name, nm);
    }

    Person(char *nm, int a)
    {
        strcpy(name, nm);
        age = a;
    }

    Person(int a, char *nm)
    {
        strcpy(name, nm);
        age = a;
    }

    // // instance member function to set age
    void setAge(int a)
    {
        age = a;
    }

    // // instance member function to set name
    void setName(char *nm)
    {
        strcpy(name, nm);
    }

    // // instance member function to get age
    int getAge()
    {
        return age;
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
    char name[Person::MAX_CHARS_NAME];
    int age;

    // // Get person's Data
    cout << "\nEnter Person's Age => ";
    cin >> age;

    cout << "\nEnter Person's Name (MAX_CHARACTERS " << Person::MAX_CHARS_NAME - 1 << ") => ";
    cin.ignore();
    cin.getline(name, Person::MAX_CHARS_NAME);

    Person p1(name, age); // create object of Person

    // // get and display persons's data
    cout << "\nPerson's Age => " << p1.getAge();
    cout << "\nPerson's Name => " << p1.getName(name);

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
