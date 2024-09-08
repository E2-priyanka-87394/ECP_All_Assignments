/* Write a program to find maximum of three numbers using
a. If – else
b. conditional operator. */

#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter any no:");
    scanf("%d%d%d",&a,&b,&c);
    // if(a>b)
    // {
    //     printf(" %d is bigger no.",a);

    // }
    // else if (b>a)
    // {
    //     printf(" %d is bigger no.",b);
        
    // }
        a>b?(a>c?printf(" %d is bigger no.",a):printf(" %d is bigger no.",c)):(b>c?printf(" %d is bigger no.",b):printf(" %d is bigger no.",c));
}