/*
Write a program to print the tables of the numbers from 1 to 10
*/

#include <stdio.h>
int main()
{
    int i = 1;
    int res;
    for (i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            res = i * j;
            printf("%d\t ", res);
        }
        printf("\n");
    }
    printf("\n");
}