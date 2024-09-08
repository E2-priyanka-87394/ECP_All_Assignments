/* Input a number and display whether number is Even or Odd. */
#include<stdio.h>

int main()
{
    int a;
    printf("Enter any no:");
    scanf("%d",&a);
    if((a % 2) == 0)
    {
        printf(" %d is even no.",a);

    }
    else
    {
        printf(" %d is odd no.",a);
        
    }
}