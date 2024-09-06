#include<stdio.h>
int solve(int *a, int *b){
 	int add;
   return  add= *a + *b;
   // *b = *a  * *b;
// *a = temp;
}

/*int pro(int *c,int *d)
{
 
	return res=*a * *b;

}*/
int main(){
 	int a, b,res;
    printf("Enter the No1:");
	scanf("%d",&a);
	printf("Enter the No2:");
	scanf("%d",&b);

    solve(&a, &b);
    printf("Addition:%d + %d = %d \n", a, b,add(a,b));
	
//	pro(&a,&b);
  //  printf("Production:%d * %d = %d \n", a, b,res);
	}
