//Write a program to compute factorial and GCD using recursion.

#include<stdio.h>

int fact(int);
int gcd(int, int);

int main()
{
	int num, n1, n2, fact_result=0, gcd_result=0;

	printf("\nEnter the number for factorial ");
	scanf("%d", &num);

	fact_result = fact(num);	

	printf("\nFactorial of %d is %d", num, fact_result);

	printf("\nEnter the the two numbers for GCD: ");
	scanf("%d%d", &n1, &n2);

	gcd_result = gcd(n1, n2);

	printf("\nGCD of %d and %d : %d\n", n1, n2, gcd_result);

	return 0;
}

int fact(int num)
{
	if(num<2)
	   return 1;
	else
	   return num*fact(num-1);
}

int gcd(int a, int b)
{

	while(a != b)
	 {
	  if(a >b)
	    return gcd(a-b, b);
	  else
	    return gcd(a, b-a);
	 }
}

