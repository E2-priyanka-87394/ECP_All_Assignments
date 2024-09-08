/* 10. Write function to check whether given year is leap or not. Write another function to print
number of days in given month. */

#include <stdio.h>
int d,c;
int  b;
typedef enum
{
    Jan=1,
    Feb,
    Mar,
    APR,
    MAY,
    JUN,
    JUL,
    AUG, 
    SEP,
    OCT,
    NOV,
    DEC
} Months;

int main()
{
    Months a;
    printf("Enter the month:");
    scanf("%d", &a);

    printf("\nEnter the year:");
    scanf("%d", &b);

    if (a <= 0 || a > 12)
    {
        printf("\nEnter the correct Month:\n");
    }
    mnt(a);
    printf("Days in the given Months = %d and year = %d",d,(c)?366:365);

}

int mnt(int a)
{
    int c = b / 4 ? (b / 100 ? (b / 400 ? 1 : 0) : 0) : 0;
/*Jan-31,Feb-28/29,Mar-31,APR-30,MAY-31,JUN-30,JUL-31,AUG-31,SEP-30,OCT-31,NOV-30,DEC-31*/
    switch (a)
    {
    case Jan :
    case Mar :
    case MAY :
    case JUL :
    case AUG :
    case OCT :
    case DEC :
         d=31;
         break;
    case APR :
    case JUN :
    case SEP :
    case NOV :
          d=30;
          break;
    case Feb :
        d= c?29:28;
        break;
            default:
        printf("Invalid month\n");

    }





}