//  Write a program to demonstrate the use of pointer to a pointer.

#include <stdio.h>

int main(){

    int x = 10;
    int *ptr = &x;
    int **ptrToPtr = &ptr;

    printf("x: %d\n", x);
    printf("&x: %x\n", &x);
    printf("ptr: %x\n", ptr);
    printf("*ptr: %d\n", *ptr);
    printf("&ptr: %x\n", &ptr);
    printf("ptrToPtr: %x\n", ptrToPtr);
    printf("*ptrToPtr: %x\n", *ptrToPtr);
    printf("**ptrToPtr: %d\n", **ptrToPtr);
    printf("&ptrToPtr: %x\n", &ptrToPtr);
    return 0;
}