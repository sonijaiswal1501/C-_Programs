//Write a program to count number of bits as “1” in an 8 bit number.

#include<stdio.h>

int main()
{
	unsigned int number;
	int count=0;
	
	printf("\nEnter the unsigned integer : ");
	scanf("%d", &number);

	while(number != 0)
	 {
	   if((number & 1) == 1)
	     count++;
	   number = number >> 1;
	 }

	printf("Number of one's are : \n%d\n", count);

	return 0;
}
