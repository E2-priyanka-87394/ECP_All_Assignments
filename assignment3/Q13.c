#include<stdio.h>
int main()
{
	int a,b,c, num;
	printf("Enter the no:");
	scanf("%d",&num);
	a=0;
	b=1;
	c=0;
	int i=1;
	for(i=1 ; i<=num ; i++ )
	{
	printf("%-4d",c);
		a=b;
		b=c;
		c=a+b;
	}
return 0;
}