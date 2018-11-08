//Write a program to remove all the comments from a ‘C’ program.


#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void remove_single_Comments(void);
void remove_multi_Comments(void);

int main()
{
	char str[40] = "/* Test program */ \n"
			" // Testing ";
		
	
	printf("\nGiven String : %s\n", str);
	
	remove_single_Comments();
	remove_multi_Comments();
	
	return 0;
}

void remove_single_Comments(void)
{
	char c;
	
	FILE *fp = fopen("sample.txt","r+");
	if(fp == NULL)
	{
	  printf("\nError opening the file!\n");
	exit(0);
	}
	else
	while((c = fgetc(fp)) != EOF)
	 {
	  if(c == '/')
	   {
	     c = fgetc(fp);
	     if(c == '/')
	      {
	        fseek(fp, ftell(fp)-2, SEEK_SET);
		while((c = fgetc(fp)) != '\n')
		 {
		  fseek(fp, ftell(fp)-1, SEEK_SET);
		  fputc(' ', fp);
	         }
	      }
	    }
	  }

	rewind(fp);
	while((c = fgetc(fp)) != EOF)
	  printf("%c", c);

	fclose(fp);
	
}

void remove_multi_Comments(void)
{
	char c;
	
	FILE *fp = fopen("sample.txt","r+");
	if(fp == NULL)
	{
	  printf("\nError opening the file!\n");
	exit(0);
	}
	else
	while((c = fgetc(fp)) != EOF)
	 {
	  if(c == '/')
	   {
	     c = fgetc(fp);
	     if(c == '*')
	      {
	        fseek(fp, ftell(fp)-2, SEEK_SET);
		for(int i=0; i<2; i++)
		   fputc(' ', fp);	
		while((c = fgetc(fp)) != '*')
		 {
		  fseek(fp, ftell(fp)-1, SEEK_SET);
		  fputc(' ', fp);
	         }
		if(c == '/')
	        {
	         fseek(fp, ftell(fp)-2, SEEK_SET);
		 for(int i=0; i<2; i++)
		    fputc(' ', fp);
		}
	      }
	    }
	  }

	rewind(fp);
	while((c = fgetc(fp)) != EOF)
	  printf("%c", c);

	fclose(fp);
	
}
