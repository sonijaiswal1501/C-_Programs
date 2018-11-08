/*Write a C program with a function invertponwards (n, p, b). This function inverts b bits of
integer n, that begin at position p, leaving the others unchanged.*/

#include<stdio.h>


int invertponwards(int, int, int);

int main()
{
	int i, n, p, b, binary, dec,len=0;
	int bin[15];

	printf("\nEnter the decimal number n : ");
	scanf("%d", &n);

	printf("\nEnter the position p : ");
	scanf("%d", &p);
	
	printf("\nEnter the decimal bits b : ");
	scanf("%d", &b);

	
	binary = invertponwards(n, p, b);	
	printf("\nInverted integer in binary for n is %d\n", binary);

	return 0;
}


int invertponwards(int n, int p, int b)
{
	int num;

	num = ((1<<b)-1)^((1<<(p-1)) | (1<<p))-1);

	return (n^num);	
	
}
	

	
