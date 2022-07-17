// // Create a class BankAccount with instance member variables balance, and ownerName. Implement member functions for deposit and withdrawal operations.

// // Header files
#include <iostream>

#include <string.h>
#include <stdlib.h>

#define MAX_CHARS_NAME 31

// // use namespace
using namespace std;

// // define class BankAccount
class BankAccount
{

private:
    // // instance member variables
    char name[MAX_CHARS_NAME];
    double balance = 0;

public:
    // // instance member function to set name
    void setName(char *nm)
    {
        strcpy(name, nm);
    }

    // // instance member function to get name
    char *getName(char *nm)
    {
        strcpy(nm, name);
        return nm;
    }

    // / instance member function to deposit money
    int deposit(double m)
    {
        if (m < 1)
            return 0; // Invalid (not deposited)

        balance += m;

        return 1; // successfully deposited
    }

    // // instance member function to withdraw money
    int withdraw(double m)
    {
        if (m < 1 || balance < m)
            return 0; // Invalid (not withdrawal)

        balance -= m;

        return 1; // successfully withdrawal
    }

    // // instance member function to get balance in account
    double getBalance()
    {
        return balance;
    }
};

// // Main Function Start
int main()
{
    BankAccount b1; // create object of BankAccount
    char name[MAX_CHARS_NAME];
    double money;

    // // Get person's name for creating bank account
    cout << "\nEnter BankAccount's Name (MAX_CHARACTERS " << MAX_CHARS_NAME - 1 << ") => ";
    cin.getline(name, MAX_CHARS_NAME);

    cout << name << endl;

    // // set persons's name
    b1.setName(name);

    // // display initial balance in account
    cout << "\nInitial Balance in Your Account => " << b1.getBalance();

    // // Get money for deposit
    cout << "\n\nEnter, How Much Money You Want to Deposit => ";
    cin >> money;

    // // Invalid Amount
    if (money <= 0)
    {
        cout << "\n!!! Money not Deposited, Invalid Amount For Money Deposit...";
        exit(0);
    }

    // // deposit
    b1.deposit(money);

    // // Money Successfully Deposited
    cout << "\n\n!!! Money Successfully Deposited...";

    // // display balance in account after deposit
    cout << "\n\nBalance in Your Account => " << b1.getBalance();

    // // Get money for deposit
    cout << "\n\nEnter, How Much Money You Want to Withdraw => ";
    cin >> money;

    // // Invalid Amount
    if (money <= 0)
    {
        cout << "\n!!! Withdrawal Failed , Invalid Amount For Money  Withdrawal...";
        exit(0);
    }

    // // withdraw
    if (!b1.withdraw(money))
    {
        cout << "\n!!! Withdrawal Failed, Insufficient Balance in Your Account...";

        // // display balance in account after deposit
        cout << "\n\nBalance in Your Account => " << b1.getBalance();
    }
    else
    {
        // // Money Successfully Deposited
        cout << "\n\n!!! Money Successfully Deposited...";

        // // display balance in account after deposit
        cout << "\n\nBalance in Your Account => " << b1.getBalance();
    }

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
