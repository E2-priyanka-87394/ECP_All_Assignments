/* Write a function to print a given number in binary format. */

#include <stdio.h>

// Function to print a number in binary format
void printBinary(int num)
{
    if (num == 0)
    {
        printf("0");
        return;
    }

    int binary[32];
    int index = 0;

    while (num > 0)
    {
        binary[index++] = num % 2;
        num /= 2;
    }

    for (int i = index - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Binary representation of %d is: ", num);
    printBinary(num);
    printf("\n");

    return 0;
}
