#include<stdio.h>

int main(void)
{
	char ch;

	//1. open file into read mode
	FILE *fp = fopen("file1.txt", "r");

	//2. read characters from file and print on console
	while((ch = fgetc(fp)) != EOF)
		printf("%c", ch);

	//3. close the file
	fclose(fp);

	return 0;
}






















