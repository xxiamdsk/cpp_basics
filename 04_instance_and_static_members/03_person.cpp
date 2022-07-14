// // Create a class named Person with instance member variables for name, age Implement functions to set and display the details of a person.

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
    Person p1; // create object of Person
    char name[Person::MAX_CHARS_NAME];
    int age;

    // // Get person's Data
    cout << "\nEnter Person's Age => ";
    cin >> age;

    cout << "\nEnter Person's Name (MAX_CHARACTERS " << Person::MAX_CHARS_NAME - 1 << ") => ";
    cin.ignore();
    cin.getline(name, Person::MAX_CHARS_NAME);

    // // set persons's data
    p1.setAge(age);
    p1.setName(name);

    // // get and display persons's data
    cout << "\nPerson's Age => " << p1.getAge();
    cout << "\nPerson's Name => " << p1.getName(name);

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
