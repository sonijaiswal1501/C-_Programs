//Write a program to print all the prime numbers in the first N numbers.

#include<stdio.h>

int main()
{
	int n,i,j, flag;

        printf("\nEnter a number: ");
	scanf("%d", &n);

	printf("\n");
	printf("All the prime numbers are ");

	for(i=2; i<=n; i++)
	{
	  flag=0;
	  for(j=2; j<=i; j++)
	  {
	    if(i%j==0)
              flag++;
	   }
	
	  if(flag==1)
	     printf("%d, ", i);
	 }
	
	printf("\n");

	return 0;
}
