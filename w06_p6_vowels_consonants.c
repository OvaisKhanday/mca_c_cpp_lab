// Write a program to find the number of vowels and consonants in a sentence?

#include <stdio.h>
#define FALSE 0
#define TRUE 1


int isVowel(char ch){
    char str[] = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'};
    for (int i = 0; i < sizeof(str); i++){
        if(str[i] == ch) return TRUE;
    }
    return FALSE;
}
int isConsonant(char ch){
    return (((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) && (!isVowel(ch)));
}
int main(){
    char str1[100];
    printf("Enter a string: ");
    gets(str1);

    int vowels = 0, consonants = 0;

    char *ptr = str1;
    while(*ptr){
        if(isVowel(*ptr)) vowels++;
        else if(isConsonant(*ptr)) consonants++;
        ptr++;
    }

    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);

    return 0;
}