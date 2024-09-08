/* Write a program to accept number and check whether
 the number
 is +ve, -ve and zero. */

 #include<stdio.h>

int main()
{
    int a;
    printf("Enter any no:");
    scanf("%d",&a);
    if(a>0)
    {
        printf(" %d is +ve no.",a);

    }
    else if (a<0)
    {
        printf(" %d is -ve no.",a);
        
    }
    else
    {
        printf(" %d is zero no.",a);

    }
}