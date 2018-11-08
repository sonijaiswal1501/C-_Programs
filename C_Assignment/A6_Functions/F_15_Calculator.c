/*Write a menu driven application that performs the functions of a calculator. The inputs from the
user should be validated and error messages in case, inputs are not valid, should be displayed of
multiplication, division, factorials (use recursion) and squares. Modularize the code wherever
possible.*/

#include<stdio.h>

void multiplication(int, int);
void division(int, int);
int factorial(int);
void squares(int);

int main()
{
	int n1, n2, n, choice, result=0;	

	do
	{
	 printf("\n1.Multiplication");
	 printf("\n2.Division");
	 printf("\n3.Factorials");
	 printf("\n4.Squares");
	 printf("\n0.Exit");

	 printf("\nEnter the choice: ");
	 scanf("%d", &choice);

	 switch(choice)
	  {
	    case 1:printf("\nEnter two numbers:");
		   scanf("%d%d", &n1, &n2);
		   multiplication(n1, n2); break;

	    case 2:printf("\nEnter two numbers:");
		   scanf("%d%d", &n1, &n2);
		   division(n1, n2); break;

	    case 3:printf("\nEnter the number:");
		   scanf("%d", &n);
		   result = factorial(n); 
		   printf("\nResult of factorial is %d\n", result);
		   break;

	    case 4:printf("\nEnter the number:");
		   scanf("%d", &n);
		   squares(n); break;

	    case 0:break;

	    default:printf("Invalid Input");
	  }
	}while(choice>0); 

	return 0;
}

void multiplication(int n1, int n2)
{	
	int result=0;

	result = n1*n2;
	printf("\nResult of multiplication is %d\n", result);
}

void division(int n1, int n2)
{
	float result=0;

	result = (float)n1/n2;
	printf("\nResult of division is %.2f\n", result);
}

int factorial(int n)
{
	if(n == 0)
	  return 1;
	else
	 return n*factorial(n-1);	
}

void squares(int n)
{
	int result=0;

	result = n*n;
	printf("\nResult of squre is %d\n", result);
}

