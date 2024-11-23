//  Write a C++ program to overload the assignment operator.

#include <iostream>
#define ROWS 3
#define COLS 3
using namespace std;

class Matrix
{
    int matrix[ROWS][COLS];

public:
    Matrix()
    {
        int mat[ROWS][COLS] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
        for (int i = 0; i < ROWS; i++)
        {
            for (int j = 0; j < COLS; j++)
            {
                this->matrix[i][j] = mat[i][j];
            }
        }
    }
    Matrix(int mat[ROWS][COLS])
    {
        for (int i = 0; i < ROWS; i++)
        {
            for (int j = 0; j < COLS; j++)
            {
                this->matrix[i][j] = mat[i][j];
            }
        }
    }

    Matrix &operator=(Matrix &m)
    {
        for (int i = 0; i < ROWS; i++)
        {
            for (int j = 0; j < COLS; j++)
            {
                this->matrix[i][j] = m.matrix[i][j];
            }
        }
        return *this;
    }
    void print()
    {
        for (int i = 0; i < ROWS; i++)
        {
            for (int j = 0; j < COLS; j++)
            {
                cout << this->matrix[i][j] << ", ";
            }
            cout << endl;
        }
    }
};

int main()
{

    int mat1[ROWS][COLS] = {{1, 2, 3}, {2, 3, 4}, {3, 4, 5}};

    Matrix m1 = Matrix(mat1);
    Matrix m2 = m1;

    m2.print();

    return 0;
}