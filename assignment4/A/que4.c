#include <stdio.h>


float division(int num1, int num2)
{
	int flag=0;
	float z;
     
	if (num2== 0)
  {
	   flag=1;
  // printf("Division by zero\n");
 //           return flag;
  }
   else {
   z = num1/ num2;
   printf ("%.f", z);
 }
 return flag;
  
}


int main()
{   
    int num1, num2;
    
    printf("Enter the First Number  = ");
    scanf("%d",&num1);

    printf("Enter the Second Number = ");
    scanf("%d",&num2);

    
    printf(" %.f\n", division(num1, num2));
    
}
