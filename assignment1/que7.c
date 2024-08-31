#include<stdio.h>
int main()
{
int no,a,b,c,d,revno=0,rem;
printf("Enter a 4 digit number:");
scanf("%d",&no);
int ori=no;

//printf("%d=",no);
a=no/1000;  no=no%1000;
b=no/100;   no=no%100;
c=no/10;    no=no%10;
d=no;

printf("%d\t %d\t %d\t %d\t \n",a,b,c,d);
printf("%d=",ori);

while (ori!=0){
rem=ori%10;
revno=revno*10+rem;
ori/=10;
}


printf("%d000+%d00+%d0+%d\t \n",a,b,c,d);
printf("Reverse no=%d\n",revno);



return 0;
}
