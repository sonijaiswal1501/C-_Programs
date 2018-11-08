/*A C program contains the following declaration
int x[8]= {10,20,30,40,50,60,70,80};
What is the meaning of x?
What is the meaning of (x+2)?
What is the value of *x?
What is the value of (*x+2)?
What is the value of *(x+2)?.*/

#include<stdio.h>


int main()
{
	int x[8]= {10,20,30,40,50,60,70,80};

	printf("\nMeanig of x = %p", x);
	printf("\nMeanig of (x+2) = %p", (x+2));	

	printf("\nValue of *x= %d",  *x);
	printf("\nValue of (*x+2) = %d", (*x+2));
	printf("\nValue of *(x+2) = %d", *(x+2));
	
	return 0;

}
