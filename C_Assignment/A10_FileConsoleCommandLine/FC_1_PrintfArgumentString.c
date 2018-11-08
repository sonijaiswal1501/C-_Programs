/*Experiment to find out what happens when printf argument string contains \x, where x is some
character (a, b, c, \, ^ etc). What are your observations.*/

#include<stdio.h>

int main(int argc, char *argv[])
{
	
	printf("\nHello World\a");
	printf("\nHello World\b");
	printf("\nHello World\c");
	printf("\nHello World\^\n");
	
	return 0;
}
