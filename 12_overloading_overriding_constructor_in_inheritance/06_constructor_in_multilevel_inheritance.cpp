// // C++ Program to illustrate the use of Constructors in multilevel inheritance of your choice.

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

// // define class Student by Inheriting class Person
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

// // define class Player by Inheriting class Student
class Player : public Student
{
public:
    // // static member variable
    static const int MAX_CHARS_IN_GAME = 31;

private:
    char *game;

public:
    // // constructors
    Player() : Student()
    {
        game = new char[1];
        game[0] = '\0'; // // terminate with null char
        cout << "\nDefault Constructor of Class Player";
    }

    Player(const char *name, int roll, const char *game) : Student(name, roll)
    {
        int length = strlen(game);

        this->game = new char[length > MAX_CHARS_IN_GAME - 1 ? MAX_CHARS_IN_GAME : length + 1];

        if (length > MAX_CHARS_IN_GAME - 1)
        {
            strncpy(this->game, game, MAX_CHARS_IN_GAME - 1);
            this->game[MAX_CHARS_IN_GAME - 1] = 0; // // terminate with null character
        }
        else
        {
            strcpy(this->game, game);
        }
        cout << "\nParametrized Constructor of Class Player";
    }

    // // instance member function to set name
    void setGame(const char *name)
    {
        int length = strlen(game);

        this->game = new char[length > MAX_CHARS_IN_GAME - 1 ? MAX_CHARS_IN_GAME : length + 1];

        if (length > MAX_CHARS_IN_GAME - 1)
        {
            strncpy(this->game, game, MAX_CHARS_IN_GAME - 1);
            this->game[MAX_CHARS_IN_GAME - 1] = 0; // // terminate with null character
        }
        else
        {
            strcpy(this->game, game);
        }
    }

    // // instance member function to get game
    const char *getGame() const
    {
        return game;
    }

    // // destructor
    ~Player()
    {
        delete[] game;
    }
};

// // Main Function Start
int main()
{
    // // instance of Player
    Player p1("Aman", 7022, "Cricket");

    cout << "\nName => " << p1.getName();
    cout << "\nRoll => " << p1.getRoll();
    cout << "\nGame => " << p1.getGame();

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
