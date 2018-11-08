/*Write a function ``replace'' which takes a pointer to a string as a parameter, which replaces all
spaces in that string by minus signs, and delivers the number of spaces it replaced.
Thus char *cat = "The cat sat";
n = replace( cat );
should set
cat to "The-cat-sat"
and
n to 2.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int replace(char *cat);

int main()
{
	char *cat = "The cat sat";
	
	printf("Before replacement string is ");
	printf("%s\n", cat);

	cat = malloc(sizeof(char));
	strcpy(cat,"The cat sat");

	replace(cat);
	printf("\n"); 

	return 0;
}

int replace(char *str)
{
	int i, length, count=0;	
	length = strlen(str);
	
	printf("After replacement string is ");	
	for(i=0; i<=length; i++)
	 {	   
	  if(str[i] == ' ')
	   {
	    count++;
	    str[i] = '-';
	   }	  
	  
	 }
	printf("%s", str);
	printf("\nSpaces occured in string are n= %d", count);
	return 0;
}
/*
int replace(char *str)
{
	int i, length, count=0;	
	length = strlen(str);

	printf("After replacement string is ");	
	for(i=0; i<=length; i++)
	 {
	  char search = *(str+i);
	  if(search == ' ')
	   {
	    count++;
	    search = '-';
	   }
	  printf("%c", search);
	  
	 }
	printf("\nSpaces occured in string are n= %d", count);
	return 0;
}*/
