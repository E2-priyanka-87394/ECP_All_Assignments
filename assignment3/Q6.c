/* Write a program to accept a number and print all factors excluding the number
Input: 24
Output: all factors: 1, 2, 3, 4, 6, 8, 12 */

#include <stdio.h>

int main()
{
    int a, b, i = 2;
    printf("Enter a NO:");
    scanf("%d", &a);

    while (i <= a)
    {
        if (a % i == 0)
            printf("%d\n", i);
        i++;
    }
}