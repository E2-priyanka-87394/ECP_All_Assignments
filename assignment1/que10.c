#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,perimeter,area,s;
printf("Enter side of triangle\n");
scanf("%f%f%f",&a,&b,&c);
perimeter=a+b+c;
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));


printf("\n Perimeter of Triangle=%.2f\n",perimeter);

printf("\n Area of Triangle=%.2f\n",area);
return 0;

}
