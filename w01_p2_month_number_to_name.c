//  Write a program that reads in a month number and outputs the month name.

#include <stdio.h>

int main()
{

    int monthNumber = 0;
    printf("Enter month number: ");
    scanf("%d", &monthNumber);

    char *monthNames[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    if(monthNumber >= 1 && monthNumber <= 12){
        printf("%s", monthNames[monthNumber - 1]);
    }else {
        printf("Not a valid Number");
    }

    // Another Approach
    // switch (monthNumber)
    // {
    // case 1:
    //     printf("January\n");
    //     break;
    // case 2:
    //     printf("February\n");
    //     break;
    // case 3:
    //     printf("March\n");
    //     break;
    // case 4:
    //     printf("April\n");
    //     break;
    // case 5:
    //     printf("May\n");
    //     break;
    // case 6:
    //     printf("June\n");
    //     break;
    // case 7:
    //     printf("July\n");
    //     break;
    // case 8:
    //     printf("August\n");
    //     break;
    // case 9:
    //     printf("September\n");
    //     break;
    // case 10:
    //     printf("October\n");
    //     break;
    // case 11:
    //     printf("November\n");
    //     break;
    // case 12:
    //     printf("December\n");
    //     break;
    // default:
    //     printf("Not a valid month number\n");
    //     break;
    // }
    return 0;
}