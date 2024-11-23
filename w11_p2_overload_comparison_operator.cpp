// Write a C++ program to overload comparison operator operator== and operator!= .

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

    bool operator==(const Matrix &m)
    {
        for (int i = 0; i < ROWS; i++)
        {
            for (int j = 0; j < COLS; j++)
            {
                if (this->matrix[i][j] != m.matrix[i][j])
                    return false;
            }
        }
        return true;
    }
    bool operator!=(const Matrix &m)
    {
        return !(*this == m);
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
    Matrix m3 = Matrix(mat1);

    cout << "m1 == m2 : " << (m1 == m2) << endl;
    cout << "m1 == m3 : " << (m1 == m3) << endl;
    cout << "m2 == m3 : " << (m2 == m3) << endl;
    cout << "m2 == m2 : " << (m2 == m2) << endl;

    return 0;
}