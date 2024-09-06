#include <stdio.h>

// Function to print Pascal's Triangle
void printPascalsTriangle(int rows) {
    int i, j;

    // Create a 2D array to store the triangle values
    int triangle[rows][rows];

    // Generate Pascal's Triangle
    for (i = 0; i < rows; i++) {
        for (j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                // First and last elements of each row are 1
                triangle[i][j] = 1;
            } else {
                // Each element is the sum of the two elements above it
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }
        }
    }

    // Print Pascal's Triangle
    for (i = 0; i < rows; i++) {
        // Print leading spaces for formatting
        for (j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }
        // Print elements of the row
        for (j = 0; j <= i; j++) {
            printf("%d ", triangle[i][j]);
        }
        printf("\n");
    }
}

// Main function to test the printPascalsTriangle function
int main() {
    int rows;

    // Input number of rows from user
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);

    // Print Pascal's Triangle
    printPascalsTriangle(rows);

    return 0;
}

