//Write a program to find whether the given processor is little endian or big endian.

#include<stdio.h>

int main()
{
	unsigned int i=0x12345678;
		
	
	  printf("\nLittle endian %d \n", (*(char *)&i == (0x78) ? 1:0));
	

	return 0;	
}






/*unsigned int i=1;
	char *c = (char*)&i;
	
	if(*c)
	  printf("\nLittle endian\n");
	else
	  printf("\nBig endian\n");

	return 0;	*/
