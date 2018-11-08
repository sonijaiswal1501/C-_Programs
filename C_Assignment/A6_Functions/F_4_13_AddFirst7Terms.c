/*Write a program to add first seven terms of the following series:
1 / 1! + 2 / 2! –3 /3! + 4 / 4! . . .*/

#include<stdio.h>

int fact(int);

int main()
{
	int i, num; 
	float number=1, result=0, result1=0, result2=0;

	printf("Enter to add first n terms of the series:");
	scanf("%d", &num);
	
	if(num > 1)
	 {
	  for(i=2; i<=num; i++)
	  {
	   number=i;
	   if(i%2 == 0)
	     result1 += number/fact(i);
	   else
	     result2 -= number/fact(i);
	  }
	 }

	result = 1 + result1 + result2;

	printf("\nOutput of first %d terms of the series %.2f \n", num, result);	

	return 0;
}
int fact(int n)
{
	if(n<2)
	   return 1;
	else
	   return n*fact(n-1);
}

