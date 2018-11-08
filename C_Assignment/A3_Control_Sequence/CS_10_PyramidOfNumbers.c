/*Generate the following pyramid of numbers using nested loops
    1
   212
  32123
 4321234
543212345*/

#include<stdio.h>

int main()
{
	int i, j, k, l, rows;

	printf("Enter the number of rows: ");
	scanf("%d", &rows);

	for(i=1; i<=rows; i++)
	 {
	   for(j=rows; j>=i; j--)
              printf(" ");
	    
	   for(k=i; k>=1; k--)
              printf("%d", k);
            
           for(l=2; l<=i; l++)
              printf("%d", l);
            
           printf("\n");
         }

       return 0;
}


	
