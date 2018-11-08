//Write a recursive function to find factorial of a number.

#include<stdio.h>

int factorial(int);

int main()
{
	int i, num, result; 

	printf("\nEnter any number: ");
	scanf("%d", &num);

	result = factorial(num);

	printf("\nFactorial of %d is %d\n", num, result);

	return 0;
}

int factorial(int n)
{
	int i, fact = 1;
	
	if(n<2)
	   return 1;
	else
	   return factorial(n-1)*n;

	return fact;
}  




	
