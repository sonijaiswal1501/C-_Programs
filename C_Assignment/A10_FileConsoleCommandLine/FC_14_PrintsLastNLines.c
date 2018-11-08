/*Write a program last that prints the last n lines of its text input. By default n should be 5, but your program should allow an optional argument so that last -n prints out the last n lines, where n is any integer. Your program should make the best use of available storage. (Input of text could be by reading a file specified from the command or reading a file from standard input)*/

#include<stdio.h>


int main(int argc, char *argv[])
{
	char  c; int count=0, position=0;

	FILE *fp = fopen("Sample.txt", "r+");

	if(fp == NULL)
  	{
	  printf("\nError in file opening \n");
	  return -1;
	}
	else if(argc < 2)	  
	{
	  while((c = fgetc(fp)) != EOF)
	  {
	   if(c == '\n')
	    count++;
	
	   position++;

	   if(count > 5)
	   {
	     fseek(fp, -position, SEEK_CUR);
	     while((c = fgetc(fp)) != '\n');
	     count=0; 
	     position=0;
	   }
	  }
	  fseek(fp, -position, SEEK_CUR);
	  while((c = fgetc(fp)) != EOF);
	      printf("%c", c);
	  printf("\n");
	}
	else
	{
	  int lines=(*argv[1])-48;
	  while((c = fgetc(fp)) != EOF)
	  {
	   if(c == '\n')
	    count++;	
	    position++;

	   if(count > lines)
	   {
	     fseek(fp, -position, SEEK_CUR);
	     while((c = fgetc(fp)) != '\n');
	     count=0; 
	     position=0;
	   }
	  }
	  fseek(fp, -position, SEEK_CUR);
	  while((c = fgetc(fp)) != EOF);
	      printf("%c", c);
	  printf("\n");
	}
	fclose(fp);
	
	return 0;
}
	  
