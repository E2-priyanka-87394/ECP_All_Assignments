#include<stdio.h>
int check_prime(int num)
{
int flag=0;
int i=2;
while(i<=num/2)
{
if(num%i!=0)
{
flag=1;
return flag;
}
i++;
}
return flag;

}

int main()
{
int num;
printf("Enter no:");
scanf("%d",&num);
int x=check_prime(num);
if(x==0){
printf("Prime no:%d",x);
}
else
{
printf("Not prime no:%d",x);
}
return 0;
}

