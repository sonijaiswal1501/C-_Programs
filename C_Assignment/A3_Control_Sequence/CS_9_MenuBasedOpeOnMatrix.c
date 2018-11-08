//Write a menu based C program to perform operations (+,-and *) on matrices

#include<stdio.h>



int main()
{
	int i, j, k, choice, m=2,n=2, sum=0;
	int first[2][2] = {5,6,7,8}, second[2][2] = {1,2,3,4}, result1[2][2],
	result2[2][2], result3[2][2];
	
	lable:
	do
	 {
	   printf("\nEnter the choice :");	   
	
	   printf("\n 1 for Addition of two matrix");
	   printf("\n 2 for Subtraction of two matrix");
	   printf("\n 3 for Multiplication of two matrix");
	   printf("\n 0 for Exit");
	   printf("\n");

	   scanf("%d", &choice);
	   if(choice != 0)	
	      break;
	
	}while(choice > 0);

	 switch(choice)
	  {
	   case 0:break;

	   case 1://program for addition of two matrices
		for(i=0; i<m; i++)
		 {
		   for(j=0; j<n; j++)
		    {
		      sum = 0;
		      sum = first[i][j]+second[i][j];	      
		      result1[i][j] = sum;   
		     }
		  }
		printf("Addition of two matrices:-\n");

		for(i=0; i<m; i++)               
		 {
		   for(j=0; j<n; j++)
		      printf("%d\t", result1[i][j]);

		    printf("\n");
		  }
	         goto lable;
		 break;

	   case 2://program for subtraction of two matrices
		for(i=0; i<m; i++)
		 {
		   for(j=0; j<n; j++)
		    {
		      sum = 0;
		      sum = first[i][j] - second[i][j];	      
		      result2[i][j] = sum;   
		     }
		  }
		printf("Subtraction of two matrices:-\n");

		for(i=0; i<m; i++)               
		 {
		   for(j=0; j<n; j++)
		      printf("%d\t", result2[i][j]);

		    printf("\n");
		  }
	         goto lable;
		 break;

	   case 3://program for multiplication of two matrices
		for(i=0; i<m; i++)
		 {
		   for(j=0; j<n; j++)
		    {
		      for(k=0; k<n; k++)
			sum = sum + first[i][k] * second[k][j];
		      		      
		      result3[i][j] = sum;
		      sum = 0;
		     }
		  }
		printf("Multiplication of two matrices:-\n");

		for(i=0; i<m; i++)
		 {
		   for(j=0; j<n; j++)
		      printf("%d\t", result3[i][j]);

		    printf("\n");
		  }
	         goto lable;
		 break;
	
	   default:printf("Invalid Input");
		   goto lable;
		   break;
	 }
	
	return 0;
	
}
