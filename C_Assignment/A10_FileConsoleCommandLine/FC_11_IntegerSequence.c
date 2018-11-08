/*Read a positive integer value, and compute the following sequence: If the number is even, halve
it; if it's odd, multiply by 3 and add 1. Repeat this process until the value is 1, printing out each
value. Finally print out how many of these operations you performed.
Typical output might be:
Inital value is 9
Next value is 28
Next value is 14
Next value is 7
Next value is 22
Next value is 11
Next value is 34
Next value is 17
Next value is 52
Next value is 26
Next value is 13
Next value is 40
Next value is 20
Next value is 10
Next value is 5
Next value is 16
Next value is 8
Next value is 4
Next value is 2
Final value 1, number of steps 19If the input value is less than 1, print a message containing the word
Error
and perform an exit( 0 );*/

#include<stdio.h>

int main()
{
	int number, count=0;

	printf("\nEnter the number : ");
	scanf("%d", &number);

	while(number != 1)
	 {
	   if(number < 0)
	    {
	      printf("\nError\n");
	      goto lable;
	    }

	   if(number == 0)
	      break;

	   else if(number < 1)
	     printf("Error");

	   else 
	    {
	      if(number%2 == 0)
	       {
		number = number/2;
		count++;
	       }
	      else
	       {
		number = number*3 + 1;
		count++;
	       }
	    }
	   printf("\nNext value is %d", number);
	 } 
	
	printf("\nNumber of steps %d\n", count);

	lable:

	return 0;
}

