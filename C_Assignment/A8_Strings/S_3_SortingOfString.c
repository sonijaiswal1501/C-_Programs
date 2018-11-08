/*Write a program to read n number of strings using two-dimensional character array, sort them
and display the sorted list of strings on the screen.*/

#include<stdio.h>
#include<string.h>

int main()
{
	int i, j, n;
	char s[10][8], tname[10][8], temp[8];

	printf("Enter value of n: ");
	scanf("%d", &n);	

	printf("\nEnter the names : %d\n", n);
	for(i=0; i<n; i++)
	 {
	   scanf("%s", s[i]);
	   strcpy(tname[i], s[i]);
	   printf("\n");	
	 }	 
       
	for(i=0; i<n-1; i++)
          {
	    for(j=i+1; j<n; j++)
	    {
	      if (strcmp(s[i], s[j]) > 0)
                 {
		  strcpy(temp, s[i]);
                  strcpy(s[i], s[j]);	
	          strcpy(s[j], temp);    
	         }                 
 	     }
         }

	printf("\nSorted strings are ");
	   
            for(i=0; i<n; i++)                       
               printf("\n%s\t\t%s\n", tname[i], s[i]);

	return 0;

}



	

	


