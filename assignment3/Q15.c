/*
Modify the menu driven program for four function calculator. Add a menu item to choose
option exit. The program continues till user chooses option exit.
*/


#include<stdio.h>
typedef enum calculator{Addition=1,Substraction,Multiplication,Division} Cal;




int main()
{
  int  a,b,res;
  int c;
  char exit=1;
	
here:  
  printf("Enter the 1st no:");
  scanf("%d",&a);
  printf("Enter the 2nd no:");
  scanf("%d",&b);
  Cal choice;
  printf("Enter the choice:\n\n");
  printf("Addition=1\nSubstraction=2\nMultiplication=3\nDivision=4\n\n");
  scanf("%d",&choice);

do{
  switch(choice)
  {
	case(1): res=a+b;
	printf("The Addition of two Number:  %d \n\n",res);
	break;

	case(2): res=a-b;
	printf("The Substraction of two Number:  %d\n\n",res);
	break;

	case(3): res=a*b;
	printf("The multiplication of tw number:  %d \n\n",res);
	break;

	case(4): 
	if(b!=0)
	{
	res =a/b;
	printf("The division of two number :  %d\n\n",res);
	}
  	else
	printf("Divisionn by zero not valid\n\n");
	break;

	default:
	printf("Invalid OPerand\n\n");
  }

  printf("Do You Want to Continue or Exit :\n\n");
  printf("Press 1 to conntinue:\n");
  printf("Press 0 to Exit\n");
  scanf("%d",&c);
  if(c==1)

	goto here;
}  
while(exit==0);	
  return 0;

return 0;
}

