/* 2. Write a function to calculate power. */

#include<stdio.h>
#include<math.h>

int main()
{
    int a,b;
    printf("Enter base and index:");
    scanf("%d%d",&a,&b);

    int c = pow(a,b);
    printf("base %d power %d = %d",a,b,c);

}