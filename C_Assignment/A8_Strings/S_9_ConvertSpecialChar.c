/*Write a function expand (s, t) which converts characters like newline and tab into visible escape
sequences like \n and \t as it copies the string s to t. Use switch statement and also display both
s and t at the end*/


#include<stdio.h>
#include<string.h>

void expand(char *, char *);

int main()
{
	char t[20], s[20];

	printf("\nEnter the first string : ");
	scanf("%[^.]s", s);	

	printf("\nGiven string : %s\n", s);

	strcpy(t, s);
	expand(s, t);

	return 0;
}

void expand(char *s, char *t)
{
	int i=0, j=0;
	
	printf("\nModified string : ");
	while(s[i] != '\0')
	 {
	  if(s[i] == '\t') 
	   {
	     printf("\\t");
	     i++;
	   }

	  if(s[i] == '\n')
	   {
	     printf("\\n");
	     i++;
	   }

	  t[j] = s[i];
	  printf("%c", t[j]);
	  i++;
	  j++;
	 }
	printf("\n");
}
