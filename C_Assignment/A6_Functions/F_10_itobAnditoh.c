/*Write a C program with two functions itob (n, s) and itoh (n, s). itob converts integer into binary
character representation in s. Similarly itoh converts integer into hexadecimal character
representation in s.*/

#include<stdio.h>

int itob(int);
void itoh(int);

int main()
{
	int number, hex_result=0, bin_result=0;
	
	printf("\nEnter the number: ");
	scanf("%d", &number);

	bin_result = itob(number);	
	printf("\nBinary Conversion of %d is %d", number, bin_result);

	itoh(number);

	return 0;
}

int itob(int num)
{
	if(num == 0)
	   return 0;
	else
           return (num%2 + 10*itob(num/2));
}
void itoh(int num)
{
	int i=0, j, number, remainder=0; 
	char hexa_num[100];

	number = num;
	while(num > 0)
	 {
	   remainder = num%16;
	   if(remainder < 10)
	      remainder = 48 + remainder;
	   else
	      remainder = 55 + remainder;

	   hexa_num[i++] = remainder;
	   num /= 16;
	 }

	printf("\nHexadecimal Conversion of %d is ", number);
	for(j=i-1; j>=0; j--)
	  printf("%c", hexa_num[j]);
	printf("\n\n");
	
}
