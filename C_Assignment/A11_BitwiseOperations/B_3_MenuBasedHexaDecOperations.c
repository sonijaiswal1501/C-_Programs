/*Write a C program that will accept a hexadecimal number as input, and then display a menu
that will permit any of the following operations to be carried out
a) Display the hexadecimal equivalent of the one’s complement
b) Carry out a masking operation and then display the hexadecimal equivalent of the result
c) Carry out a bit shifting operation and then display the hexadecimal equivalent of the result
d) Exit
If the masking operation is selected, prompt the user for the type of operation (bitwise and,
bitwise exclusive or, or bitwise or) and then a (hexadecimal) value for the mask. If the bit
shifting operation is selected, prompt the user for the type of shift (left to right), and then the
number of bits.*/

#include<stdio.h>


int main()
{	
	unsigned int number, b; 
	int choice;	
	
	do
	{
	  printf("\n1.One's complement");
	  printf("\n2.Masking operations");
	  printf("\n3.Bit shifting operation");	 
	  printf("\n0.Exit");

	  printf("\nEnter the choice: ");
	  scanf("%d", &choice);

	  switch(choice)
	   {
	     case 1: printf("\nEnter the Hexadecimal number : ");
	  	     scanf(" 0x%x", &number); 
		     number = ~number;
		     printf("\nHexadecimal equivalent of one's complement is 0x%x\n", number);
		     break;

	     case 2: printf("\nEnter the Hexadecimal number : ");
	  	     scanf(" 0x%x", &number);
		     number = ((~number) & 0x0000ffff);
		     printf("\nAfter masking number is 0x%x\n", number);
		     break;

	      case 3: printf("\nEnter the Hexadecimal number and left shifting bits: ");
	  	     scanf(" 0x%x%d", &number, &b);
		     number = number<<b;
		     printf("\nAfter %d Bit left shifting number is 0x%x\n", b, number);
		     break;

	      case 0: break;
	     
              default: printf("\nInvalid Input\n");
	    }

	 }while(choice != 0);


	return 0;
}


