/*

Write a C++ program to having class BankAccount containing attributes such as name, accountNumber and balance and perform following operations :-

a. Add record in a file
b. Display content of file
c. Display name of person having balance > (given balance)

*/

// // Header files
#include <iostream>
#include <fstream>
#include <cstring>
#include <ctype.h>

// // use namespace
using namespace std;

// // maximum number of bank accounts can be stored
#define MAX_ACCOUNTS 50

// // define class BankAccount
class BankAccount
{
public:
    // // static member variables
    static const unsigned int MAX_CHARS_IN_NAME = 31;
    static const unsigned int MAX_CHARS_IN_ACCOUNT_NUM = 6;

private:
    // // instance member variables
    char name[MAX_CHARS_IN_NAME], accountNumber[MAX_CHARS_IN_ACCOUNT_NUM];
    double balance;

public:
    // // constructors
    BankAccount()
    {
        // // set default values
        balance = 0;
        name[0] = 0;
        accountNumber[0] = 0;
    }

    BankAccount(const char *name, const char *accountNumber, double balance)
    {
        // // set name
        strncpy(this->name, name, MAX_CHARS_IN_NAME - 1);
        this->name[MAX_CHARS_IN_NAME - 1] = '\0';

        // // set account number
        strncpy(this->accountNumber, accountNumber, MAX_CHARS_IN_ACCOUNT_NUM - 1);
        this->accountNumber[MAX_CHARS_IN_ACCOUNT_NUM - 1] = '\0';

        // // set balance
        this->balance = balance;
    }

    // // instance member function to set name
    void setName(const char *name)
    {
        strncpy(this->name, name, MAX_CHARS_IN_NAME - 1);
        this->name[MAX_CHARS_IN_NAME - 1] = '\0';
    }

    // // instance member function to get name
    const char *getName() const
    {
        return name;
    }

    // // instance member function to set accountNumber
    void setAccountNumber(const char *accountNumber)
    {
        strncpy(this->accountNumber, accountNumber, MAX_CHARS_IN_ACCOUNT_NUM - 1);
        this->accountNumber[MAX_CHARS_IN_ACCOUNT_NUM - 1] = '\0';
    }

    // // instance member function to get accountNumber
    const char *getAccountNumber() const
    {
        return accountNumber;
    }

    // // instance member function to deposit money
    void deposit(double amount)
    {
        if (amount < 0)
        {
            cout << "\n!!! Invalid Deposit Amount..." << endl;
            return;
        }

        balance += amount;

        cout << "\nRupees " << amount << " Have Deposited Successfully..." << endl;
    }

    // // instance member function to get balance
    double getBalance() const
    {
        return balance;
    }

    // // instance member function for withdraw money
    void withdraw(double amount)
    {
        if (amount < 0)
        {
            cout << "\n!!! Invalid Withdrawal Amount..." << endl;
            return;
        }
        else if (balance < amount)
        {
            cout << "\n!!! Insufficient Balance..." << endl;
            return;
        }

        balance -= amount;

        cout << "\nRupees " << amount << " Have Withdrawal Successfully..." << endl;
    }

    // // instance member function to input and set bank account data
    void inputBankAccountData()
    {
        // // get name
        cout << "\nEnter Name (MAX_CHARS " << BankAccount::MAX_CHARS_IN_NAME - 1 << ") => ";
        cin.ignore();
        cin.getline(name, BankAccount::MAX_CHARS_IN_NAME);

        // // get account number
        cout << "\nEnter Account Number (MAX_CHARS " << BankAccount::MAX_CHARS_IN_ACCOUNT_NUM - 1 << ") => ";
        cin.getline(accountNumber, BankAccount::MAX_CHARS_IN_ACCOUNT_NUM);

        // // get initial balance
        double initialBalance;
        cout << "\nEnter Initial Balance  => ";
        cin >> initialBalance;
        deposit(initialBalance);
    }

    // // instance member function to show bank account data
    void showBankAccountData() const
    {
        cout << "\nName => " << name;
        cout << "\nAccount Number => " << accountNumber;
        cout << "\nBalance => " << balance;
    }

    // // instance member function to store bank account data
    int storeBankAccountData()
    {
        if (strlen(name) == 0)
            return 0; // bank account data not stored

        // // specify file name
        const char *fileName = "bank_data.dat";

        // create an instance of ofstream for writing in a file
        ofstream fout;

        // // open file in binary mode for writing and append data
        fout.open(fileName, ios::app | ios::binary);

        // // check if the file is successfully opened
        if (!fout.is_open())
            return 0; // bank account data not stored

        // // write in file
        fout.write((char *)this, sizeof(*this));

        // // close file
        fout.close();

        return 1; // bank account data successfully stored
    }
};

// // function to read bank accounts data from a file and show
void readAndShowBankAccountsData()
{
    // // specify file name
    const char *fileName = "bank_data.dat";

    // create an instance of ifstream for reading from a file
    ifstream fin;

    // // open file in binary mode for reading
    fin.open(fileName, ios::in | ios::binary);

    // // check if the file is successfully opened
    if (!fin.is_open())
    {
        cout << "\nError: Unable to Open File...";
        return;
    }

    // // create an instance of BankAccount to store readed data
    BankAccount tempBankAccount;

    // // read one record
    fin.read((char *)&tempBankAccount, sizeof(tempBankAccount));

    while (!fin.eof())
    {
        cout << endl;
        // // display data
        tempBankAccount.showBankAccountData();
        cout << endl;

        // // read one record
        fin.read((char *)&tempBankAccount, sizeof(tempBankAccount));
    }

    // // close file
    fin.close();
}

// // function to read bank accounts data from a file and show
void showPersonsHavingBalGreater(double balanceLimit)
{
    cout << "\n>>>>>>> Following Persons Have Balance Greater than " << balanceLimit << " <<<<<<<<<<" << endl;

    // // specify file name
    const char *fileName = "bank_data.dat";

    // // found any person having balance greater than given balance
    int found = false;

    // create an instance of ifstream for reading from a file
    ifstream fin;

    // // open file in binary mode for reading
    fin.open(fileName, ios::in | ios::binary);

    // // check if the file is successfully opened
    if (!fin.is_open())
    {
        cout << "\nError: Unable to Open File...";
        return;
    }

    // // create an instance of BankAccount to store readed data
    BankAccount tempBankAccount;

    // // read one record
    fin.read((char *)&tempBankAccount, sizeof(tempBankAccount));

    while (!fin.eof())
    {

        if (tempBankAccount.getBalance() > balanceLimit)
        {
            cout << endl;
            // // display data
            tempBankAccount.showBankAccountData();
            cout << endl;
            found = true;
        }

        // // read one record
        fin.read((char *)&tempBankAccount, sizeof(tempBankAccount));
    }

    // // close file
    fin.close();

    // // if there is no person having balance greater than given balance
    if (!found)
    {
        cout << "\nThere is No Person Having Balance Greater than " << balanceLimit << endl;
    }
}

// // Main Function Start
int main()
{
    int n;

    cout << "\nHow Many Bank Accounts You Want to Create (MAX " << MAX_ACCOUNTS << ") => ";
    cin >> n;

    // // invalid input
    if (n < 1 || n > MAX_ACCOUNTS)
    {
        cout << "\n!!! Invalid Input..." << endl;
        return 0;
    }

    // // dynamically allocate memory for n objects of BankAccount
    BankAccount *accounts = new BankAccount[n];

    // // input, set and store bank accounts data
    cout << "\n>>>>>>>>>> Enter Data of " << n << " Bank Accounts <<<<<<<<<<<<<" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "\n>>>>>>>>>>> Enter Data of Bank Account-" << i + 1 << " <<<<<<<<<<<<" << endl;

        // // input and set bank account data
        accounts[i].inputBankAccountData();

        // // store bank account data
        if (!(accounts[i].storeBankAccountData()))
        {
            cout << "\n!!! Bank Account Data Not Stored..." << endl;
            return 0;
        }
    }

    // // bank accounts data stored successfully
    cout << "\nBank Accounts Data Successfully Stored..." << endl;

    // // read and show bank accounts data
    cout << "\n>>>>>>>>>> Bank Accounts Data Stored In File <<<<<<<<<<<<<<";
    readAndShowBankAccountsData();

    // // display persons having balance greater than given balance
    double balanceLimit;
    cout << "\nEnter Balance Amount to Show Persons Having Greater than that Balance => ";
    cin >> balanceLimit;
    showPersonsHavingBalGreater(balanceLimit);

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
