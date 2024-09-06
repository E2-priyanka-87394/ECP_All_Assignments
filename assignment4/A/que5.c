6`#include <stdio.h>

// Function to print a character a specific number of times
void print_char(char ch, int times) {
    if (times < 0) {
        // Handle invalid input
        printf("The 'times' parameter must be a non-negative integer.\n");
        return;
    }

    for (int i = 0; i < times; i++) {
        putchar(ch);  // Print the character
    }
    putchar('\n');  // Print a newline at the end for better readability
}

// Example usage
int main() {
    print_char('*', 10);  // Prints '*' 10 times
    return 0;
}

