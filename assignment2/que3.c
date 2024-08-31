#include<stdio.h>
int main()
{
int num;
printf("Enter Num:");
scanf("%d",&num);

if(num>0)
printf("Num is positive\n");
else if(num<0)
printf("Num is Negative\n");
else
printf("Num is zero\n");
return 0;
}
