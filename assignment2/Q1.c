/* Write a program to accept two numbers and display division 
of the two numbers. Check for
divide by zero error. If divider is zero then display 
appropriate error message. */
#include<stdio.h>

int main()
{
    int a ,b ;
    printf("Enter any 2 no.");
    scanf("%d %d",&a,&b );
    if (b!=0)
    {
        int c = a/b ;
        printf("%d = %d  / %d ",c,a,b);
    }
    else if (b==0)
    {
        printf("ERROR");
    }
}