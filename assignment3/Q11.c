/*
Write a program to find factorial of given number.
Input: 5
Output: 1 * 2 * 3 * 4 * 5 = 120
*/
#include<stdio.h>

int main()
{
	int num;
	printf("enter number:");
	scanf("%d",&num);
	int fact=1;
	for(int i=1;i<=num;i++)
	{
		fact=fact*i;

	}
	printf("factorial of no %d is=%d\n",num,fact);


	return 0;
}