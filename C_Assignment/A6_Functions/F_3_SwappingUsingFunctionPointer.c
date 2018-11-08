//Write a function to swap contents of two variables using functions and pointer variables.

#include<stdio.h>

void swap(int*, int*);

int main()
{
	int a, b;
	
	printf("\nEnter the first number a = ");
	scanf("%d", &a);
	
	printf("Enter the second number b = ");
	scanf("%d", &b);

	printf("\nBefore swapping the values of a = %d and b = %d", a, b);

	swap(&a, &b);

	printf("\nAfter swapping the values of a = %d and b = %d\n", a, b);

	return 0;
}

void swap(int *a, int *b)
{
	int temp=0;
	
	temp = *a;	
	*a = *b;	
	*b = temp;
	
}
