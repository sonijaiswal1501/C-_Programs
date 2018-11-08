/*Write a program that will concatenate two files, that is append the contents of one file at the end
of another file and write the results into a third file. You must be able to execute command at
DOS prompt as follows:
C > CONCAT Source 1.txt source 2.txt Target.txt.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	char c;
	
	FILE *fp1 = fopen("file1.txt", "r+");
	FILE *fp2 = fopen("file2.txt", "r+");
	FILE *fp3 = fopen("file3.txt", "w");
	
	if(fp1 == NULL || fp2 == NULL || fp3 == NULL)
	 {
	   puts("\nCould not open files\n");
	   exit (0);
	 }
	while((c = fgetc(fp1)) != EOF)
	   fputc(c, fp3);

	while((c = fgetc(fp2)) != EOF)
	   fputc(c, fp3);

	printf("\nMerged file1.txt and file2.txt into file3.txt\n");

	fclose(fp1);
	fclose(fp2);
	fclose(fp3);


	return 0;
}
