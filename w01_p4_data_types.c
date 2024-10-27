// Write a program to demonstrate the overflow and underflow of various datatype and their resolution?

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){

    printf("Data Type\tbytes\t\trange\t\t\t\t\t\t\tMax+1\t\t\t\t\tMin-1\n");
    printf("int\t\t%d\t\t%d to %d\t\t\t\t%d\t\t\t\t%d\n", sizeof(int), INT_MIN, INT_MAX, INT_MAX+1, INT_MIN-1);
    printf("unsigned int\t%d\t\t%d to %lu\t\t\t\t\t\t%d\t\t\t\t\t%lu\n", sizeof(unsigned int), 0, UINT_MAX,UINT_MAX+1,(unsigned int)(-1));
    printf("long long int\t%d\t\t%lld to %lld\t\t%lld\t\t\t%lld\n", sizeof(long long), LLONG_MIN, LLONG_MAX,LLONG_MAX+1, LLONG_MIN-1);

    printf("char\t\t%d\t\t%d to %d\t\t\t\t\t\t%d\t\t\t\t\t%d\n", sizeof(char), CHAR_MIN, CHAR_MAX, (char)(CHAR_MAX+1),(char)(CHAR_MIN-1));
    printf("u char\t\t%d\t\t%d to %d\t\t\t\t\t\t%d\t\t\t\t\t%d\n", sizeof(unsigned char), 0, UCHAR_MAX,(unsigned char)(UCHAR_MAX+1),(unsigned char)-1);

    return 0;
}