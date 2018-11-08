//Write a Program to implement strtok library function.


#include<stdio.h>
#include<string.h>


int main()
{
	char str[]= "soni-and-sneha";

	char *token = strtok(str, "-");

	while(token>0)
	 {
	   printf("%s\n", token);
	   token = strtok(NULL, "-");
	 }

	return 0;
}
