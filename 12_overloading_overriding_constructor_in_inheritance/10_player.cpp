// // Create a C++ class for player objects with the attributes: player no., name, number of matches and number of goals done in each match. The number of matches varies for each player. Write a parameterized constructor which initializes player no., name, number of matches and creates an array for number of goals and number of matches dynamically.

// // Header files
#include <iostream>
#include <string.h>

// // use namespace
using namespace std;

class Player
{
public:
    // // static member variable
    static const int MAX_CHARS_IN_NAME = 31;

private:
    // // instance member variables
    char *playerName;
    int playerNo, numOfMatches, *goals, *matches;

public:
    // constructor
    Player(int playerNo, const char *playerName, int numOfMatches)
    {
        int length = strlen(playerName);

        this->playerName = new char[length > MAX_CHARS_IN_NAME - 1 ? MAX_CHARS_IN_NAME : length + 1];

        if (length > MAX_CHARS_IN_NAME - 1)
        {
            strncpy(this->playerName, playerName, MAX_CHARS_IN_NAME - 1);
            this->playerName[MAX_CHARS_IN_NAME - 1] = 0; // // terminate with null character
        }
        else
        {
            strcpy(this->playerName, playerName);
        }

        // // set playerNo and numOfMatches
        this->playerNo = playerNo;
        this->numOfMatches = numOfMatches;

        // dynamically allocate memory for arrays
        goals = new int[numOfMatches];
        matches = new int[numOfMatches];

        // initialize arrays to zero
        for (int i = 0; i < numOfMatches; ++i)
        {
            goals[i] = 0;
            matches[i] = i + 1; // assume matches are numbered from 1 to numMatches
        }
    }

    // instance member function to set goals for a specific match
    void setGoals(int matchNumber, int numOfGoals)
    {
        if (matchNumber >= 1 && matchNumber <= numOfMatches)
        {
            goals[matchNumber - 1] = numOfGoals;
        }
        else
        {
            cout << "\n!!! Invalid Match Number...";
        }
    }

    // Function to display player information
    void displayPlayerInfo() const
    {
        cout << "\nPlayer Number => " << playerNo;
        cout << "\nPlayer Name =>  " << playerName;
        cout << "\nNumber of Matches => " << numOfMatches;

        // display goals for each match
        cout << "\n>>>> Goals in Each Match <<<<<";
        for (int i = 0; i < numOfMatches; ++i)
        {
            cout << "\nMatch " << matches[i] << " => " << goals[i] << " Goals";
        }
    }

    // destructor to free dynamically allocated memory
    ~Player()
    {
        delete[] goals;
        delete[] matches;
    }
};

int main()
{
    // create an instance of Player
    Player player1(100, "Aman", 5);

    // set goals for each match
    player1.setGoals(1, 2);
    player1.setGoals(2, 1);
    player1.setGoals(3, 3);
    player1.setGoals(4, 0);
    player1.setGoals(5, 2);

    // Display player information
    player1.displayPlayerInfo();

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
