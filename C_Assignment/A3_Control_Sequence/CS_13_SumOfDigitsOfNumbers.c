//Write a program to find the sum of digits of a given number.

#include<stdio.h>

int main()
{
	int number, num, remainder, sum=0;

       	
	printf("\nEnter the number: ");
	scanf("%d", &number);
	
	num=number;
	while(number>0)
	{
	  remainder= number%10;
	  sum+=remainder;
	  number/=10;
	}

	printf("\nSum of digits of %d is %d", num, sum);
	
	printf("\n");

	return 0;
}
