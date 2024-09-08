/* Write a program to accept a point in Cartesian co-ordinate
 system and decide the quadrant in
which the point lies. Also check for special cases point lies
 on .
 */

#include<stdio.h>
int main()
{
    double y,x;

    printf(" Enter the coordinates of x:\n");
    scanf("%lf",&x);

    printf(" Enter the coorsinates of y:\n");
    scanf("%lf",&y);

    if ( x==0 && y==0)
    {
        printf(" The point at the origin.\n");
    }
    else if (x==0)
    {
        printf(" The point lies on the y-axis:\n");
    }
    else if(y==0)
    {
        printf("The point lies on the x-axis\n");
    }
    else{
        if(x>0 && y>0)
        {
            printf(" The point lies on the Q1\n");
        }
        else if(x<0 && y>0)
        {
            printf(" The point liese on the Q.2\n");
        }
        else if(x<0 &&y<00)
        {
            printf("The point lies on the Q3\n");
        }
        else{
            printf(" The point lies on the Q4\n");
        }
    }







}
