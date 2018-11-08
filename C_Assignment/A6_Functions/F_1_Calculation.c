//Write a program to calculate n!/(n-r)! using functions.

#include<stdio.h>

int factorial(int);

int main()
{
	int n, r, result1, result2, final_result; 

	printf("\nEnter the value of n & r: ");
	scanf("%d%d", &n, &r);

	result1 = factorial(n);
	result2 = factorial(n-r);

	final_result = result1/result2;

	printf("Calculated value is: %d", final_result);
	printf("\n");

	return 0;
}

int factorial(int x)
{
 	int i, fact=1;

	for(i=1; i<=x; i++)
	   fact *= i;
	
	return fact;
}
	
