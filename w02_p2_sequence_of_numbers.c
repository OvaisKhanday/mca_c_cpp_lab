// Write a program to generate a sequence of numbers in both ascending and descending order.

#include <stdio.h>

int main(){

    printf("Ascending Order\n");
    for (int i = 0; i < 20; i++){
        printf("%d, ", i);
    }
    printf("\nDescending Order\n");
    for (int i = 20; i>=0; i--){
        printf("%d, ", i);
    }
        return 0;
}