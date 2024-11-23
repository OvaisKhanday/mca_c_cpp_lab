//  Write a program to demonstrate the use of pointer to a function.

#include <stdio.h>

int sum(int x, int y){
    return x + y;
}

int main(){

    int (*funPtr)(int, int) = sum;
    printf("Sum of 2, 4 is : %d", funPtr(2, 4));
    return 0;
}