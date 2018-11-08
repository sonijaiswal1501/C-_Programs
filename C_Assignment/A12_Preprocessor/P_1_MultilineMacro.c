//Write a C program to calculate factorial of a number. Factorial function has to be written as a multiline macro.


#include<stdio.h>

#define Fact\
	int i, num, fact=1;\
	printf("\nEnter the Number:");\
	scanf("%d", &num);\
	for(i=1; i<=num; i++)\
	    fact = fact*i;\
	printf("\nThe Factorial of %d is = %d", num, fact);\
	printf("\n");

int main()
{
	Fact 

	return 0;
}


