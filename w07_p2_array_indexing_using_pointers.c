// Write a program to demonstrate the array indexing using pointers.


#include <stdio.h>
int main(){

    char *str1D = "Hello World";
    printf("%c, %c, %c, %c, %c\n", *str1D, *(str1D + 1), *(str1D + 2), *(str1D + 3),*(str1D + 4));

    char str2D[][10] = {"Hello", "World"};
    printf("%s, %s\n", *str2D, *(str2D + 1));
    printf("%c, %c, %c, %c, %c\n", *(*str2D), *(*str2D + 1), *(*str2D + 2), *(*str2D+3), *(*str2D+4));
    printf("%c, %c, %c, %c, %c\n", *(*(str2D+1)), *(*(str2D+1) + 1), *(*(str2D+1) + 2), *(*(str2D+1)+3), *(*(str2D+1)+4));
    return 0;
}