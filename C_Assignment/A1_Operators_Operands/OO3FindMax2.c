//Write a C program to find the maximum of two numbers  using Conditional operator.


#include<stdio.h>

int main()
{
	int no1, no2;

	printf("Enter the two numbers:\n");
	scanf("%d%d", &no1, &no2);
	
	(no1 > no2) ? printf("Maximum no.is %d\n", no1) : printf("Maximum no is %d\n", no2);

	return 0;
}
