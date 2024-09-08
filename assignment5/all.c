#include <stdio.h>
#include "Q2.h"

int w;  
int arr[100]; 

void accept_array() {
    printf("Enter the number of elements (less than or equal to 100): ");
    scanf("%d", &w);
    for (int i = 0; i < w; i++) {
        scanf("%d", &arr[i]);
    }
}

void print_array(int arr[], int size) {
    printf("Array:");
    for (int i = 0; i < size; i++) {
        printf("%-4d", arr[i]);
    }
    printf("\n");
}

void reverse_array(int arr[], int size) {
    int i = 0, j = size - 1;
    int temp;
    
    while (i < j) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}
