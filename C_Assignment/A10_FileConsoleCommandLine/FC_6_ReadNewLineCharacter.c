/*Write a program which reads a line of characters. Each character entered from the keyboard is tested to determine its case, and is then written to the data file in opposite case. Display the contents of the file. Also use ftell and fseek to determine the current file position and to change the file position.*/

#include<stdio.h>

int main()
{
	int i, n; char ch, *c;

	FILE *fp = fopen("data.txt", "r+");

	if(fp == NULL)
	  printf("\nError in opening !\n");
	else
	{
	  printf("\nEnter how many character: ");	
	  scanf("%d", &n);
	
	  printf("\nEnter the characters: ");	
	  scanf("%s", c);
	  for(i=0; i<n; i++)
	    printf("%c", c[i]);
	  printf("\n");

	  for(i=0; i<n; i++)
	  {
	    if((c[i] >= 65) && (c[i] <=91))  
	    {
	      printf("%c is UPPERCASE.\n", c[i]);
	      fputc(c[i]+32, fp);
	    }
	    else if((c[i] >= 97) && (c[i] < 123))  
	    {
	      printf("%c is LOWERCASE.\n", c[i]);
	      fputc(c[i]-32, fp);
	    }
	    else
		fputc(c[i], fp);
	  }
	}
	rewind(fp);
	while((ch = fgetc(fp)) != EOF)
	  printf("%c", ch);
	
	 printf("\n");
		
	return 0;
}
