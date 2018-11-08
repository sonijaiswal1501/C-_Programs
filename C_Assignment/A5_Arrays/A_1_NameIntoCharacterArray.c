/*Write a program to read your name into a character array. Print the name along with the length
of your name and sizeof the array in which name is stored.*/

#include<stdio.h>

int main()
{
	int i=0, size=0, length=0;
	char arr_name[20]={'S','O','N','I','S','N','E','H','A'};

	length=sizeof(arr_name);

	printf("\nName is ");

	while(arr_name[size] !='\0')
	  size++;	 

	for(i=0; i<size; i++)
	 printf("%c", arr_name[i]);

	printf("\nLength of name is %d", length);

	printf("\nSize of the array is %d", size);

	printf("\n");

	return 0;
}
