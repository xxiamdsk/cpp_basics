/*

Consider a class Matrix
Class Matrix
{
   int matrix[3][3], rows = 3, cols = 3;
};
Overload the - (Unary) should negate the numbers stored in the object.

*/

// // Header files
#include <iostream>

#include <iomanip>

// // use namespace
using namespace std;

// // define class Matrix
class Matrix
{

private:
    // // instance member variables
    int matrix[3][3], rows = 3, cols = 3;

public:
    // // constructors
    Matrix()
    {
    }

    // // instance member function to input matrix
    void inputMatrix()
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cout << "\nEnter element[" << i << "][" << j << "] => ";
                cin >> matrix[i][j];
            }
        }
    }

    // // instance member function to show matrix
    void showMatrix()
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
                cout << setw(4) << matrix[i][j];

            cout << endl; // // Add New line
        }
    }

    // // instance member function to set element
    void setElement(int row, int col, int value)
    {
        if (row >= 0 && row < rows && col >= 0 && col < cols)
            matrix[row][col] = value;
        else
            cout << "\nInvalid Index...";
    }

    // // instance member function to get element
    int getElement(int row, int col)
    {
        if (row >= 0 && row < rows && col >= 0 && col < cols)
            return matrix[row][col];
        cout << "\nInvalid Index...";
    }

    // // overload unary minus (-a) operator
    Matrix operator-()
    {
        Matrix temp;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
                temp.matrix[i][j] = -matrix[i][j];
        }
        return temp;
    }
};

// // Main Function Start
int main()
{

    Matrix matrixA, matrixB; // // create objects of Matrix class

    // // input elements of matrix
    cout << "\n>>>>>>>> Enter Elements of Matrix-A of Order 3 x 3 <<<<<<<<<\n";
    matrixA.inputMatrix();

    // // show matrix
    cout << "\n>>>>>>>> Matrix-A <<<<<<<<<\n";
    matrixA.showMatrix();

    matrixB = -matrixA;

    // // show negation of m1
    cout << "\n>>>>>>>> Negation of Matrix-A <<<<<<<<<\n";
    matrixB.showMatrix();

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
