#include <stdio.h>
#include <stdlib.h>

// Function to copy file character by character
void copy_file_char_by_char(FILE *source_file, FILE *destination_file) {
    char ch;
    while ((ch = fgetc(source_file)) != EOF) {
        fputc(ch, destination_file);
    }
}

// Function to display the contents of a file
void display_file(FILE *file) {
    char ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
}

int main() {
    const char *source_filename = "source.txt";
    const char *destination_filename = "destination.txt";

    // Open the source file for reading
    FILE *source_file = fopen(source_filename, "r");
    if (source_file == NULL) {
        perror("Error opening source file");
        return EXIT_FAILURE;
    }

    // Open the destination file for writing
    FILE *destination_file = fopen(destination_filename, "w");
    if (destination_file == NULL) {
        perror("Error opening destination file");
        fclose(source_file);
        return EXIT_FAILURE;
    }

    // Copy contents from source file to destination file
    copy_file_char_by_char(source_file, destination_file);

    // Close files after copying
    fclose(source_file);
    fclose(destination_file);

    // Open the destination file for reading to display its contents
    destination_file = fopen(destination_filename, "r");
    if (destination_file == NULL) {
        perror("Error opening destination file for reading");
        return EXIT_FAILURE;
    }

    printf("Contents of the destination file:\n");
    display_file(destination_file);

    // Close the destination file after displaying contents
    fclose(destination_file);

    // Reopen the destination file for appending user input
    destination_file = fopen(destination_filename, "a");
    if (destination_file == NULL) {
        perror("Error opening destination file for appending");
        return EXIT_FAILURE;
    }

    printf("\nEnter data to append to the destination file (end with Ctrl+D on Unix or Ctrl+Z on Windows):\n");
    char buffer[256];
    while (fgets(buffer, sizeof(buffer), stdin) != NULL) {
        fputs(buffer, destination_file);
    }

    // Close the destination file after appending
    fclose(destination_file);

    // Open the destination file one last time to display updated contents
    destination_file = fopen(destination_filename, "r");
    if (destination_file == NULL) {
        perror("Error opening destination file for reading");
        return EXIT_FAILURE;
    }

    printf("\nUpdated contents of the destination file:\n");
    display_file(destination_file);

    // Close the destination file after displaying updated contents
    fclose(destination_file);

    return EXIT_SUCCESS;
}

