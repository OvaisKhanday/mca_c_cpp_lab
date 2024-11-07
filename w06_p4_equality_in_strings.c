// Write a program to check if two strings are same or not?

#include <stdio.h>
#define FALSE 0
#define TRUE 1

int equal(char* s1, char* s2){
    while(*s1 == *s2){
        // If one string ends before another
        if((!*s1 && *s2) || (!*s2 && *s1)) return FALSE;
        // If both strings end on same length
        else if(!*s1 && !*s2) return TRUE;
        s1++;
        s2++;
    }
    return FALSE;
}

int main(){
    char s1[] = "Hello World";
    char s2[] = "Hello World";
    char s3[] = "Helo";

    printf("%d\n", equal(s1, s2));
    printf("%d\n", equal(s1, s3));
}