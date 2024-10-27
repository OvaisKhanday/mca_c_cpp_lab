// Write a program to find sum of all prime numbers between 100 and 500.

#include <stdio.h>
#define TRUE 1
#define FALSE 0

int isPrime(int num)
{
  
    for (int i= 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return FALSE;
        }
    }
    return TRUE;
}
int main()
{

    int sum = 0;
    for (int i = 101; i <= 500; i += 2)
    {
        if (isPrime(i))
        {
            sum += i;
        }
    }
    printf("sum of all primes between 100 and 500 is : %d\n", sum);
    return 0;
}