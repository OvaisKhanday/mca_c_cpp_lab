// Write a program to reverse the digits of a given number. For example, the number 9876 should be returned as 6789.

#include <stdio.h>

int reverse(int num){
    int reversedNum = 0;
    while(num != 0){
        reversedNum = (reversedNum * 10) + (num % 10);
        num /= 10;
    }
    return reversedNum;
}

int main(){

    int num = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Reversed Number is: %d", reverse(num));
    return 0;
}