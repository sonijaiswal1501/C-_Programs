/*Write a program to print ASCII values of upper case and lower case alphabets and digits (A-Z, a-z
and 0-9).*/

#include<stdio.h>

int main()
{
	char ch;

	printf("\nEnter any character:");
	scanf("%c", &ch);

	printf("\nThe ASCII value of %c is %d", ch, ch);
	printf("\n");	

	return 0;
}



