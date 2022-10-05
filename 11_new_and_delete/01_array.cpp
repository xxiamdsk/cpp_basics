// // Write a program that dynamically allocates an array of integers. Allow the user to input the size, populate the array, and then display the sum of all elements. Finally, use delete to free the allocated memory.

// // Header files
#include <iostream>

#include <stdlib.h>

// // use namespace
using namespace std;

#define MAX 20

// // Main Function Start
int main()
{
    int size;

    cout << "\nHow Many Numbers You Want to Enter (MAX " << MAX << ") => ";
    cin >> size;

    // // invalid size
    if (size < 1 || size > MAX)
    {
        cout << "\n!!! Invalid Input..." << endl;
        exit(0);
    }

    int *nums = new int[size]; // // allocate an array of integers dynamically
    int sum = 0;

    // // Input Numbers
    cout << "\nEnter 10 Numbers => ";
    for (int i = 0; i < size; i++)
    {
        cin >> nums[i];
        sum += nums[i];
    }

    // // Print Numbers
    cout << "\n>>>>>>>>>>>>>> Numbers <<<<<<<<<<<<<<<<" << endl;
    for (int i = 0; i < size; i++)
        cout << nums[i] << " ";

    cout << "\n\nSum of Numbers => " << sum;

    // // deallocate dynamically allocated memory
    delete[] nums;

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
