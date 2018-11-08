/*Write a C program with a function any (s1, s2). This function returns the first location (index of
location) in the string s1 which matches with any string in s2 otherwise.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int any(char *, char *);


int main()
{
	char str_1[20], str_2[20];
	char *found;
	
	printf("\nEnter the first string : ");
	scanf("%s", str_1);

	printf("\nEnter the string to be searched : ");
	scanf("%s", str_2);
	
	found = any(str_1, str_2);	

	if(found)
	   printf("\nSecond string is found in the first string at %d position.\n", (found - str_1));
	else
	  printf("\nSecond string is not found in the first string.\n");	
	

	return 0;
}

int any(char *s1, char *s2)
{
	int i, j;
	char *found;
	
	found = strstr(s1, s2);

	return found;       
}


	 
