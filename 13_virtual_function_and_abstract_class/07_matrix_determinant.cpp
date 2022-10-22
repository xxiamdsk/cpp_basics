// // Create a base class called Matrix. Use this class to store a matrix of 2 x 2 of int type values that could be used to calculate determinants and create matrices. Create class CalculateDeterminant which will calculate the determinant of a matrix. Using these classes, calculate the determinant of the matrix.

// // Header files
#include <iostream>

#include <iomanip>

// // use namespace
using namespace std;

// // define a class Matrix
class Matrix
{
public:
    // // static member variables
    static const int MAX_ROWS = 2;
    static const int MAX_COLS = 2;

protected:
    // // instance member variables
    int **matrix, rows, cols;

public:
    // // constructors
    Matrix(int rows)
    {
        // // check for invalid rows
        if (rows > MAX_ROWS)
            rows = MAX_ROWS;
        else if (rows < 0)
            rows = -rows;

        this->rows = rows;
        this->cols = rows;

        // // allocate memory dynamically
        matrix = new int *[rows];

        for (int i = 0; i < rows; i++)
            matrix[i] = new int[cols];
    }

    Matrix(int rows, int cols)
    {
        // // check for invalid rows
        if (rows > MAX_ROWS)
            rows = MAX_ROWS;
        else if (rows < 0)
            rows = -rows;

        // // check for invalid rows
        if (cols > MAX_COLS)
            cols = MAX_COLS;
        else if (cols < 0)
            cols = -cols;

        this->rows = rows;
        this->cols = cols;

        // // allocate memory dynamically
        matrix = new int *[rows];

        for (int i = 0; i < rows; i++)
            matrix[i] = new int[cols];
    }

    // // instance member variable to set element
    void setElement(int element, int row, int col)
    {
        // // check for invalid indexes
        if (rows < 0 || row > rows - 1 || col < 0 || col > cols - 1)
        {
            cout << "\n!!! Invalid Indexes...";
            return;
        }

        matrix[row][col] = element;
    }

    // // instance member variable to input matrix
    void inputMatrix()
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cout << "\nEnter Element[" << i << "][" << j << "] => ";
                cin >> matrix[i][j];
            }
        }
    }

    // // instance member variable to get element
    int getElement(int row, int col)
    {
        // // check for invalid indexes
        if (rows < 0 || row > rows - 1 || col < 0 || col > cols - 1)
        {
            cout << "\n!!! Invalid Indexes...";
            return 0;
        }

        return matrix[row][col];
    }

    // // instance member variable to display matrix
    void displayMatrix()
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cout << left << setw(4) << matrix[i][j];
            }
            cout << endl;
        }
    }

    // // destructor
    ~Matrix()
    {
        for (int i = 0; i < rows; i++)
            delete[] matrix[i];

        delete[] matrix;
    }
};

// // define a class CalculateDeterminant by inheriting class Matrix
class CalculateDeterminant : public Matrix
{
public:
    // // inheriting the constructor of the base class
    using Matrix::Matrix;

    // // instance member function to calculate determinant
    int calDeterminant()
    {
        return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    }
};

// // Main Function Start
int main()
{
    // // create an instance of CalculateDterminant
    CalculateDeterminant d1(2, 2);

    // // set elements
    d1.setElement(5, 0, 0);
    d1.setElement(10, 0, 1);
    d1.setElement(3, 1, 0);
    d1.setElement(8, 1, 1);

    // // display matrix
    d1.displayMatrix();

    // // calculate and display determinant of matrix
    cout << "\nDeterminant of Matrix => " << d1.calDeterminant();

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
