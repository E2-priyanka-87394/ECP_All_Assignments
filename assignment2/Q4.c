/* Write a program to find maximum of two numbers using
a. If – else
b. conditional operator. */

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter any no:");
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        printf(" %d is bigger no.", a);
    }
    else if (b > a)
    {
        printf(" %d is bigger no.", b);
    }
    a > b ? printf(" %d is bigger no.", a) : printf(" %d is bigger no.", b);
}