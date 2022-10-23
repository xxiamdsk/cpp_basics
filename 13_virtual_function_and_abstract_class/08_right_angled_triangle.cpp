// // Create a base class called proof. Use this class to store three int type values that could be used to prove that triangle is a right angled triangle. Create a class compute which will determine whether a triangle is a right angled triangle. Using these classes, design a program that will accept dimensions of a triangle, and display the result. (Summary: Prove that triangle is a right angled triangle using pythagoras theorem).

// // Header files
#include <iostream>

#include <algorithm>

// // use namespace
using namespace std;

// // define class Proof
class Proof
{
protected:
    // // instance member variables
    int side1, side2, side3;

public:
    // // constructor
    Proof(int a, int b, int c) : side1(a), side2(b), side3(c) {}

    // // display sides
    void displaySides() const
    {
        cout << "\nSide 1 => " << side1;
        cout << "\nSide 2 => " << side2;
        cout << "\nSide 3 => " << side3;
    }
};

// // define class Compute by inheriting class Proof
class Compute : public Proof
{
public:
    // // inheriting the constructor of the base class
    using Proof::Proof;

    // // function to check if the triangle is right-angled using Pythagorean theorem
    bool isRightAngled() const
    {
        // sort sides in ascending order
        int sides[3] = {side1, side2, side3};
        std::sort(sides, sides + 3);

        // Check Pythagorean theorem
        return (sides[0] * sides[0] + sides[1] * sides[1] == sides[2] * sides[2]);
    }
};

int main()
{
    int sideA, sideB, sideC;

    // accept dimensions of the triangle
    cout << "\nEnter the Dimensions of A Triangle => ";
    cin >> sideA >> sideB >> sideC;

    // // create an instance of Compute
    Compute triangleInstance(sideA, sideB, sideC);

    // display the sides
    triangleInstance.displaySides();

    // check and display if the triangle is right-angled
    if (triangleInstance.isRightAngled())
    {
        cout << "\nThe triangle is a Right-Angled Triangle (Satisfies the Pythagorean Theorem)...\n";
    }
    else
    {
        cout << "\nThe Triangle is Not a Right-Angled Triangle.\n";
    }

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
