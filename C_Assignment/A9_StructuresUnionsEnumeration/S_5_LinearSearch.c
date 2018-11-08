/*Write a program to search for a given element in a list of elements using Linear Search. Use flag
to represent the status of search. Define flag as an enumeration variable whose value is either
true or false.*/

#include<stdio.h>

enum flag{false,true};

int main()
{
	int i, n, search, flag=0;
	

	printf("\nEnter the number of elements : ");
	scanf(" %d", &n);

	int arr[n];

	printf("\nEnter the elements : ");
	for(i=0; i<n; i++)
	scanf("%d", &arr[i]);

	printf("\nEnter the element you want to search : ");
	scanf(" %d", &search);

	for(i=0; i<n; i++)
	 {
          if(arr[i] == search)
             flag = true;
	  else
             flag = false;
	 }

	if(flag == false)
	   printf("\nSearching element is not found...\n\n");
	else
	    printf("\nSearching element is found...\n\n");
	return 0;
}
