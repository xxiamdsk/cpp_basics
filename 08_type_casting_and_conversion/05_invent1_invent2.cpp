/*

Create two classes Invent1 and Invent2 and also add necessary constructors in it. Now add functions to support Invent1 to float and Invent1 to Invent2 type.

Example :-

int main()
{
  Invent2 s1=(4);
  Invent2 d1;
  float x;
  x=s1;
  d1=s1;
  return 0;
}

*/

// // Header files
#include <iostream>

// // use namespace
using namespace std;

// // define class Invent1
class Invent1
{

private:
    // // instance member variables
    int id;

public:
    // // constructors
    Invent1()
    {
        id = 0;
    }

    Invent1(int id)
    {
        this->id = id;
    }

    // // instance member function to set id
    void setId(int id)
    {
        id = id;
    }

    // // instance member function to display get id
    int getId()
    {
        return id;
    }

    // // overload typecasting operator to convert Complex to float
    operator float()
    {
        return id;
    }
};

// // define class Invent2
class Invent2
{

private:
    // // instance member variables
    int id;

public:
    // // constructors
    Invent2()
    {
        id = 0;
    }

    Invent2(int id)
    {
        this->id = id;
    }

    Invent2(Invent1 i1)
    {
        this->id = i1.getId();
    }

    // // instance member function to set id
    void setId(int id)
    {
        id = id;
    }

    // // instance member function to display get id
    int getItemId()
    {
        return id;
    }
};

// // Main Function Start
int main()
{

    Invent1 s1 = (4);
    Invent2 d1;
    float x;

    // // Invent1 to float
    x = s1;

    // // Invent1 to Invent2
    d1 = s1;

    cout
        << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
