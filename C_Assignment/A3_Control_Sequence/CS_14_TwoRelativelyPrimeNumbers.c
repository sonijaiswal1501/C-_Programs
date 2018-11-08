//Write a C program to generate two Relatively Prime numbers.

#include<stdio.h>

int main()
{
	int no1, no2, temp;

        printf("\nEnter two numbers such that first is greater than the other: ");
	scanf("%d%d", &no1, &no2);

	printf("\n");

	while(temp!=0)
	 {
 	  temp=no1%no2;
	  no1=no2;
	  no2=temp;
	 }

	if(no1 == 1)
	   printf("Numbers are relatively prime number");
	else
	   printf("Numbers are not relatively prime number");
	
	printf("\n");

	return 0;
}
