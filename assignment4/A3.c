/* 3. Write a function to implement four function calculator. Function would take operands and
operator as arguments and returns result. */

#include <stdio.h>

int cal(int, char, int);
int main()
{
    int a, b;
    char c;
    printf("Enter the mathematical operation:");
    scanf("%d%c%d", &a, &c, &b);

    int q =cal(a, c, b);
    if (c=='/' && b==0 && q==0)
        printf("\n%d%c%d=Inavalid\n",a,c,b);
        else
    printf("\n%d%c%d=%d\n",a,c,b,q);
}

int cal(int a, char c, int b)
{
    switch (c)
    {
    case '+':
        return a+ b;
        break;
    case '-':
        return a- b;
        break;
    case '*':
        return a* b;
        break;
    case '/':
        if(b==0)
        {
            return 0;
        }else{
            return a/b;
        ;}
        break;
    }
}