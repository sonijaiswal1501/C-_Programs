/*Use scanf function to read a string of characters (into character type array called text) including
alphabets, digits, blanks, tabs etc except new line character. Write a loop that will examine each
character in a character-type array and determine how many of the characters are letters, how
many are digits, how many are blanks and how many are tabs. Assume that text contains 80
characters.*/

#include<stdio.h>


int main()
{
	char char_arr[80];
	int i=0,length, value=0, digit=0, letter=0, space=0;

	printf("\nEnter any string of characters: ");	
	scanf("%[^\n]s", char_arr);

	while(char_arr[i]!='\0')
	 {	   	   
	   if((char_arr[i]>='A') && (char_arr[i]<='Z') || (char_arr[i]>='a') && (char_arr[i]<='z'))
               letter++;

	   else if((char_arr[i]>='0') && (char_arr[i]<='9'))
	      digit++;

	    else if(char_arr[i]==' ') 
              space++;

	   i++;
	  }

	printf("\nTotal numbers of letters are %d", letter);

	printf("\nTotal numbers of digits are %d", digit);

	printf("\nTotal numbers of spaces are %d", space);

	printf("\n");

	return 0;
}
