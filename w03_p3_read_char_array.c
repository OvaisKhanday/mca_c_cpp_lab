//  Create a one dimensional array of characters and store a string inside it by reading from standard input.

#include <stdio.h>

int main(){

    char str[100] = "";
    printf("Enter a string: ");
    gets(str);
    printf("You entered: %s\n", str);
    return 0;
}