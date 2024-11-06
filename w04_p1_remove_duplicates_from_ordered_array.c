//  Write a C function to remove duplicates from an ordered array. For example, if input array contains 10,10,10,30,40,40,50,80,80,100 then output should be 10,30,40,50,80,100.

#include <stdio.h>

/// Returns new array length
int removeDuplicates(int nums[], int n)
{
    int index = 0;
    for (int i = 1; i < n; i++)
    {
        if (nums[i] != nums[index])
        {
            nums[++index] = nums[i];
        }
    }
    return index;
}

int main()
{

    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter elements of array in order\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    int newLength = removeDuplicates(nums, n);

    for (int i = 0; i <= newLength; i++)
    {
        printf("%d, ", nums[i]);
    }

    return 0;
}