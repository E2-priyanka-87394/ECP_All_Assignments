/* Write a program to accept a character c and display category of the input character.
ALPHABET:   c is a letter (65 to 90 or 97 to 122)
UPPERCASE:  c is an uppercase letter (65 to 90)
LOWERCASE : c is a lowercase letter (97 to 122)
DIGIT:      c is a digit (48 to 57)
SPACE:      c is a space(32), tab(9), carriage return(13), new line(10)
OTHER:      Not listed above */

#include<stdio.h>

int main()
{
    char a;
    printf("Enter a character: ");
    scanf("%c", &a);

    if (a >= 'A' && a <= 'Z' )
    {
        printf("%c is a letter uppercase: A-Z\n", a);
    }
    else if ((a >= 'a' && a <= 'z'))
    {
        printf("%c is a letter lowercase: a-z\n", a);
    }
    
    else if (a >= '0' && a <= '9')
    {
        printf("%c is a digit (0-9)\n", a);
    }
    else if (a == ' ' || a == '\t' || a == '\n' || a == '\r')
    {
        printf("%c is a special character (space, tab, newline, carriage return)\n", a);
    }
    else
    {
        printf("%c is not an alphabet, digit, or listed special character\n", a);
    }

    return 0;
}
