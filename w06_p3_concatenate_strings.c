// Write a program to concatenate two strings without using the inbuilt function?

#include <stdio.h>

char* concat(char* dest, char* src){
    // Given that dest can hold src
    char *currentDest = dest;
    while(*currentDest) currentDest++;
    while(*currentDest = *src){
        src++;
        currentDest++;
    }
    return dest;
}
int main(){

    char str1[100] = "Ovais";
    char str2[] = "Ahmad";
    char str3[] = "Khanday";

    concat(str1, " ");
    concat(str1, str2);
    concat(str1, " ");
    concat(str1, str3);
    printf("%s", str1);
}