/*Write a program to print out all rotations of a string typed in. For eg:if the input is “Space”, the
output should be: space paces acesp cespa espac.*/


#include<stdio.h>
#include<string.h>

int main()
{
	char str[20], temp;
	int length=0, i, j;
	
	printf("\nEnter the string :\n");
	scanf("%s", str);

	length = strlen(str);

	for(i=0; i<length-1; i++)
	 {
	  for(j=0; j<=length; j++)
           {
	    if(j == 0)
	     {
	       temp = str[0];
	       str[0] = str[j+1];
	     }	   
	    else if(j == length-1 )
	   	str[length-1] = temp;	  
	    else 
	       str[j]=str[j+1];	   
	   }
	  printf("\n%s\n\n", str);
	 }

	return 0;
}
