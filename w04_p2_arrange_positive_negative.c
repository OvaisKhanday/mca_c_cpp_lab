// Write a program which will arrange the positive and negative numbers in a one-dimensional array in such a way that all positive numbers should come first and then all the negative numbers will come without changing original sequence of the numbers. Example: Original array contains: 10,-15,1,3,-2,0,-2,-3,2,-9 Modified array: 10,1,3,0,2,-15,-2,-2,-3,-9 
                    
#include <stdio.h>

int main(){

    int n = 0;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter elements of array\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    /* Save positives in another array */
    int positives[n];
    int pIndex = 0;
    for (int i = 0; i < n; i++){
        if (nums[i] >= 0){
            positives[pIndex++] = nums[i];
        }
    }

    // relocate negative numbers to the end of the array
    int nIndex = n - 1;
    for (int i = n - 1; i >= 0; i--){
        if(nums[i] < 0){
            nums[nIndex--] = nums[i];
        }
    }

    // add all positive numbers back to the array from auxilary
    // positives array
    for (int i = 0; i < pIndex; i++){
        nums[i] = positives[i];
    }

    for (int i = 0; i < n; i++){
        printf("%d, ", nums[i]);
    }

    return 0;
}