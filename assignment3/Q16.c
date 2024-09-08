#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int magicNumber = rand() % 1000 + 1;
    int guess, chances = 10;

    printf("Welcome to the Guess the Magic Number game!\n");
    printf("You have 10 chances to guess the magic number between 1 and 1000.\n");

    while (chances--)
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess == magicNumber)
        {
            printf("Congratulations! You won.\n");
            return 0;
        }
        else if (guess < magicNumber)
        {
            printf("Left\n");
        }
        else
        {
            printf("Right\n");
        }
    }

    printf("Sorry, you've run out of chances. The magic number was: %d\n", magicNumber);
    return 0;
}
