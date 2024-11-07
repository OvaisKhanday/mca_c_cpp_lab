// Write a program to check whether a string is a palindrome or not?

#include <stdio.h>
#define FALSE 0
#define TRUE 1

int isPalindrome(char str[], int n){
    int left = 0, right = n - 2;
    while(left < right){
        if(str[left] != str[right]) return FALSE;
        left++;
        right--;
    }
    return TRUE;
}

int main(){
    char str1[] = "racecar";

    char str2[] = "hello";
    printf("%d\n", isPalindrome(str1, sizeof(str1)));
    printf("%d\n", isPalindrome(str2, sizeof(str2) ));
    return 0;
}