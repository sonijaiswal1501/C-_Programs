//Develop a C program to find factorial of a number N using for loop.


#include<stdio.h>

int main()
{
	int i, num, fact=1;
	

	printf("\nEnter the Number:");
	scanf("%d", &num);
	
	for(i=1; i<=num; i++)
	    fact = fact*i;
	
	printf("\nThe Factorial of %d is = %d", num, fact);	
	printf("\n\n");

	return 0;
}
