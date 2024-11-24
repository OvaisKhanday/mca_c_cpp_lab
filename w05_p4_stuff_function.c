// Write a function char* stuff(char* s1,char* s2,int sp, int rp) to stuff string s2 in string s1 at position sp, replacing rp number of characters (rp may be zero).S

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *stuff(char *s1, char *s2, int sp, int rp)
{
    int s1Size = strlen(s1);
    int s2Size = strlen(s2);

    char *result = (char *)malloc(s1Size + s2Size + 1);
    if (!result)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    int i = 0, j = 0;

    for (i = 0; i < sp; i++)
    {
        result[i] = s1[i];
    }

    for (j = 0; j < s2Size; j++, i++)
    {
        result[i] = s2[j];
    }

    for (j = sp + rp; j < s1Size; j++, i++)
    {
        result[i] = s1[j];
    }

    result[i] = '\0';

    return result;
}
int main()
{
    char *str;
    str = stuff("Hello", "World", 2, 1);
    printf("%s", str);
}