/* Write a function to implement four function calculator. The return value indicates the error (due
to zero denominator in case of division). The result is returned via out-parameter. */

#include <stdio.h>

int add(int a, int b, int *result)
{
    *result = a + b;
    return 0;
}

int subtract(int a, int b, int *result)
{
    *result = a - b;
    return 0;
}

int multiply(int a, int b, int *result)
{
    *result = a * b;
    return 0;
}

int divide(int a, int b, int *result)
{
    if (b == 0)
    {
        return -1;
    }
    *result = a / b;
    return 0;
}

int main()
{
    int num1, num2, result;
    char operator;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch (operator)
    {
    case '+':
        if (add(num1, num2, &result) == -1)
        {
            printf("Error: Division by zero\n");
            break;
        }
        printf("Result: %d\n", result);
        break;
    case '-':
        printf("Result: %d\n", subtract(num1, num2, &result));
        break;
    case '*':
        printf("Result: %d\n", multiply(num1, num2, &result));
        break;
    case '/':
        if (divide(num1, num2, &result) == -1)
        {
            printf("Error: Division by zero\n");
            break;
        }
        printf("Result: %d\n", result);
        break;
    default:
        printf("Invalid operator\n");
    }

    return 0;
}
