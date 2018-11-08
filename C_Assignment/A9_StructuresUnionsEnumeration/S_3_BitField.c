/*Define a structure declaration for each of the following situations. Assume a 16-bit integer word
a) Define three bit fields, called a, b and c, whose widths are 6-bits, 4-bits and 6-bits,
respectively
b) Declare a structure-type variable v having the composition defined in part (a) above. Assign
initial values 3, 5 and 7 respectively, to the three bit fields. Are the bit fields large enough to
accommodate these values?
c) What are the largest values that can be assigned to each of the bit fields defined in part (a)
above?
d) Define three bit fields, called a, b and c, whose widths are 8 bits, 6 bits and 5 bits,
respectively. How will these fields be stored within the computer’s memory?
e) Define three bit fields, called a, b and c, whose widths are 8 bits, 6 bits and 5-bits respectively.
Separate a and b with 2 vacant bits.*/

#include<stdio.h>

struct bitfield1{
	short unsigned int a:6;
	short unsigned int b:4;
	short unsigned int c:6;
};
struct bitfield2{
	short unsigned int a:8;
	short unsigned int b:6;
	short unsigned int c:5;
};
int main()
{
	struct bitfield1 v = {3, 5, 7};

	printf("a) size of %lu",sizeof(v));

	printf("\nb.1) a.Value of a= %d, b= %d, c= %d\n", v.a, v.b, v.c);

	printf("b.2)size of %d",sizeof(v));

	printf("\nc) The largest values that can be assigned to each of the bit fields defined in part (a) are a.Value of a= %d, b= %d, c= %d\n", 63, 15, 63);
	
	struct bitfield2 w = {q, 5, 7};




	return 0;
}
