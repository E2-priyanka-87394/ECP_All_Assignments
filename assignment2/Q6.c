/* Write a program to accept a 5 digit number and check
 whether it is a numeric palindrome. 
 (If reversed number is same as entered number it is
  called palindrome). */

  #include <stdio.h>

int main() 
{
    int num, rn = 0, on, rem;
    printf("Enter an integer: ");
    scanf("%d", &num);

    on = num; 
    while (num != 0) 
    {
        rem = num % 10;
        rn = rn * 10 + rem;
        num /= 10;
        printf("rem=%d num=%d rn=%d\n",rem,num,rn);
    }

    if (on == rn) 
    {
        printf("%d is a palindrome.\n", on);
    } else 
    {
        printf("%d is not a palindrome.\n", on);
    }

    return 0;
}