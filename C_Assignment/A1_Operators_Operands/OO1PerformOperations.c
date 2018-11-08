//Develop a C program to perform operations (+,*,-,/and%) on two whole numbers.Identify suitable data types to represent the numbers and resultant values.

#include<stdio.h>

int main()
{
	int no1, no2, sum, sub, mul, div, rem;

	printf("Enter the two numbers:");
	scanf("%d %d", &no1, &no2);

	sum = no1 + no2;
	sub = no1 - no2;
	mul = no1 * no2;
	div = no1 / no2;
	rem = no1 % no2;

	printf("Sum of two numbers:%d\n", sum);
	printf("Subtraction of two numbers:%d\n", sub);
	printf("Multiplication of two numbers:%d\n", mul);
	printf("Division of two numbers:%d\n", div);
	printf("Remainder of two numbers:%d\n", rem);	
	
	return 0;
}
