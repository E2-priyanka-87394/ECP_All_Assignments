#include <stdio.h>
#include "h1.h"

int w;
int arr[100];

void accept_array()
{
    printf("Enter the number of eliments in array:");
    scanf("%d", &w);
    for (int i = 0; i < w; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void print_array(int arr[], int size)
{
    printf("Array:");

    for (int i = 0; i < w; i++)
    {
        printf("%-4d", arr[i]);
    }
    printf("\n");
}

void reverse_array(int arr[], int size)
{
    int i = 0, j = size - 1;
    int t;

    while (i < j)
    {
        t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;
        i++;
        j--;
    }
}
