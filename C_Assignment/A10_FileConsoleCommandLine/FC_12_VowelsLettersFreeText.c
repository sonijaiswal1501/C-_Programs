/*Write a program to count the vowels and letters in free text given as standard input. Read text a
character at a time until you encounter end-of-data. Then print out the number of occurrences
of each of the vowels a, e, i, o and u in the text, the total number of letters, and each of the vowels
as an integer percentage of the letter total.
Suggested output format is:
Numbers of characters:a 3 ; e 2 ; i 0 ; o 1 ; u 0 ; rest 17
Percentages of total:a 13%; e 8%; i 0%; o 4%; u 0%; rest 73%
Read characters to end of data using a construct such as char ch;
while(( ch = getchar() ) >= ) {
/* ch is the next character */ /*....} to read characters one at a time using getchar() until a negative value is returned.*/

#include<stdio.h>
#include<string.h>


int main()
{
	char c;
	int count[] = {0,0,0,0,0,0}, sum =0, i=0;
		
	printf("\nEnter the string: ");
	while(((c = getchar()) != '\n') && (c != EOF))
	{
	  i++;
	  if(c == 'a')
	  {
	    count[0]++;
	    sum++;
	  }
	  else if(c == 'e')
	  {
	    count[1]++;
	    sum++;
	  }
	  else if(c == 'i')
	  {
	    count[2]++;
	    sum++;
	  }
	  else if(c == 'o')
	  {
	    count[3]++;
	    sum++;
	  }
	  else if(c == 'u')
	  {
	    count[4]++;
	    sum++;
	  }
	  else
	   ;
	}

	printf("\na %d; e %d; i %d; o %d; u %d; rest %d.\n", count[0], count[1], count[2], count[3], count[4], i-sum);

	printf("\nPercentages of total : a %d%%; e %d%%; i %d%%; o %d%%; u %d%%; rest %d%%.\n", (count[0]*100)/i, (count[1]*100)/i,     	(count[2]*100)/i, (count[3]*100)/i, (count[4]*100)/i, ((i-sum)*100)/i);

	return 0;
}
