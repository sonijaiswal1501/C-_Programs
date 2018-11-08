/*Write a menu driven C program to perform operations on Complex numbers. Use enumeration
data type to identify the different operations on Complex numbers.*/

#include<stdio.h>

void addition();
void subtraction();
void multiplication();

enum operation {add=1, sub, mul};
int main()
{
	enum operation choice;

	do
	{
	 printf("\n1.Addition of complex numbers");
	 printf("\n2.Subtraction of complex numbers");
	 printf("\n3.Multiplication of complex numbers");	 
	 printf("\n0.Exit");

	 printf("\nEnter the choice: ");
	 scanf("%d", &choice);

	 switch(choice)
	  {
	    case 1:addition(); break;		   

	    case 2:subtraction(); break;

	    case 3:multiplication(); break;
	    
	    case 0:break;

	    default:printf("Invalid Input");
	  }
	}while(choice>0); 

	return 0;
}

void addition()
{	
	int real1, img1, real2, img2, sum_real, sum_img;
	
	printf("\nEnter the first complex number: ");
 	scanf("%d+%di", &real1, &img1);

 	printf("\nEnter the second complex number: ");
 	scanf("%d+%di", &real2, &img2);

	sum_real = real1 + real2;
	sum_img = img1 + img2;

	printf("\nAddition of two complex numbers is: %d+%di\n\n", sum_real, sum_img);
}

void subtraction()
{
	int real1, img1, real2, img2, sub_real, sub_img;
	
	printf("\nEnter the first complex number: ");
 	scanf("%d+%di", &real1, &img1);

 	printf("Enter the second complex number: ");
 	scanf("%d+%di", &real2, &img2);

	sub_real = real1 - real2;
	sub_img = img1 - img2;

	printf("\nSubtraction of two complex numbers is: %d+%di\n\n", sub_real, sub_img);
}

void multiplication()
{
	int real1, img1, real2, img2, mul_real, mul_img;
	
	printf("\nEnter the first complex number: ");
 	scanf("%d+%di", &real1, &img1);

 	printf("Enter the second complex number: ");
 	scanf("%d+%di", &real2, &img2);

	mul_real = real1 * real2;
	mul_img = img1 * img2;

	printf("\nMultiplication of two complex numbers is: %d+%di\n\n", mul_real, mul_img);

}
	
