#include<stdio.h>
int main()
{
int a,b,c;
float avg;
printf("Enter three number:");
scanf("%d%d%d",&a,&b,&c);

avg=(a+b+c)/(float)3;
printf("Average=%f\n",avg);

return 0;

}
