#include <iostream>
#include <new>

class Student
{
private:
    int id;
    std::string name;

public:
    // constructors
    Student(int studentId, const std::string &studentName) : id(studentId), name(studentName)
    {
        std::cout << "Constructor called for Student " << id << std::endl;
    }

    // destructor
    ~Student()
    {
        std::cout << "Destructor called for Student " << id << std::endl;
    }

    // display function
    void display() const
    {
        std::cout << "Student ID: " << id << ", Name: " << name << std::endl;
    }

    // friend function to overload new operator
    friend void *operator new(size_t size);

    // friend function to overload delete operator
    friend void operator delete(void *ptr) noexcept;

    // friend function to overload new operator (nothrow version)
    friend void *operator new(size_t size, const std::nothrow_t &nothrow_constant) noexcept;

    // Friend function to overload delete operator (nothrow version)
    friend void operator delete(void *ptr, const std::nothrow_t &nothrow_constant) noexcept;
};

// overload new operator using friend function
void *operator new(size_t size)
{
    std::cout << "Custom new operator called with size: " << size << " bytes." << std::endl;
    return ::operator new(size); // Use global new for memory allocation
}

// overload delete operator using friend function
void operator delete(void *ptr) noexcept
{
    std::cout << "Custom delete operator called." << std::endl;
    ::operator delete(ptr); // Use global delete for memory deallocation
}

// overload new operator (nothrow version) using friend function
void *operator new(size_t size, const std::nothrow_t &nothrow_constant) noexcept
{
    std::cout << "Custom new (nothrow) operator called with size: " << size << " bytes." << std::endl;
    return ::operator new(size, nothrow_constant); // Use global new (nothrow) for memory allocation
}

// overload delete operator (nothrow version) using friend function
void operator delete(void *ptr, const std::nothrow_t &nothrow_constant) noexcept
{
    std::cout << "Custom delete (nothrow) operator called." << std::endl;
    ::operator delete(ptr, nothrow_constant); // Use global delete (nothrow) for memory deallocation
}

int main()
{
    // create a student using overloaded new operator
    Student *student1 = new (std::nothrow) Student(1, "John Doe");

    // display student information
    student1->display();

    // delete the student using overloaded delete operator
    delete student1;

    return 0;
}
