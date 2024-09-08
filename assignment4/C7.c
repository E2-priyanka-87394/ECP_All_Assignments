/* Write a function to calculate sum and product into a single function.
a. Using global variables (for result)
b. Without using global variables */

#include <stdio.h>

int sum_global = 0;
int product_global = 1;

void calc_global(int num)
{
    sum_global += num;
    product_global *= num;
}

void calc(int num, int *sum, int *product)
{
    *sum += num;
    *product *= num;
}

int main()
{
    int nums[] = {1, 2, 3, 4, 5};
    int sum_local = 0, product_local = 1;

    for (int i = 0; i < sizeof(nums) / sizeof(nums[0]); i++)
    {
        calc_global(nums[i]);
    }
    printf("Sum (global): %d\n", sum_global);
    printf("Product (global): %d\n", product_global);

    for (int i = 0; i < sizeof(nums) / sizeof(nums[0]); i++)
    {
        calc(nums[i], &sum_local, &product_local);
    }
    printf("Sum (local): %d\n", sum_local);
    printf("Product (local): %d\n", product_local);

    return 0;
}
