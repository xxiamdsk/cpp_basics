// // Write a C++ program to find of all the numbers of an array of size 10.

// // Header files
#include <iostream>

// // use namespace
using namespace std;

#define ARRAY_SIZE 10

// // Main Function Start
int main()
{
    int nums[ARRAY_SIZE], sum = 0;

    // // Input Numbers
    cout << "\nEnter 10 Numbers => ";
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cin >> nums[i];
        sum += nums[i];
    }

    // // Print Numbers
    cout << "\n>>>>>>>>>>>>>> Numbers <<<<<<<<<<<<<<<<" << endl;
    for (int i = 0; i < ARRAY_SIZE; i++)
        cout << nums[i] << " ";

    cout << "\n\nSum of Numbers => " << sum;

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
