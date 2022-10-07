// // Create a program that dynamically allocates a 2D array of doubles. Allow the user to input the dimensions, populate the matrix, and then compute and display the transpose of the matrix. Use delete to free the memory.

// // Header files
#include <iostream>

#include <stdlib.h>
#include <iomanip>

// // use namespace
using namespace std;

#define MAX_ROWS 10
#define MAX_COLS 10

// // Main Function Start
int main()
{
    int rows, cols;
    cout << "\nEnter Order of Matrix (ROWS X COLS) (MAX_ROWS " << MAX_ROWS << ", MAX_COLS " << MAX_COLS << ") => ";
    cin >> rows >> cols;

    // // invalid order
    if (rows < 1 || rows > MAX_ROWS || cols < 1 || cols > MAX_COLS)
    {
        cout << "\n!!! Invalid Order..." << endl;
        exit(0);
    }

    // // create a 2d array of double dynamically
    double **matrix = new double *[rows]; // array of pointers (outer array)
    for (int i = 0; i < rows; i++)
    {
        matrix[i] = new double[cols]; // array of type double (inner array)
    }

    // // Input Elements of Matrix
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "\nEnter Element[" << i + 1 << "][" << j + 1 << "] => ";
            cin >> matrix[i][j];
        }
    }

    // // Print Elements of Matrix
    cout << "\n\n>>>>>>>> Matrix of " << rows << " X " << cols << " <<<<<<<<<\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            cout << left << setw(4) << matrix[i][j];

        cout << endl; // // Add New line
    }

    // // Transpose of Matrix
    cout << "\n\n>>>>>>>> Transpose of Matrix <<<<<<<<<\n";
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
            cout << left << setw(4) << matrix[j][i];

        cout << endl; // // Add New line
    }

    // // deallocate dynamically allocated memory
    for (int i = 0; i < rows; i++) // To delete the inner arrays
        delete[] matrix[i];

    delete[] matrix; // To delete the outer array

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
