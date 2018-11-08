//Write a program to find whether given number is palindrome or not.


#include<stdio.h>

int main()
{
	int number, num, remainder, result=0;

	printf("\nEnter an integer number:");
	scanf("%d", &number);
	
	num = number;

	while(num > 0)
	 {
	   remainder = num%10;
	   result = result*10 + remainder;
	   num /= 10;
	 }
	
	if(number == result)
	  printf("\nThe %d is a Palindrom number.", number);
	else
	  printf("\nThe %d is not a palindrom number.", number);

	printf("\n");	

	return 0;
}

