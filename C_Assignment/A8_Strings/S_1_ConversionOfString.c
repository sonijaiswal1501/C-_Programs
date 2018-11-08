//Write a program to convert lower case string to upper case string and vice versa.

#include<stdio.h>
#include<string.h>

int main()
{
	char str[30];
	int i, length=0;

	printf("\nEnter a string : ");
	scanf("%s", str);

	length = strlen(str);
	
	printf("\n");

	for(i=0; i<length; i++)
	 {
	   if((str[i] >= 'a') && (str[i] <= 'z'))
	      str[i] = (str[i] - 32);

	   else if((str[i] >= 'A') && (str[i] <= 'Z'))	 
              str[i] = (str[i] + 32);
	 }
	printf("Converted string is %s\n", str);

	printf("\n");

	return 0;
}
