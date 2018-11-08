//Develop a C program which adds all numbers from 1 to N, except those which are divisible by 5. Implement this using for loop and continue statement.

#include<stdio.h>

int main()
{
	int i, n, sum=0;

	printf("Enter the No:");
	scanf("%d", &n);

	printf("%d\n", n);

	for(i=0; i<=n; i++)
	 {
	   if(i%5 == 0)
	    continue;

	   sum = sum+i;	     
	 }
	printf("Sum of N no.:%d\n", sum);

	return 0;
}
