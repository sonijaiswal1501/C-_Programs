//Write a program to embed assembly language code in C program

#include<stdio.h>

int main()
{
	int a=3, b=2, c;
	
	__asm__
	(
	  "mov ax, a;"
	  "mov bx, b;"
	  "add ax, bx;"
	  "mov c, ax;"
	);

	printf("\nAddition of two numbers in assembly language code is %d\n", c);


	return 0;
}
