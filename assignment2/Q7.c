/* Write a program to display number of days in the given year. Check condition for leap year. A
year is a leap year if it is divisible by 4 but not by 100, except that years divisible by 400 are leap
years.
a. Without using logical operators
b. Using logical operators
c. Conditional operator */

#include <stdio.h>

int main() {
/* // Conditional operator
int y;
printf(" Enter a year:");
scanf("%d",&y);

int a =  y%4==0 ? y%100==0 ? ((y%400==0) ? 1 :0) :1 :0 ;
if(a)
{
    printf("%d is a leap year.\n", y);
}
else
{
    printf("%d is not a leap year.\n",y);
}

//
return 0;
} */

//a. Without using logical operators

    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    int isLeapYear = 0;

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                isLeapYear = 1;
            }
        } else {
            isLeapYear = 1;
        }
    }

    if (isLeapYear) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }
 


{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}

    return 0;
}
