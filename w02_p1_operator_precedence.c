// Write a program to demonstrate the precedence of various operators.

#include <stdio.h>

int main(){

    printf("7 + 3 * 2 = \t\t%d\n", 7 + 3 * 2);
    printf("15 / 5 * 2 = \t\t%d\n",15 / 5 * 2);
    printf("(15 / 5) * 2 = \t\t%d\n",(15 / 5) * 2);
    printf("20+10*15/5 = \t\t%d\n", 20+10*15/5);
    printf("(20+10)*15/5 = \t\t%d\n", (20+10)*15/5);
    printf("(20+10)*(15/5) = \t%d\n", (20+10)*(15/5));
    int x = 1, y = 100;
    printf("x++ = \t\t\t%d\n", x++);
    printf("x++ + ++x = \t\t%d\n", x++ + ++x);
    printf("x-- + ++x * x-- = \t%d\n", x-- + ++x * x--);
    printf("x > 50 && y > 50 = \t%d\n",x > 50 && y > 50);

    return 0;
}