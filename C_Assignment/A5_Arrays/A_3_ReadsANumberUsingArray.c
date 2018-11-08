/*Write a program that reads a number that says how many integer numbers are to be stored in
an array, creates an array to fit the exact size of the data and then reads in that many numbers
into the array.*/

#include<stdio.h>

int main()
{
	int i, size;
	
	printf("\nEnter the size of an array: ");
	scanf("%d", &size);
	
	int num_arr[size];
	
	printf("\nEnter the elements of array ");
	for(i=0; i<size; i++)
	   scanf("%d", &num_arr[i]);

	printf("\nData of array are ");
	for(i=0; i<size; i++)
	   printf("%d, ", num_arr[i]);
	printf("\n");

	return 0;
} 
