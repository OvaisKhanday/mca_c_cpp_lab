// Write a program to compute addition, multiplication, and transpose of a 2-D array.


#include <stdio.h>
#include <stdlib.h>
#define ROWS 3
#define COLS 3

void printMatrix(int matrix[ROWS][COLS], char* message){
    printf("\n*** %s ***\n", message);
    for (int i = 0; i < ROWS; i++){
        for (int j = 0; j < COLS; j++){
            printf("%d, ", matrix[i][j]);
        }
        printf("\n");
    }
}



int main(){

    int matrix1[ROWS][COLS] = {
                            {1, 2, 3}, 
                            {5, 6, 7},
                            {9, 4, 2}};
    int matrix2[ROWS][COLS] = {
                            {2, 2, 5},
                            {5, 4, 1},
                            {1, 1, 7}};

    int addition[ROWS][COLS];
    int transpose[COLS][ROWS];
    int multiplication[ROWS][COLS];
    for (int i = 0; i < ROWS; i++){
        for (int j = 0; j < COLS; j++){
            addition[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    for (int i = 0; i < ROWS; i++){
        for (int j = 0; j < COLS; j++){
            transpose[j][i] = matrix1[i][j];
        }
    }

    for (int i = 0; i < ROWS; i++){
        for (int j = 0; j < COLS; j++){
            multiplication[i][j] = 0;
            for (int k = 0; k < ROWS; k++){
                multiplication[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

        printMatrix(addition, "Matrix Addition");
        printMatrix(transpose, "Transpose of Matrix 1");
        printMatrix(multiplication, "Matrix Multiplication");



    return 0;
}