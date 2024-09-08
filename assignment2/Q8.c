/* Write a program that will calculate the price for a quantity
 entered from the keyboard, given
that the unit price is Rs 5 and there is a discount of
10 percent for quantities over 30 and a 15
percent discount for quantities over 50. */

#include <stdio.h>
int main()
{
    double a = 5, b, c, q;
    printf("Enter the quentity\n");
    scanf("%lf", &b); // Accepting Quentity

    q = b > 50 ? 15 : (b > 30 ? 10 : 0); // Discount Selection

    c = a * b;             // Total amount
    c = c - (c * q / 100); // Discounted price
    printf("Total amount with %f for %f Q = %f", q, c, b);
    return 0;
}