/*Develop a C program which accepts character type data item from user. In case if user typed 
‘A’ or ‘a’,it should display A for Apple 
‘B’ or ‘b’,it should display B for Bat
‘D’ or ‘d’,it should display D for Dog
‘F’ or ‘f’,it should display F for Fan
Instead of the above 4 characters, if user types any other character, it should display “Character is not in the range”.Implement this using if-else statement and switch statement.*/

#include<stdio.h>

int main()
{
	char ch;
	
	printf("\nEnter any character:");
	scanf("%c", &ch);
	
	if((ch == 'a') || (ch == 'A'))
	   ch = 'A';
 
	if((ch == 'b') || (ch == 'B'))
	   ch = 'B';

	if((ch == 'd') || (ch == 'D'))
	   ch = 'D';

	if((ch == 'f') || (ch == 'F'))
	   ch = 'F';	 

	switch (ch)
	 {
	   case 'A':printf("\nA for Apple\n\n");
		    break;
	   case 'B':printf("\nB for Bat\n\n");
		    break;
	   case 'D':printf("\nD for Dog\n\n");
		    break;
	   case 'F':printf("\nF for Fan\n\n");
		    break;
	   default :printf("\nCharacter is not in range\n\n");
		    break;
	 }  	
	return 0;
}


