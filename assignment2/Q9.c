/* Write a program to display number of days in the given month and year */

#include <stdio.h>

typedef enum
{
    jan = 1,
    feb,
    mar,
    apr,
    may,
    jun,
    jul,
    aug,
    sep,
    oct,
    nov,
    dec
} Months;

int main()
{
    int y, a, daysInMonth;
    Months m;
    printf("Enter month (1-12) and year: ");
    scanf("%d %d", &m, &y);

    if (m < 1 || m > 12)
    {
        printf("Invalid month\n");
        return;
    }

    a = (y % 4 == 0) ? (y % 100 == 0 ? ((y % 400 == 0) ? 1 : 0) : 1) : 0;

    switch (m)
    {
    case jan:
    case mar:
    case may:
    case jul:
    case aug:
    case oct:
    case dec:
        daysInMonth = 31;
        break;
    case apr:
    case jun:
    case sep:
    case nov:
        daysInMonth = 30;
        break;
    case feb:
        daysInMonth = (a) ? 29 : 28;
        break;
    default:
        printf("Invalid month\n");
        return;
    }

    printf("Days in given month = %d\n", daysInMonth);
    printf("Days in given year is %d\n", (a) ? 366 : 365);
}

