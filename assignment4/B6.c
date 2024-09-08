/* Write a function to print a given number in hexadecimal format. */

#include <stdio.h>

void printHexadecimal(int num) {
    printf("%X", num);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Hexadecimal representation of %d is: ", num);
    printHexadecimal(num);
    printf("\n");

    return 0;
}
