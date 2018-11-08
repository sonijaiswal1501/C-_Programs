//Develop a C program to find sum of all odd numbers upto N using while loop.

#include<stdio.h>

int main()
{
	int i=0, num, sum=0;
	
	printf("Enter the num:");
	scanf("%d", &num);

	while(num >= i)
	 {
	   if(i%2 != 0)
	     sum = sum + i;

	   i++;
	 }
	printf("Sum of all odd %d numbers is %d", num, sum);
	printf("\n");

	return 0;

}


