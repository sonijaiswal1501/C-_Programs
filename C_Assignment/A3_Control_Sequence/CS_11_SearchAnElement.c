//Write a program to search for an element in a given list of elements. Use break statement.

#include<stdio.h>

int main()
{
	int i, length, search, count, list[15]={1,4,5,8,10,13,15,19,20,25};

        length=sizeof(list);
	
	printf("\nElements in the list are:");
	for(i=0; i<10; i++)
	   printf("%d, ", list[i]);

	printf("\n");

	printf("\nEnter element to search: ");
	scanf("%d", &search);

	while(1)
	{
	  if(list[i]==search)
	   {
	     count++;
	     break;	
	    }
	  i++;
	}

	if(count==1)
	  printf("\n%d element is found in the list.", search);
	else
	  printf("\n%d element is not found in the list.", search);
	
	printf("\n");

	return 0;
}
