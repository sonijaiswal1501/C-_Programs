//Write a Program to find if a given number is Armstrong number.Hint: (153 = 1^3 + 5^3 + 3^3)

#include<stdio.h>

int main()
{
	int number, num, remainder, result=0;

	printf("\nEnter the three digit integer number:");
	scanf("%d", &number);
	
	num = number;

	while(num > 0)
	 {
	   remainder = num%10;
	   result += remainder*remainder*remainder;
	   num /= 10;
	 }
	
	if(number == result)
	  printf("\nThe %d is an Armstrong number.", number);
	else
	  printf("\nThe %d is not an Armstrong number.", number);

	printf("\n");	

	return 0;
}

