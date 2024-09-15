/* Write a program to accept a character and a number, and print the character number times
Input:
Character: *
Number: 6
Output:
****** */

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
