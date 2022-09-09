// In a bank, different customers have savings account. Some customers may have taken a loan from the bank. So bank always maintain information about bank depositors and borrowers. Design a Base class Customer (name, phoneNumber). Derive a class Depositor(accountNumber, balance) from Customer. Again, derive a class Borrower (loanNumber, loanAmount) from Depositor. Write necessary member functions to read and display the details of ‘n’ customers.

// // Header files
#include <iostream>

#include <string.h>
#include <stdlib.h>

// // use namespace
using namespace std;

// // define Macro
#define MAX_CUSTOMERS 20

// // define class Customer
class Customer
{

public:
    // // static member variable
    static const int MAX_CHARS_IN_NAME = 31;
    static const int MAX_DIGITS_IN_NUMBER = 11;

private:
    // // instance member variables
    char *name, *phoneNumber;

public:
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

    // // instance member function to set phoneNumber
    void setPhoneNumber(const char *phoneNumber)
    {

        this->phoneNumber = new char[MAX_DIGITS_IN_NUMBER];

        if (strlen(phoneNumber) > MAX_DIGITS_IN_NUMBER - 1)
        {
            strncpy(this->phoneNumber, phoneNumber, MAX_DIGITS_IN_NUMBER - 1);

            this->phoneNumber[MAX_DIGITS_IN_NUMBER - 1] = 0; // // terminate with null character
        }
        else
        {
            strcpy(this->phoneNumber, phoneNumber);
        }
    }

    // // instance member function to get phoneNumber
    const char *getPhoneNumber() const
    {
        return phoneNumber;
    }

    // // instance member function to input and set details
    void setDetails()
    {
        char name[MAX_CHARS_IN_NAME], phoneNumber[MAX_DIGITS_IN_NUMBER];

        cout << "\nEnter Name (MAX_CHARS " << MAX_CHARS_IN_NAME - 1 << ") => ";
        cin.ignore();
        cin.getline(name, MAX_CHARS_IN_NAME);
        setName(name);

        cout << "\nEnter Phone Number (MAX_CHARS " << MAX_DIGITS_IN_NUMBER - 1 << ") => ";
        cin.getline(phoneNumber, MAX_DIGITS_IN_NUMBER);
        setPhoneNumber(phoneNumber);
    }

    // // instance member function to show details
    void showDetails() const
    {
        cout << "\nName => " << name;
        cout << "\nPhone Number => " << phoneNumber;
    }

    // // destructor
    ~Customer()
    {
        delete[] name;
        delete[] phoneNumber;
    }
};

// // define class Employee by inheriting class Customer
class Depositor : public Customer
{
public:
    // // static member variable
    static const int MAX_DIGITS_IN_ACC_NUMBER = 6;

private:
    // // instance member variables
    char *accountNumber;
    double balance;

public:
    // // instance member function to set accountNumber
    void setAccountNumber(const char *accountNumber)
    {
        int length = strlen(accountNumber);

        this->accountNumber = new char[length > MAX_DIGITS_IN_ACC_NUMBER - 1 ? MAX_CHARS_IN_NAME : length + 1];

        if (length > MAX_DIGITS_IN_ACC_NUMBER - 1)
        {
            strncpy(this->accountNumber, accountNumber, MAX_DIGITS_IN_ACC_NUMBER - 1);
            this->accountNumber[MAX_DIGITS_IN_ACC_NUMBER - 1] = 0; // // terminate with null character
        }
        else
        {
            strcpy(this->accountNumber, accountNumber);
        }
    }

    // // instance member function to get accountNumber
    const char *getAccountNumber()
    {
        return accountNumber;
    }

    // // instance member function to set balance
    void setBalance(double balance)
    {
        this->balance = balance;
    }

    // // instance member function to get balance
    double getBalance()
    {
        return balance;
    }

    // // instance member function to input and set details
    void setDetails()
    {
        char accountNumber[MAX_DIGITS_IN_ACC_NUMBER];

        Customer::setDetails();

        cout << "\nEnter Account Number (MAX_DIGITS " << MAX_DIGITS_IN_ACC_NUMBER - 1 << ") => ";
        cin.ignore();
        cin.getline(accountNumber, MAX_DIGITS_IN_ACC_NUMBER);
        setAccountNumber(accountNumber);

        cout << "\nEnter Balance => ";
        cin >> balance;
    }

    // // instance member function to show details
    void showDetails()
    {
        Customer::showDetails();
        cout << "\nAccount Number => " << accountNumber;
        cout << "\nBalance => " << balance;
    }
};

// // define class Borrower by inheriting class Depositor
class Borrower : public Depositor
{

private:
    // // instance member variables
    int loanNumber;
    double loanAmount;

public:
    // // instance member function to set loanNumber
    void setLoanNumber(double loanNumber)
    {
        this->loanNumber = loanNumber;
    }

    // // instance member function to get loanNumber
    double getLoanNumber() const
    {
        return loanNumber;
    }

    // // instance member function to set loanAmount
    void setLoanAmount(double loanAmount)
    {
        this->loanAmount = loanAmount;
    }

    // // instance member function to get loanAmount
    double getLoanAmount()
    {
        return loanAmount;
    }

    // // instance member function to input and set details
    void setDetails()
    {
        Depositor::setDetails();

        cout << "\nEnter Loan Number => ";
        cin >> loanNumber;

        cout << "\nEnter Loan Amount => ";
        cin >> loanAmount;
    }

    // // instance member function to show details
    void showDetails()
    {
        Depositor::showDetails();
        cout << "\nLoan Number => " << loanNumber;
        cout << "\nLoan Amount => " << loanAmount;
    }
};

// // Main Function Start
int main()
{
    int n;
    cout << "\nHow Many Customers Details You Want to Enter (MAX " << MAX_CUSTOMERS << ") => ";
    cin >> n;

    // // invalid input
    if (n < 1 || n > MAX_CUSTOMERS)
    {
        cout << "\n!!! Invalid Input...";
        exit(0);
    }

    // // create an array of instances of Borrower
    Borrower customers[n];

    // // get details
    cout << "\n>>>>>>>>> Enter Details of " << n << " Customers <<<<<<<<<<<\n";
    for (int i = 0; i < n; i++)
    {
        cout << "\n>>>>>>>> Enter Details of Customer-" << i + 1 << " <<<<<<<<<<\n";
        customers[i].setDetails();
    }

    // // show details
    cout << "\n>>>>>>>>> Details of " << n << " Customers <<<<<<<<<<<\n";
    for (int i = 0; i < n; i++)
    {
        cout << "\n\n>>>>>>>> Details of Customer-" << i + 1 << " <<<<<<<<<<";
        customers[i].showDetails();
    }

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
