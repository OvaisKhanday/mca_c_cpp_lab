// Write a program that reverse the contents of a string.

#include <stdio.h>

char* reverse(char str[], int n){
    for (int i = 0; i < n / 2; i++){
        char temp = str[i];
        str[i] = str[n - 1 - i];
        str[n - 1 - i] = temp;
    }
}
int main(){

    char str[] = "Hello World";
    printf("String: %s\n", str);
    reverse(str, sizeof(str)-1);
    printf("Reversed: %s\n", str);
    return 0;
}