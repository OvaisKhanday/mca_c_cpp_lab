#include <stdio.h>
#include "funs.h"

void printArr(int* nums, int n){
    printf("[");
    for (int i = 0; i < n; i++){
        printf("%d, ", nums[i]);
    }
    printf("]\n");
}