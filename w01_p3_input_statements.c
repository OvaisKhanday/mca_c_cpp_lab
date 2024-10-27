// Write a program that demonstrate the use of various input statements like getchar(), getch(), scanf().

#include <stdio.h>
#include <conio.h>

int main(){

    char ch = 'A';
    printf("initial value of ch: %c\n", ch);
    printf("Enter char value via getchar(): ");
    ch = getchar();
    printf("You entered: %c\n", ch);

    fflush(stdin);

    printf("Enter char value vai scanf(): ");
    scanf("%c", &ch);
    printf("You entered: %c\n", ch);


    printf("Enter char via getch()\n");
    ch = getch();
    printf("You entered: %c\n", ch);
    

    return 0;
}