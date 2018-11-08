/*Write a program to read English text to end-of-data (type control-D to indicate end of data at a terminal, see below for detecting it), and print a count of word lengths, i.e. the total number of words of length 1 which occurred, the number of length 2, and so on.
Define a word to be a sequence of alphabetic characters. You should allow for word lengths up to 25 letters. Typical output should be like this:
length 1 : 10 occurrences
length 2 : 19 occurrences
length 3 : 127 occurrences
length 4 : 0 occurrences
length 5 : 18 occurrences
....*/

#include<stdio.h>
#include<string.h>

int main()
{
	char s[50], *ptr;
	static int occ[26], count, i;

	printf("\nEnter the string: ");
	scanf("%[^\n]s", s);
	//gets(s);
	ptr = s;

	while(*ptr != '\0')
	{
	  if(*ptr != ' ')
	  {
	    count++;
	    ptr +=1;
	  }
	  else
	  {
	   for(int j=1; j<25; j++)
	   {
	     if(j == count) 
		occ[j]++;
	   }
	   ptr +=1;
	   count = 0;
	  }
	}
	for(int j=1; j<25; j++)
	{
	   if(j == count) 
	     occ[j]++;
	}
	for(int j=1; j<25; j++)
	   printf("\nWord of length %d occured %d times.\n", j, occ[j]);

	return 0;
}



