/*Write a program to read a positive integer at least equal to 3, and print out all possible
permutations of three positive integers less or equal to than this value.*/

#include<stdio.h>
#include<string.h>

void swap(char *, char *);
void permute(char *, int , int );

int main()
{
	char str[] = "ABC";
	int n = strlen(str);
	
	printf("\nString is %s\n", str);
	permute(str, 0, n-1);

	return 0;
}

void permute(char *a, int l, int r)
{
	int i;

	if(l == r)
	  printf("%s\n", a);
	else
	 {
	   for(i=1; i<=r; i++)
	    {
	      swap((a+l),(a+i));
	      permute(a, l+2, r);
	      swap((a+1), (a+i));
	    }
         }
}
void swap(char *x, char *y)
{
	char temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

/*#include<stdio.h>

int fact(int num)
{
	if(num<2)
	   return 1;
	else
	   return num*fact(num-1);
}

int main()
{
	int i, j, val;

	printf("\nEnter a value ");
	scanf("%d", &val);
	
	if(val <= 3)
	{
	  printf("\nThe value is less than or equal to 3, thus all permutation are : \n");
	  for(i=3; i>=1; i--)
	   {
	     printf("\nFor %d\n", i);
	     for(j=i; j>=1; j--)	   
	        printf("\nWith r=%d, %.2f\n", j, fact(i)/fact(i-j));
	   }
	}
	else
	{
	  printf("\nAll permutation are : \n");
	  for(i=val; i>=val-2; i--)
	   {
	     printf("\nFor %d\n", i);
	     for(j=i; j>=1; j--)	   
	        printf("\nWith r=%d, %.2f\n", j, fact(i)/fact(i-j));
	   }
	}

	return 0;
}		
	  
*/


