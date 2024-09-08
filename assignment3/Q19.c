/*Modify above program (18) to accept a range i.e. two numbers and print tables of numbers
within the range.
Input: 3 6
Output:
3
4 5 6
6
8 10 12
9 12 15 18
12 16 20 24
15 20 25 30
18 24 30 36
21 28 35 41
24 32 40 48
27 36 45 54
30 40 50 60
*/


#include<stdio.h>

int main(void)

{

	int i=0;
	int j=0;
	int res=0;
	for(i=1;i<=10;i++)
	{

		for(j=3;j<=6;j++)
		{

			res=i*j;
			printf("%d\t",res);





		}

		printf("\n");



	}
	printf("\t");



	return 0;
}