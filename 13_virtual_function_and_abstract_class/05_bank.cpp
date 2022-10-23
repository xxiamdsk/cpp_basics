// // Design a class hierarchy for a banking system with a base class Account and two derived classes SavingsAccount and CurrentAccount. Each class should have data members for account balance, account number, and an interest rate (for savings account). Implement pure virtual functions for set account number, deposit, withdraw, and display account details in Account class. Demonstrate the use of these classes by creating objects and performing transactions.

// // Header files
#include <iostream>

#include <string.h>

// // use namespace
using namespace std;

// // define class Account
class Account
{
public:
    // // static member variable
    static const int MAX_CHARS_IN_NAME = 31;
    static const int MAX_DIGITS_IN_ACCOUNT_NUM = 6;

protected:
    // // instance member variables
    char *accountNumber;
    double accountBalance;

public:
    // // constructor
    Account() : accountBalance(0.0) {}

    // // pure virtual functions to be overridden by derived classes
    virtual void setAccountNumber(const char *) = 0;
    virtual void deposit(double) = 0;
    virtual void withdraw(double) = 0;
    virtual void displayAccountDetails() const = 0;
};

// // define class SavingAccount by inheriting an abstract class Account
class SavingAccount : public Account
{
private:
    // // static member variable
    static float rateOfInterest;

public:
    // // override base class setAccountNumber function
    void setAccountNumber(const char *accountNumber) override
    {
        int length = strlen(accountNumber);

        this->accountNumber = new char[length > MAX_DIGITS_IN_ACCOUNT_NUM - 1 ? MAX_DIGITS_IN_ACCOUNT_NUM : length + 1];

        if (length > MAX_DIGITS_IN_ACCOUNT_NUM - 1)
        {
            strncpy(this->accountNumber, accountNumber, MAX_DIGITS_IN_ACCOUNT_NUM - 1);
            this->accountNumber[MAX_DIGITS_IN_ACCOUNT_NUM - 1] = 0; // // terminate with null character
        }
        else
        {
            strcpy(this->accountNumber, accountNumber);
        }
    }

    // // override base class deposit function
    void deposit(double amount) override
    {
        // // invalid amount
        if (amount < 0)
        {
            cout << "\n!!! Given Amount is Invalid...";
            return;
        }

        // // add amount in accountBalance
        accountBalance += amount;
        cout << endl
             << amount << "Rs. "
             << " Have Deposited Successfully...";
    }

    // // override base class withdraw function
    void withdraw(double amount) override
    {
        // // invalid amount
        if (amount < 0)
        {
            cout << "\n!!! Given Amount is Invalid...";
            return;
        }
        else if (accountBalance < amount) // // Insufficient Balance
        {
            cout << "\n!!! Insufficient Balance...";
            return;
        }

        // // add amount in accountBalance
        accountBalance -= amount;
        cout << endl
             << amount << "Rs."
             << " Have Withdrawal Successfully...";
    }

    // // override base class displayAccountDetails function
    void displayAccountDetails() const override
    {
        cout << "\nAccount Number => " << accountNumber;
        cout << "\nAccount Balance => " << accountBalance;
        cout << "\nRate of Interest => " << rateOfInterest;
    }

    // // static member function to set rate of interest
    void setRateOfInterest(float roi)
    {
        rateOfInterest = roi;
    }

    // // static member function to get rate of interest
    float getRateOfInterest()
    {
        return rateOfInterest;
    }
};

// // define static member variable rateOfInterest
float SavingAccount::rateOfInterest;

// // define class CurrentAccount by inheriting an abstract class Account
class CurrentAccount : public Account
{
public:
    // // override base class setAccountNumber function
    void setAccountNumber(const char *accountNumber) override
    {
        int length = strlen(accountNumber);

        this->accountNumber = new char[length > MAX_DIGITS_IN_ACCOUNT_NUM - 1 ? MAX_DIGITS_IN_ACCOUNT_NUM : length + 1];

        if (length > MAX_DIGITS_IN_ACCOUNT_NUM - 1)
        {
            strncpy(this->accountNumber, accountNumber, MAX_DIGITS_IN_ACCOUNT_NUM - 1);
            this->accountNumber[MAX_DIGITS_IN_ACCOUNT_NUM - 1] = 0; // // terminate with null character
        }
        else
        {
            strcpy(this->accountNumber, accountNumber);
        }
    }

    // // override base class deposit function
    void deposit(double amount) override
    {
        // // invalid amount
        if (amount < 0)
        {
            cout << "\n!!! Given Amount is Invalid...";
            return;
        }

        // // add amount in accountBalance
        accountBalance += amount;
        cout << endl
             << amount << "Rs. "
             << " Have Deposited Successfully...";
    }

    // // override base class withdraw function
    void withdraw(double amount) override
    {
        // // invalid amount
        if (amount < 0)
        {
            cout << "\n!!! Given Amount is Invalid...";
            return;
        }
        else if (accountBalance < amount) // // Insufficient Balance
        {
            cout << "\n!!! Insufficient Balance...";
            return;
        }

        // // add amount in accountBalance
        accountBalance -= amount;
        cout << endl
             << amount << "Rs."
             << " Have Withdrawal Successfully...";
    }

    // // override base class displayAccountDetails function
    void displayAccountDetails() const override
    {
        cout << "\nAccount Number => " << accountNumber;
        cout << "\nAccount Balance => " << accountBalance;
    }
};

// // Main Function Start
int main()
{
    SavingAccount sa1;
    sa1.setAccountNumber("27038");
    sa1.setRateOfInterest(2.5);
    cout << "\n\n>>>>>>> Saving Account Details Before Any Transaction <<<<<<<<";
    sa1.displayAccountDetails();
    cout << "\n\n>>>>>>> Transactions <<<<<<<<";
    sa1.deposit(570);
    sa1.withdraw(5);
    cout << "\n\n>>>>>>> Saving Account Details After Transactions <<<<<<<<";
    sa1.displayAccountDetails();

    CurrentAccount ca1;
    ca1.setAccountNumber("272091");
    cout << "\n\n>>>>>>> Current Account Details Before Any Transaction <<<<<<<<";
    ca1.displayAccountDetails();
    cout << "\n\n>>>>>>> Transactions <<<<<<<<";
    ca1.deposit(100);
    ca1.withdraw(85);
    cout << "\n\n>>>>>>> Current Account Details After Transactions <<<<<<<<";
    ca1.displayAccountDetails();

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
