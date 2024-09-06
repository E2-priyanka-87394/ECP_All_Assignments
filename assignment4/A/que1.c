//write function to calculate factorial of given no

#include <stdio.h>
int fact(int);
void main()
{
 int no,factorial;
  	printf("Enter a number: \n");
  	scanf("%d",&no);
  	factorial=fact(no);
    printf("The Factorial of %d is %d\n",no,factorial);
}

int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
