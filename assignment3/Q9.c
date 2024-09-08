/*
Write a program to accept two numbers and find its GCD (greatest common divisor) using
Euclidean algorithm. The following example explains the algorithm. GCD of 123 and 36 is 3
123 % 36 = 15
36 % 15 = 6
15 % 6 = 3
6 % 3 = 0
GCD = 3
*/

#include<stdio.h>
int main()
{
	int a,b,gcd;
	printf("Enter the numbers:");
	scanf("%d",&a);
	scanf("%d",&b);
	int i=1;
	while(i<=a && i<=b)
	{
		if((a%i==0)&&(b%i==0))
		gcd=i;
		i++;
	}
	printf("Gcd=%d\n",gcd);
return 0;
}