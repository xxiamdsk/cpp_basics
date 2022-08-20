/*

Define a class fraction
class Fraction
{
  long numerator;
  long denominator;

  Public:
  fraction (long n=0, long d=0);
};
Overload the following operators as member or friend:
a. Unary ++ (pre and post both)
b. Overload as friend functions: operators << and >>.


Output :-

>>>>>>>> Enter Two Fraction to Perform Operations <<<<<<<<<

>>>>>>>> Enter First Fraction (f1) <<<<<<<<<

Enter Numerator => 6

Enter Denominator => 23

>>>>>>>> Enter Second Fraction (f2) <<<<<<<<<

Enter Numerator => 8

Enter Denominator => 6


First Fraction => 6/23

Second Fraction => 8/6

++f1 => 7/24

f1++ => 8/25

f2 = ++f1

f1 => 9/26
f2 => 9/26

f2 = f1++

f1 => 10/27
f2 => 9/26

*/

// // Header files
#include <iostream>

// // use namespace
using namespace std;

// // define class Fraction
class Fraction
{

private:
    // // instance member variables
    long int numerator;
    long int denominator;

public:
    // // constructors
    Fraction()
    {
        numerator = denominator = 0;
    }

    Fraction(int n)
    {
        numerator = n;
        denominator = 0;
    }

    Fraction(int n, int d)
    {
        numerator = n;
        denominator = d;
    }

    // // instance member function to set fraction
    void setFraction(int n, int d)
    {
        numerator = n;
        denominator = d;
    }

    // // instance member function to display fraction
    void showFraction()
    {
        cout << "\nNumberator => " << numerator;
        cout << "\nDenominator => " << denominator;
    }

    // // overload pre-increment (++a) operator
    Fraction operator++()
    {
        Fraction temp;
        temp.numerator = ++numerator;
        temp.denominator = ++denominator;
        return temp;
    }

    // // overload post-increment (a++) operator
    Fraction operator++(int)
    {
        Fraction temp;
        temp.numerator = numerator++;
        temp.denominator = denominator++;
        return temp;
    }

    // // overload pre-increment (--a) operator
    Fraction operator--()
    {
        Fraction temp;
        temp.numerator = --numerator;
        temp.denominator = --denominator;
        return temp;
    }

    // // overload post-increment (a--) operator
    Fraction operator--(int)
    {
        Fraction temp;
        temp.numerator = numerator--;
        temp.denominator = denominator--;
        return temp;
    }

    // // overload insertion (<<) operator
    friend Fraction operator<<(ostream &, Fraction &);

    // // overload extraction (>>) operator
    friend Fraction operator>>(istream &, Fraction &);
};

// // overload insertion (<<) operator
Fraction operator<<(ostream &temp, Fraction &f)
{
    cout << f.numerator << "/" << f.denominator;
    return f;
}

// // overload extraction (>>) operator
Fraction operator>>(istream &temp, Fraction &f)
{
    cout << "\nEnter Numerator => ";
    cin >> f.numerator;
    cout << "\nEnter Denominator => ";
    cin >> f.denominator;
    return f;
}

// // Main Function Start
int main()
{
    int hr, min, sec;
    Fraction f1, f2; // create objects of Fraction

    // // Get two fraction
    cout << "\n>>>>>>>> Enter Two Fraction to Perform Operations <<<<<<<<<\n";

    // // Get 1st fraction
    cout << "\n>>>>>>>> Enter First Fraction (f1) <<<<<<<<<\n";
    cin >> f1;

    // // Get 2nd fraction
    cout << "\n>>>>>>>> Enter Second Fraction (f2) <<<<<<<<<\n";
    cin >> f2;

    // // display first fraction
    cout << "\n\nFirst Fraction => " << f1;

    // // display second fraction
    cout << "\n\nSecond Fraction => " << f2;

    // // pre-increment (++a) on f1
    f1++;
    cout << "\n\n++f1 => " << f1;

    // // post-increment (a++) on f1
    f1++;
    cout << "\n\nf1++ => " << f1;

    // // pre-increment (++a) on f1 and assign to f2
    f2 = ++f1;
    cout << "\n\nf2 = ++f1\n";
    cout << "\nf1 => " << f1;
    cout << "\nf2 => " << f2;

    // // post-increment (a++) on f1 and assign to f2
    f2 = f1++;
    cout << "\n\nf2 = f1++\n";
    cout << "\nf1 => " << f1;
    cout << "\nf2 => " << f2;

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
