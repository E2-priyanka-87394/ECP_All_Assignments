/* Write a program to accept a number and print its prime factors.
Input: 180
Output: 180 = 2 * 2 * 3 * 3 * 5 */

#include <stdio.h>

int main() {
    int a, i;

    printf("Enter a number: ");
    scanf("%d", &a);


    for (i = 2; i * i <= a; i++) {
        while (a % i == 0) {
            printf("%d ", i);
            a /= i;
        }
    }

    if (a > 1) {
        printf("%d", a);
    }

    printf("\n");
    return 0;
}
