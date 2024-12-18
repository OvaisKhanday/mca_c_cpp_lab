// Write a C++ program to overload the ‘+’ operator so that it can add two matrices.

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
        for (int i = 0; i < ROWS; i++)
        {
            for (int j = 0; j < COLS; j++)
            {
                this->matrix[i][j] = 0;
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

    Matrix &operator+(Matrix &m)
    {
        Matrix *r = new Matrix();
        for (int i = 0; i < ROWS; i++)
        {
            for (int j = 0; j < COLS; j++)
            {
                r->matrix[i][j] = this->matrix[i][j] + m.matrix[i][j];
            }
        }
        return *r;
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
    int mat2[ROWS][COLS] = {{3, 4, 5}, {1, 2, 5}, {9, 0, 1}};

    Matrix m1 = Matrix(mat1);
    Matrix m2 = Matrix(mat2);
    Matrix m3 = m1 + m2;

    m3.print();

    return 0;
}