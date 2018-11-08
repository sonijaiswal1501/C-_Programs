/*Write a program in which define a as an unsigned integer whose value is (hexadecimal) 0xa2c3.
Write the corresponding bit pattern for this value. Then evaluate each of the following bitwise
expressions, first showing the resulting bit pattern and then the equivalent hexadecimal value.
Utilize the original value of a in each expression. Assume that a is stored in a 16-bit word
a)~a
b) a ^ 0x3f06
c) a | 0x3f06
p) a | ~0x3f06
e) a >> 3
f) a << 5
g) a ^ ~a
h) a | ~a
i) (a & ~0x3f06) << 8
j) (a & ~ 0x3f06) >> 8*/




#include<stdio.h>

int main()
{
	unsigned int a=0xa2c3, b=0x0000;
	b = ((~a) & 0x0000ffff);
	
	printf("\nValue of the unsigned integer a =  0x%x\n", a);	
	printf("\na) Value of the unsigned integer ~a = 0x%x ", b);
	printf("\nb) Value of the unsigned integer a ^ 0x3f06 = 0x%x ", a ^ 0x3f06);
	printf("\nc) Value of the unsigned integer a | 0x3f06 = 0x%x ", a | 0x3f06);
	printf("\nd) Value of the unsigned integer a | ~0x3f06 = 0x%x ", a | ~0x3f06);
	printf("\ne) Value of the unsigned integer a >> 3 = 0x%x ", a >> 3);
	printf("\nf) Value of the unsigned integer a << 5 = 0x%x ", a << 5);
	printf("\ng) Value of the unsigned integer a ^ ~a = 0x%x ", a ^ b);
	printf("\nh) Value of the unsigned integer a | ~a = 0x%x ", a | b);
	printf("\ni) Value of the unsigned integer (a & ~0x3f06) << 8 = 0x%x ", (a & ~0xffff3f06) << 8);
	printf("\nj) Value of the unsigned integer (a & ~ 0x3f06) >> 8 = 0x%x \n",(a & ~ 0xffff3f06) >> 8);
	
	return 0;
}
