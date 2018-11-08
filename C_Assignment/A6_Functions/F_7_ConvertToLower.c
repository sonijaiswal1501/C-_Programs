/*Write a C program with a function tolower, which converts upper case letters to lower case. Use
conditional expression.*/

#include<stdio.h>

char tolowercase(char);

int main()
{
	char ch;

	printf("\nEnter any character: ");
	scanf("%c", &ch);

	 tolowercase(ch);	

	
	return 0;
}
	
char tolowercase(char ch)
{
	((ch >= 65) && (ch <= 90)) ? printf("\nConverted %c to %c\n", ch, (ch + 32)) : printf("\nInvalid Input\n");	
}
