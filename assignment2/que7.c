/*Write a program to display number of days in the given year. Check condition for leap year. A year is a leap year if it is divisible by 4 but not by 100, except that years divisible by 400 are leap
years*/

//a. Without using logical operators
//b. Using logical operators
//c. Conditional operator

#include<stdio.h>
int main()
{
int year;
printf("Enter year:");
scanf("%d",&year);
/*
if( year % 4==0)
{
printf("1.leap year");
}	
else if(year % 100==0)
{
printf("2.leap year:");
}
else if(year % 4 ==0 )
{
printf("3.leap year");
}
else
{
printf("4.Not leap year");
}
*/

((year % 4==0)&& year % 100!=0)?printf("1. leap year\n"):((year % 400==0)?printf("2.leap")


return 0;

}
