//Write a program to perform operations on complex numbers.

#include<stdio.h>

int main()
{
	int real1, img1, real2, img2, sum_real, sum_img, sub_real, sub_img, mul_real, mul_img;
	char ch; 	

	printf("\nEnter the first complex number: ");
 	scanf("%d+%di", &real1, &img1);

 	printf("Enter the second complex number: ");
 	scanf("%d+%di", &real2, &img2);
	
	//Program for addition on complex numbers
	sum_real = real1 + real2;
	sum_img = img1 + img2;
	
	printf("\nAddition of two complex numbers is: %d+%di", sum_real, sum_img);
	
	//Program for subtraction on complex numbers
	sub_real = real1 - real2;
	sub_img = img1 - img2;
	
	printf("\nSubtraction of two complex numbers is: %d+%di", sub_real, sub_img);
	
	//Program for multiplication on complex numbers
	mul_real = real1 * real2;
	mul_img = img1 * img2;
	
	printf("\nMultiplication of two complex numbers is: %d+%di\n\n", mul_real, mul_img);

        
	return 0;
}

  
