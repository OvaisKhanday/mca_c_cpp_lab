// Write a program to generate a sequence of numbers in both ascending and descending order.

#include <stdio.h>

int main(){

    printf("Ascending Order\n");
    for (int i = 0; i < 100; i++){
        printf("%d\t|\t", i);
    }
    printf("\nDescending Order\n");
    for (int i = 100; i>=0; i--){
        printf("%d\t|\t", i);
    }
        return 0;
}