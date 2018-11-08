//Write a function to get the transpose of a matrix.


#include<stdio.h>

void trans_mat(int *, int, int);


int main()
{
	int i, j, rows, columns, value=0;

	printf("\nEnter the values of rows and columns: ");
	scanf("%d%d", &rows, &columns);
	
	int matrix[rows][columns];

	printf("\nEnter the elements: ");

	for(i=0; i<rows; i++)
	 {
	  for(j=0; j<columns; j++)
	   {
	     scanf("%d", &value);
	     matrix[i][j] = value;
	   }
	 }	      
		
	printf("\nEntered elements are\n");

	for(i=0; i<rows; i++)
	 {
	  for(j=0; j<columns; j++)
	      printf("%d\t", matrix[i][j]);
	  printf("\n");
	 }

	printf("\nTransposed matrix is \n");

	trans_mat(&matrix[0][0], rows, columns);	

	return 0;
}

void trans_mat(int *a, int m, int n)
{
	int i, j, matrix[m][n], trans[n][m];	

	for(i=0; i<m; i++)	 
	  for(j=0; j<n; j++)	           
	     matrix[i][j] = *a++;	  
	 
	for(i=0; i<n; i++)
	 {
	  for(j=0; j<m; j++)
	   { 
	     trans[i][j] = matrix[j][i];
	     printf("%d\t", trans[i][j]);	    	
	   }
	  printf("\n");
	 }	
}

 

