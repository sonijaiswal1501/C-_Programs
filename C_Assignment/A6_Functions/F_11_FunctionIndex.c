/*Write a C program with a function indexr(s,t), which returns the index of right most occurrence
of t in s otherwise -1.*/

#include<stdio.h>
#include<string.h>

int indexr(char *, char, int);

int main()
{
	char s[20], t;
	int ind, size=0;

	printf("\nEnter a string(s) and character(t):");
	scanf("%s %c", s, &t);

	size = strlen(s);
	printf("\nSize of string is %d\n", size);

	ind = indexr(&s[0], t, size);
	
	printf("\nThe index of right most occurrence of t in s is %d\n", ind);

	return 0;
}

int indexr(char *s, char t, int size)
{
	int i, found=0;
	char str[20];

	for(i=0; i<=size; i++)
	 {
	   str[i] = *s;
	   *s++;
	 }

	for(i=size; i>1; i--)
	 {
	   if(str[i] == t)
              return i;
	 }
	
	return -1;
}

	
