/*Write a program to read n number of strings and display them on the screen. Use array of
pointers and dynamic memory allocation techniques.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, n;

	printf("\nEnter n number:");
	scanf("%d", &n);

	char *s[n];

	printf("\nEnter the strings :");
	for(i=0; i<n; i++)
           {
	     s[i] = malloc(sizeof(char)*20);
             scanf("%s", s[i]);
           }

	
	printf("\nEntered  elements are : \n");
	for(i=0; i<n; i++)                       
             puts(s[i]);
	
	printf("\n\n");	

	return 0;
}
