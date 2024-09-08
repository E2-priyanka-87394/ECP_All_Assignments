/*
Write a program to print table of given number.
*/


#include<stdio.h>
int main()
{
 int a;
 printf("Enter the No:");
 scanf("%d",&a);
	int i=0;
 for(i=1; i<=10 ;i++)
 {
	printf("%d * %d = %d\n",a,i,a*i);
 }

return 0;
}