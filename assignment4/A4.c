/* 4. In above program, division may fail if denominator is zero. Use global variable as an error flag to
avoid this problem. */

#include <stdio.h>
int m;
int cal(int, char, int);
int main()
{
    int a, b;
    char c;
    printf("Enter the mathematical operation:");
    scanf("%d%c%d", &a, &c, &b);

    int q = cal(a, c, b);
    if (m == 1)
    {
        printf("\n%d%c%d=invalid\n", a, c, b);
    }
    else if (m == 0)
    {
        printf("\n%d%c%d=%d\n", a, c, b, q);
    }

/*     		if(flag == 0)
			printf("%d %c %d = %d\n", num1, opr, num2, result);
		else
			flag = 0; */
}

int cal(int a, char c, int b)
{
    switch (c)
    {
    case '+':
        return a + b;
        break;
    case '-':
        return a - b;
        break;
    case '*':
        return a * b;
        break;
    case '/':
        if (b == 0)
        {
            m = 1;
        }
        else
        {
           return a/b;
        }
        break;
    }
}