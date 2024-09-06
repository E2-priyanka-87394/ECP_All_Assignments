#include<stdio.h>
 int a, b,res;
int solve(int *a, int *b){
   return  res= *a + *b;
   // *b = *a  * *b;
// *a = temp;
}

int pro(int *a,int *b)
{
	return res=*a * *b;

}
int main(){
    printf("Enter the No1:");
	scanf("%d",&a);
	printf("Enter the No2:");
	scanf("%d",&b);

    solve(&a, &b);
    printf("Addition:%d + %d = %d \n", a, b,res);
	
	pro(&a,&b);
    printf("Production:%d * %d = %d \n", a, b,res);
	}
