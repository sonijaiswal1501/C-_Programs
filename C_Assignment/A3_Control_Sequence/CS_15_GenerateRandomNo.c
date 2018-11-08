/*Write a program to generate Random number
1) Any
2) Prime number
3) Two Relatively Prime Numbers*/

#include<stdio.h>
#include<stdlib.h>

int random1(void);

int main()
{
	int short i, j, flag, num = 0, temp=0, num1 = 0, num2 = 0;
	
	num = random1();
	printf("\nPrint the value of random number:%d\n", num);
	
	
      	//Check random number is prime number or not 
	flag=0;
	for(i=2; i<=num; i++)
	  if(num%i==0)
             flag++;	
	
	if(flag==1)
	   printf("%d is Prime number.", num);
	else
	   printf("%d is not Prime number.", num);
	printf("\n");
	
	//Check numbers are relatively prime number or not 
	num1 = random1();
	
	num2 = random1()+21;

	while(temp!=0)
	 {
 	  temp = num1 % num2;
	  num1 = num2;
	  num2 = temp;
	 }

	if(num1 == 1)
	   printf("%d and %d are relatively prime number", num1, num2);
	else
	   printf("%d and %d are not relatively prime number", num1, num2);
	printf("\n");

	return 0;
} 

int random1(void)
{
	unsigned int a, r;

	a = (unsigned int)malloc(sizeof(unsigned int)*50);

	r=a%90;

	//free(a);

	return r;
}

