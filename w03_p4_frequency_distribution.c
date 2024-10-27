//  Write a program to input 20 arbitrary numbers in one-dimensional array. Calculate Frequency of each number. Print the number and its frequency in a tabular form.

#include <stdio.h>
#define SIZE 20

int main()
{

    int nums[SIZE];
    printf("Enter 20 numbers: \n");
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &nums[i]);
    }

    int freq[SIZE][2];
    int index = 0;

    for (int i = 0; i < SIZE; i++)
    {
        int flag = 1;
        for (int j = 0; j < index; j++)
        {
            if (nums[i] == freq[j][0])
            {
                flag = 0;
                freq[j][1] = freq[j][1] + 1;
            }
        }
        if (flag)
        {
            freq[index][0] = nums[i];
            freq[index++][1] = 1;
        }
    }

    printf("Number\t|   Frequency\n");
    printf("____________________\n");
    for (int i = 0; i < index; i++)
    {
        printf("%d\t|   %d\n", freq[i][0], freq[i][1]);
    }

    return 0;
}