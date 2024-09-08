/* 1. Write a function to calculate factorial of a given number. */

#include <stdio.h>
int fact();
int main()
{
    int c = 1, a, b, i = 1;
    printf("Enter any no:");
    scanf("%d", &a);
    fact(a, c);

    // printf("%d",c);
}

int fact(int a, int c)
{
    int i = 1;
    while (i <= a)
    {
        c = c * i;
        i++;
    }
    printf("%d\n", c);
    return c;
}
