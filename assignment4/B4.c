/* Write a function to calculate nth term of the Fibonacci series using recursion. Write another
function to print given number of terms of Fibonacci series. */
#include <stdio.h>

int fib(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fib(n - 1) + fib(n - 2);
    }
}

void printFibonacci(int numTerms) {
    int a = 0, b = 1, c;
    printf("Fibonacci series: ");
    for (int i = 1; i <= numTerms; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the value of n to calculate the nth term of Fibonacci series: ");
    scanf("%d", &n);
    printf("The %dth term of Fibonacci series is: %d\n", n, fib(n));

    int terms;
    printf("Enter the number of terms to print the Fibonacci series: ");
    scanf("%d", &terms);
    printFibonacci(terms);

    return 0;
}
