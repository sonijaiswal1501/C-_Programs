/*Develop a C program to calculate simple interest using the formula I=PTR/100. Display Interest
with two digit precision after decimal point*/

#include<stdio.h>

int main()
{
	float principle, time, rate, si=0;

	printf("\nEnter principle, time, rate:");
	scanf("%f%f%f", &principle, &time, &rate);
	

	si = (principle*rate*time)/100;	

	printf("\nThe simple interest is %.2f", si);
	printf("\n");	

	return 0;
}

