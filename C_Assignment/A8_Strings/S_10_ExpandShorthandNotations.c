/*Write a function expand (s1, s2) which expands shorthand notations of s1 like a-d into abcd and
0-9 to 0123456789 in s2. For example if the string in s1 is 0123a-e1-4 then s1 is expanded in s2to 0123abcde1234.*/


#include<stdio.h>
#include<string.h>


int main()
{
	void expand(char *, char *);

	char s1[20], s2[50];

	printf("\nEnter the first string s1 : ");
	scanf("%s", s1);

	expand(s1, s2);
	printf("\nThe string in s1 is %s\n s1 is expanded in s2 to %s\n", s1, s2);

	return 0;
}

void expand(char *str1, char *str)
{	
	int ch=0,i=0, l=0, k=0;
	
		
	while(str1[i] != '\0')	
	{  	
	  if(str1[i] == '-' )
	   {		  
	    for(l=1; ch != (str1[i+1]-1); l++,k++)
	      {
		ch = (int)str1[i-1]+l;
		str[k] = ch;		
	      }	
	    }
	   else
	   {
	     str[k] = str1[i];	
	     k++;
	   }
	 i++;
	}
	
}
	  


		  
