/*Write a program to count the number of ‘e’ in the following array of pointer to the string.
char * s [ ] = {“we will teach you how to “, “Move a mountain “, “Level a building “, “Erase the past “, “Make a million “ };.*/


#include<stdio.h>
#include<string.h>

int main()
{
	char search, *s[] = {"we will teach you how to", "Move a mountain", "Level a building", "Erase the past", "Make a million"};
	int i, j, length, count=0;

	

	for(i=0; i<5; i++)
	 {	  
	  length = strlen(*(s+i));
	  for(j=0; j<length; j++)	  
	   {	    
	    search = *(*(s+i)+j);
	    if(search == 'e')
		count++;   
	   }

	 }
	printf("\n'e' occured %d times in the array.\n\n", count);

	return 0;
}
