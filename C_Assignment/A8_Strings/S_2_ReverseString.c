//Write a program to reverse a string using recursive functions.

#include<stdio.h>
#include<string.h>

void reverse(char *);

int main()
{
	char str[30];
	int length=0;

	printf("\nEnter string to reverse : ");
	scanf("%s", str);

	printf("\nReversed string is ");

	reverse(str);

	printf("\n\n");

	return 0;
}

void reverse(char *s)
{
	if(*s)
	   reverse(s+1);

	printf("%c", *s);
	
}
