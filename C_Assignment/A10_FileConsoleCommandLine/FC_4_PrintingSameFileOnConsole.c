//Write a c program to printing the same file on the console.

#include<stdio.h>

int main()
{
	
	char c;
	
	FILE *fp = fopen(__FILE__, "r");
	
	do
	{
	   c = fgetc(fp);
	   putchar(c);

	}while(c != EOF);

	   fputc(c, fp);

	fclose(fp);

	return 0;
}
