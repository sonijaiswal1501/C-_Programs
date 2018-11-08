/*Write a C program to open a file and store text (character type data) in one’s complement form.Read the contents from the file and display as it is as well in one’s complement form. Use command line arguments to pass file name to your C program.*/

#include<stdio.h>

int main(int argc, char *argv[])
{
	char  c;

	FILE *fp = fopen(argv[1], "r"), *target = fopen("Target.txt", "w+");

	if(fp == NULL)
	  printf("\nError in opening Source1.txt\n");
	else if(target == NULL)
	  printf("\nError in opening Target.txt\n");
	else
	{
	 while((c = fgetc(fp)) != EOF)
	      fputc(!c, target);
	}
	rewind(fp);
	while((c = fgetc(fp)) != EOF)
	  printf("%c", c);
	rewind(target);
	while((c = fgetc(target)) != EOF)
	  printf("%c", !c);

	fclose(fp);
	fclose(target);

	return 0;
}
