#include<stdio.h>

int main(int argc, char *argv[])
{	
	char ch;

	// argv[0] - program name
	// argv[1] - source file name		-- read
	// argv[2] - destination file name	-- write

	//1. open source file in read and destinarion file in write mode
	FILE *fs = fopen(argv[1], "r");
	FILE *fd = fopen(argv[2], "w");

	//2. read charcters from source file and write into destination file
	while((ch = fgetc(fs)) != EOF)
		fputc(ch, fd);

	//3. close both the files
	fclose(fs);
	fclose(fd);

	return 0;
}






















