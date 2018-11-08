/*Write a C program that will illustrate the equivalence between
a) Shifting a binary number to the left n bits and multiplying the binary number by 2n
b) Shifting a binary number to the right n bits and dividing the binary number by 2n.
Choose the initial binary number carefully, so that bits will not be lost as a result of the shifting
operation.*/

#include<stdio.h>

int leftshift(int n, int b);
int rightshift(int n, int b);
int itob(int );

int main()
{
	int n, b, answer=0, lresult=0, rresult=0;

	printf("\nEnter the number= n and bits= b : ");
	scanf("%d%d", &n, &b);

	lresult = leftshift(n, b);
	//rresult = rightshift(n, b);

	//printf("\nShifting a binary %d to the left %d bits is %d\n", lresult, rresult);

	return 0;
}

int leftshift(int n, int b)
{
	int ans=0, num=0, a=0;
	
	num= itob(n);
	a = itob(2*n);
	ans = num<<b;
	ans= (ans)*(a);
	printf("\nShifting a binary %d \n", a);
	
	return ans;
}
int rightshift(int n, int b)
{
	int ans=0, num=0, count=0;
	
	num= itob(n);
	num = num<<b;	
	
	return ans;
}

int itob(int num)
{
	if(num == 0)
	   return 0;
	else
           return (num%2 + 10*itob(num/2));
}	
