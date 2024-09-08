/* Write a function to indicate whether given number is prime or not. Write another function to
print prime numbers in the given range. */

#include <stdio.h>
int flag=0;
int main()
{
    int num,;

    printf("Enter a number: ");
    scanf("%d", &num);
    prime(num);

    if (flag == 0)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}

int prim(int num )
{
    int i;
    for (i = 2; i <= num / 2; ++i)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }
}
