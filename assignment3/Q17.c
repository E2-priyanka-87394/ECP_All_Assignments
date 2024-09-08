/*
Print following pattern
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
*/

#include<stdio.h>
int main()
{
 int i=1;
	for(i=1 ; i<=5 ; i++)
	{
		for(int j=1 ; j<=5 ; j++){
		printf("* ");
		}
	printf("\n");	
	}
	printf("\n");

return 0;
}