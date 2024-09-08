/* Print Pascal Triangle */

#include <stdio.h>

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int binomialCoefficient(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main()
{
    int rows = 10;

    for (int n = 0; n < rows; n++)
    {
        for (int i = 0; i < (rows - n - 1) * 3; i++)
        {
            printf(" ");
        }

        for (int r = 0; r <= n; r++)
        {
            printf("%6d", binomialCoefficient(n, r));
        }
        printf("\n");
    }

    return 0;
}
