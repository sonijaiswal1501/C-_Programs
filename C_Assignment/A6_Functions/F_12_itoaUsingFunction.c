/*Write a C program with a recursive function itoa, which converts integer into a string.*/


#include<stdio.h>
#include<string.h>
#include<math.h>

void itoa(int ,char *);

int main()
{
	int number,result;
	char str[80];	
	
	printf("\nEnter the number: ");
	scanf("%d", &number);

	itoa(number, str);
	printf("\nNumber converted into string is %s\n ", str);	

	return 0;
}


void itoa(int num, char *str)
{
	int i=0, j=0, rem, len=0, n=num ; 	
	
	while(n != 0)
	{
	    len++;
	    n /= 10;
	}
	for(i=0; i<len; i++)
	{
	    rem = num%10;
	    num /= 10;
	    str[len-(i+1)] = rem +'0';
	}
	 str[len] = '\0';	
	
}



