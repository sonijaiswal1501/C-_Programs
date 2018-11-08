/*Write a program to list the files given as arguments, stopping every 20 lines until a key is hit.(a
simple version of more UNIX utility)*/

#include<stdio.h>


int main(int argc, char *argv[])
{
	char  c, ch[5]; int count=0, position=0;

	FILE *fp = fopen("Sample.txt", "r");

	if(fp == NULL)
  	{
	  printf("\nError in file opening \n");
	  return -1;
	}
	else 	  
	{
	  while((c = fgetc(fp)) != EOF)
	  {
	   printf("%c", c);
	   while((count != 19) && (c != EOF))
	   {
	     printf("%c", c=fgetc(fp));
	     if(c == '\n')
	       count++;
	   }
	   if(c == EOF)
	    break;

	   printf("\nDo you want to continue(Y/N):");
	   gets(ch);
	   if(*ch == 'Y')
	   {
	     count=0;
	     continue;
	   }
	   else
	    break;
	  }
	  printf("\n");
	}
	fclose(fp);
	
	return 0;
}

