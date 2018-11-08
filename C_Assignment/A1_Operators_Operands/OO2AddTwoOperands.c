//Develop a C program to add two operands and store the result in one of the operand using addition assignment operator.


#include<stdio.h>

int main()
{
	int no1, no2;

	printf("Enter the two numbers:\n");
	scanf("%d%d", &no1, &no2);
	no1 += no2;
	printf("Sum of two numbers:%d\n", no1);

	return 0;
}
	
