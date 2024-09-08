/* 5. Write a function to print a given character for a given number of times. */


#include <stdio.h>

int main() {
    char ch;
    int num, i;

    printf("Enter a character: ");
    scanf(" %c", &ch); 

    printf("Enter a number: ");
    scanf("%d", &num);

    i = 0; 
    while (i < num) {
        printf("%c", ch);
        i++;
    }

    return 0;
}