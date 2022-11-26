/*

A company has following details of their employees in the file 'emp.dat'
a. Emp Id
b. Emp Name
c. Emp Address
d. Emp Dept (admin / sales / production / design)
e. Emp Phone Number
f. Emp Age

Write a C++ program to read the above file. Create a new file such as adm.dat,
sal.dat, pro.dat, Design.dat respectively to store the employee details according to their department.

*/

// // Header files
#include <iostream>
#include <fstream>
#include <cstring>
#include <ctype.h>

// // use namespace
using namespace std;

// // maximum number of employees can be stored
#define MAX_EMPS 50

// // define class Employee
class Employee
{
public:
    // // static member variables
    static const unsigned int MAX_CHARS_IN_ADDRESS = 51;
    static const unsigned int MAX_CHARS_IN_NAME = 31;
    static const unsigned int MAX_CHARS_IN_DEPARTMENT = 31;
    static const unsigned int MAX_CHARS_IN_PHONE = 11;

private:
    // // instance member variables
    unsigned int id, age;
    char name[MAX_CHARS_IN_NAME], address[MAX_CHARS_IN_ADDRESS], department[MAX_CHARS_IN_DEPARTMENT], phoneNumber[MAX_CHARS_IN_PHONE];

public:
    // // constructors
    Employee()
    {
        // // set default values
        id = -1;
        age = -1;
        name[0] = 0;
        address[0] = 0;
        department[0] = 0;
        phoneNumber[0] = 0;
    }

    Employee(int id, const char *name, int age, const char *phoneNumber, const char *address, const char *department)
    {
        // // set id and age
        this->id = id;
        this->age = age;

        // // set name
        strncpy(this->name, name, MAX_CHARS_IN_NAME - 1);
        this->name[MAX_CHARS_IN_NAME - 1] = '\0';

        // // set phone number
        strncpy(this->phoneNumber, phoneNumber, MAX_CHARS_IN_PHONE - 1);
        this->phoneNumber[MAX_CHARS_IN_PHONE - 1] = '\0';

        // // set address
        strncpy(this->address, address, MAX_CHARS_IN_ADDRESS - 1);
        this->address[MAX_CHARS_IN_ADDRESS - 1] = '\0';

        // // set department after converting each character to lowercase
        int lengthOfDepartment = strlen(department);

        lengthOfDepartment > MAX_CHARS_IN_DEPARTMENT - 1 ? MAX_CHARS_IN_DEPARTMENT - 1 : lengthOfDepartment;

        char copyDepartment[lengthOfDepartment + 1];

        int i;
        for (i = 0; i < lengthOfDepartment; i++)
        {
            if (isalpha(department[i]))
            {
                if (isupper(department[i]))
                    copyDepartment[i] = tolower(department[i]);
                else
                    copyDepartment[i] = department[i];
            }
            else
                copyDepartment[i] = department[i];
        }

        copyDepartment[i] = '\0';
        strcpy(this->department, copyDepartment);
    }

    // // instance member function to set id
    void setId(int id)
    {
        if (id < 0) // if id is negative make it positive
            id = -id;

        this->id = id;
    }

    // // instance member function to get id
    unsigned int getId() const
    {
        return id;
    }

    // // instance member function to set age
    void setAge(int age)
    {
        if (age < 0) // if age is negative make it positive
            age = -age;

        this->age = age;
    }

    // // instance member function to get age
    unsigned int getAge() const
    {
        return age;
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

    // // instance member function to set phoneNumber
    void setPhoneNumber(const char *phoneNumber)
    {
        strncpy(this->phoneNumber, phoneNumber, MAX_CHARS_IN_PHONE - 1);
        this->phoneNumber[MAX_CHARS_IN_PHONE - 1] = '\0';
    }

    // // instance member function to get phoneNumber
    const char *getPhoneNumber() const
    {
        return phoneNumber;
    }

    // // instance member function to set address
    void setAddress(const char *address)
    {
        strncpy(this->address, address, MAX_CHARS_IN_ADDRESS - 1);
        this->address[MAX_CHARS_IN_ADDRESS - 1] = '\0';
    }

    // // instance member function to get address
    const char *getAddress() const
    {
        return address;
    }

    // // instance member function to set department
    void setDepartment(const char *department)
    {
        // // set department after converting each character to lowercase

        int lengthOfDepartment = strlen(department);

        lengthOfDepartment > MAX_CHARS_IN_DEPARTMENT - 1 ? MAX_CHARS_IN_DEPARTMENT - 1 : lengthOfDepartment;

        char copyDepartment[lengthOfDepartment + 1];

        int i;
        for (i = 0; i < lengthOfDepartment; i++)
        {
            if (isalpha(department[i]))
            {
                if (isupper(department[i]))
                    copyDepartment[i] = tolower(department[i]);
                else
                    copyDepartment[i] = department[i];
            }
            else
                copyDepartment[i] = department[i];
        }

        copyDepartment[i] = '\0';
        strcpy(this->department, copyDepartment);
    }

    // // instance member function to get department
    const char *getDepartment() const
    {
        return department;
    }

    // // instance member function to input and set employee data
    void inputEmployeeData()
    {
        int id;

        // // get and set employee id
        cout << "\nEnter Employee Id => ";
        cin >> id;

        // // set id
        setId(id);

        // // get name
        cout << "\nEnter Employee Name (MAX_CHARS " << Employee::MAX_CHARS_IN_NAME - 1 << ") => ";
        cin.ignore();
        cin.getline(name, Employee::MAX_CHARS_IN_NAME);

        // // get age
        cout << "\nEnter Employee Age => ";
        cin >> age;

        // // get phone number
        cout << "\nEnter Employee Phone Number (MAX_CHARS " << Employee::MAX_CHARS_IN_PHONE - 1 << ") => ";
        cin.ignore();
        cin.getline(phoneNumber, Employee::MAX_CHARS_IN_PHONE);

        // // get address
        cout << "\nEnter Employee Address (MAX_CHARS " << Employee::MAX_CHARS_IN_ADDRESS - 1 << ") => ";
        cin.ignore();
        cin.getline(address, Employee::MAX_CHARS_IN_ADDRESS);

        // // get department
        int choice;
        while (true)
        {
            cout << "\n>>>>>>>>>> Choose Department <<<<<<<<<<<";
            cout << "\nPress 1. Admin";
            cout << "\nPress 2. Sales";
            cout << "\nPress 3. Production";
            cout << "\nPress 4. Design";
            cout << "\nEnter Department Number => ";
            cin >> choice;

            if (choice != 1 && choice != 2 && choice != 3 && choice != 4)
            {
                cout << "\n!!!! Invalid Department Number... Try Again" << endl;
                cin.ignore();
            }
            else
            {
                if (choice == 1)
                    strcpy(department, "admin");
                else if (choice == 2)
                    strcpy(department, "sales");
                else if (choice == 3)
                    strcpy(department, "production");
                else
                    strcpy(department, "design");
                break;
            }
        }
    }

    // // instance member function to show employee data
    void showEmployeeData() const
    {
        cout << "\nEmployee Id => " << id;
        cout << "\nEmployee Name => " << name;
        cout << "\nEmployee Age => " << age;
        cout << "\nEmployee Phone Number => " << phoneNumber;
        cout << "\nEmployee Address => " << address;
        cout << "\nEmployee Department => " << department;
    }

    // // instance member function to store employee data
    int storeEmployeeData()
    {
        if (id == -1 || age == -1)
            return 0; // employee data not stored

        // // specify file name
        const char *fileName = "emp.dat";

        // create an instance of ofstream for writing in a file
        ofstream fout;

        // // open file in binary mode for writing and append data
        fout.open(fileName, ios::app | ios::binary);

        // // check if the file is successfully opened
        if (!fout.is_open())
            return 0; // employee data not stored

        // // write in file
        fout.write((char *)this, sizeof(*this));

        // // close file
        fout.close();

        return 1; // employee data successfully stored
    }
};

// // function to read employees data from a file and show
void readAndShowAllEmps()
{
    // // specify file name
    const char *fileName = "emp.dat";

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

    // // create an instance of Employee to store readed data
    Employee tempEmployee;

    // // read one record
    fin.read((char *)&tempEmployee, sizeof(tempEmployee));

    while (!fin.eof())
    {
        cout << endl;
        // // display data
        tempEmployee.showEmployeeData();
        cout << endl;

        // // read one record
        fin.read((char *)&tempEmployee, sizeof(tempEmployee));
    }

    // // close file
    fin.close();
}

// // function to read employees data from file and store in another files according to their departments
void readAndStoreEmpsByDepartment()
{
    // // specify files names
    const char *inputFile = "emp.dat";
    const char outputFiles[][20] = {"adm.dat", "sal.dat", "pro.dat", "des.data"};

    // // departments list
    char departments[][20] = {"admin", "sales", "production", "design"};
    char empDepartment[Employee::MAX_CHARS_IN_DEPARTMENT];

    // create an instances of ifstream and ofstream for reading and writing in files
    ifstream fin;
    ofstream fout[4];

    // // open file in binary mode for reading
    fin.open(inputFile, ios::in | ios::binary);

    // // check if the file is successfully opened
    if (!fin.is_open())
    {
        cout << "\nError: Unable to Open File...";
        return;
    }

    // // open files in binary mode for writing
    for (int i = 0; i < 4; i++)
    {
        fout[i].open(outputFiles[i], ios::out | ios::binary);

        // // check if the file is successfully opened
        if (!fout[i].is_open())
        {
            cout << "\nError: Unable to Open File...";
            return;
        }
    }

    // // create an instance of Employee to store readed data
    Employee tempEmployee;

    // // read employee data
    fin.read((char *)&tempEmployee, sizeof(tempEmployee));

    while (!fin.eof()) // run till the end of file
    {
        // // get and store employee department to compare
        strcpy(empDepartment, tempEmployee.getDepartment());

        int index = 0;
        for (int i = 1; i < 4; i++)
        {
            if (!strcmp(empDepartment, departments[i]))
            {
                index = i;
                break;
            }
        }

        // // write employee data in appropriate file according to departments
        fout[index].write((char *)&tempEmployee, sizeof(tempEmployee));

        // // read data of next employee
        fin.read((char *)&tempEmployee, sizeof(tempEmployee));
    }

    // // close files
    fin.close();
    for (int i = 0; i < 4; i++)
        fout[i].close();
}

// // function to read and show employees of given department
void readAndShowEmpsOfGivenDepartment(const char *department)
{

    if (strlen(department) > Employee::MAX_CHARS_IN_DEPARTMENT - 1)
    {
        cout << "!!! Given Department is Invalid ..." << endl;
        return;
    }

    // // convert department in lowercase
    char copyDepartment[strlen(department) + 1];
    int i;
    for (i = 0; department[i]; i++)
    {
        if (isalpha(department[i]))
        {
            if (isupper(department[i]))
                copyDepartment[i] = tolower(department[i]);
            else
                copyDepartment[i] = department[i];
        }
        else
            copyDepartment[i] = department[i];
    }

    copyDepartment[i] = '\0'; // terminate with null char

    // // create an instance of ifstream to read a file
    ifstream fin;

    // // open appropriate file for reading according to given department
    if (!strcmp(copyDepartment, "admin"))
        fin.open("adm.dat", ios::in | ios::binary);
    else if (!strcmp(copyDepartment, "production"))
        fin.open("pro.dat", ios::in | ios::binary);
    else if (!strcmp(copyDepartment, "sales"))
        fin.open("sal.dat", ios::in | ios::binary);
    else if (!strcmp(copyDepartment, "design"))
        fin.open("des.dat", ios::in | ios::binary);

    // // check if the file is successfully opened
    if (!fin.is_open())
    {
        ifstream fin;

        fin.open("emp.dat", ios::in | ios::binary);

        // // check if the file is successfully opened
        if (!fin.is_open())
        {
            cout << "\nError: Unable to Open File...";
            return;
        }

        // // create an instance of Employee to store readed data
        Employee tempEmployee;

        // // read employee data
        fin.read((char *)&tempEmployee, sizeof(tempEmployee));

        while (!fin.eof()) // run till the end of file
        {
            // // display data
            if (!strcmp(tempEmployee.getDepartment(), copyDepartment))
            {
                cout << endl;
                tempEmployee.showEmployeeData();
                cout << endl;
            }

            // // read data of next employee
            fin.read((char *)&tempEmployee, sizeof(tempEmployee));
        }

        // // close files
        fin.close();

        return;
    }

    // // create an instance of Employee to store readed data
    Employee tempEmployee;

    // // read employee data
    fin.read((char *)&tempEmployee, sizeof(tempEmployee));

    while (!fin.eof()) // run till the end of file
    {
        // // display data
        cout << endl;
        tempEmployee.showEmployeeData();
        cout << endl;

        // // read data of next employee
        fin.read((char *)&tempEmployee, sizeof(tempEmployee));
    }

    // // close files
    fin.close();
}

// // Main Function Start
int main()
{
    int n;

    cout << "\nHow Many Employees' Data You Want to Store (MAX " << MAX_EMPS << ") => ";
    cin >> n;

    // // invalid input
    if (n < 1 || n > MAX_EMPS)
    {
        cout << "\n!!! Invalid Input..." << endl;
        return 0;
    }

    // // dynamically allocate memory for n objects of Employee
    Employee *employees = new Employee[n];

    // // input, set and store employees data
    cout << "\n>>>>>>>>>> Enter Data of " << n << " Employees <<<<<<<<<<<<<" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "\n>>>>>>>>>>> Enter Data of Employee " << i + 1 << " <<<<<<<<<<<<" << endl;

        // // input and set employee data
        employees[i].inputEmployeeData();

        // // store employee data
        if (!(employees[i].storeEmployeeData()))
        {
            cout << "\n!!! Employee Data Not Stored..." << endl;
            return 0;
        }
    }

    // // employees data stored successfully
    cout << "\nEmployees Data Successfully Stored..." << endl;

    // // read and show employees data
    cout << "\n>>>>>>>>>> Employees Data Stored In File <<<<<<<<<<<<<<";
    readAndShowAllEmps();

    cout << "\n>>>>>>>>> Employees Data Have Successfully Stored In Different-2 Files According to Their Departments <<<<<<<<<<<<<" << endl;
    readAndStoreEmpsByDepartment();

    char department[Employee::MAX_CHARS_IN_DEPARTMENT];
    cout << "\nEnter A Department to Show Employees of That Department => ";
    cin >> department;

    cout << "\n>>>>>>>>>> Employees of " << department << " Department <<<<<<<<<" << endl;
    readAndShowEmpsOfGivenDepartment(department);

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
