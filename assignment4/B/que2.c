#include<stdio.h>
int my_power(int no,int pow)
{
	if(pow==0)
		return 1;

	else if(pow==1)
		return no;
	
	else
		return no * my_power(no,pow-1);
}

int main()
{
	int a,b;
	printf("Enter no:");
	scanf("%d",&a);

	printf("Enter power:");
	scanf("%d",&b);


//	int base =2,index =3;
	printf("Power:%d\n",my_power(a,b));
	return 0;

}

