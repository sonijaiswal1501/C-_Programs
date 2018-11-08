//Develop a program to calculate nPr(Permutation=n!/(n-r)!) and nCr(Combination=n!/r!*(n-r)!) given n and r.

#include<stdio.h>

int fact(int);
int permutation_nPr(int, int);


int main()
{
	int n, r, result_nPr=0, result_nCr=0;

	printf("\nEnter the two values of n & r: ");
	scanf("%d%d", &n, &r);

	result_nPr = permutation_nPr(n,n-r);
	result_nCr = result_nPr/fact(r);

	printf("\nCalculated permutation(nPr) for n=%d and r=%d is %d", n, r, result_nPr);
	printf("\nCalculated combination(nCr) for n=%d and r=%d is %d\n", n, r, result_nCr);

	return 0;
}

int fact(int x)
{
	if(x<2)
	  return 1;
	else
	  return fact(x-1)*x;
}

int permutation_nPr(int x, int y)
{
	int result1;
	
	result1 = fact(x)/fact(y);

	return result1;
}


