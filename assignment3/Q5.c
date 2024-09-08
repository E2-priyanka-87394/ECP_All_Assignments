/* Write a program to find factorial of given number.
Input: 5
Output: 1 * 2 * 3 * 4 * 5 = 120 */

#include<stdio.h>
int main()
{
    int c=1,a,b,i=1;
    printf("Enter any no:");
    scanf("%d",&a);

    while(i<=a)
    {
        c=c*i;
        i++;
    }
    printf("%d",c);
}