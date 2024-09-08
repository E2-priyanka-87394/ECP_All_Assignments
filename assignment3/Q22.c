#include <stdio.h>

int main()
{

	char ch = '*';

	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("  %c ", ch);
		}
		printf("\n");
	}

	printf("--------------------------------------------------\n");

	char ch1 = '*';

	for (int i = 5; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("  %c ", ch1);
		}
		printf("\n");
	}

	printf("--------------------------------------------------\n");

	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%-4d", j);
		}
		printf("\n");
	}

	printf("--------------------------------------------------\n");

	for (int i = 5; i >= 1; i--)
	{
		for (int j = 5; j >= i; j--)
		{
			printf("%-4d", j);
		}
		printf("\n");
	}

	printf("--------------------------------------------------\n");

	int rows = 7;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < rows - i - 1; j++)
		{
			printf(" ");
		}
		for (int j = 0; j <= i; j++)
		{
			printf("%c ", 'A' + j);
		}
		for (int j = i - 1; j >= 0; j--)
		{
			printf("%c ", 'A' + j);
		}
		printf("\n");
	}

	for (int i = rows - 2; i >= 0; i--)
	{
		for (int j = 0; j < rows - i - 1; j++)
		{
			printf(" ");
		}
		for (int j = 0; j <= i; j++)
		{
			printf("%c ", 'A' + j);
		}
		for (int j = i - 1; j >= 0; j--)
		{
			printf("%c ", 'A' + j);
		}
		printf("\n");
	}

	int rows1 = 4;
	char current_char = 'A';

	for (int i = 0; i < rows1; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%c ", current_char);
			current_char++;
		}
		printf("\n");
	}

	int rows2 = 4;
	char current_char1;

	for (int i = 0; i < rows2; i++)
	{
		current_char1 = 'A' + i;
		for (int j = 0; j < rows2 - i; j++)
		{
			printf("%c ", current_char1);
			current_char1++;
		}
		printf("\n");
	}

	return 0;
}
