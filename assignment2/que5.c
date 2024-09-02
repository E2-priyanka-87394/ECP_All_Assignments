#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the no:");
scanf("%d",&a);
printf("Enter the no:");
scanf("%d",&b);
printf("Enter the no:");
scanf("%d",&c);
if(a>b)
{if(a>c)
{
printf("Num 1 is greater:%d",a);
}
else
{
printf("Num 3 is greater:%d",c);
}
}
else
{if(b>c)
{
printf("Num 2 is greater:%d",b);
}
else
{
printf("Num 3 is greater:%d",c);
}
}
return 0;


}
