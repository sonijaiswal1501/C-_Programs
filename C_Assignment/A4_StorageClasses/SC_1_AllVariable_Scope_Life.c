/*1. Develop multi file program to understand static, auto, register, global, static global variables.What
is the scope and lifetime of each of these types of variables.*/

#include<stdio.h>

extern int s;
int fun(void);
int z=10;		//Declaring and intializing a global variable z 

int main()
{
	auto int a=32, x=5;		//Declaring and intializing an auto variable

	register char b='G';		//Declaring and intializing a register variable	
	
	

	printf("\nMulti file program for variable, it's scope & it's lifetime:\n\n ");

	printf("\nThis is the value of the auto integer 'a': %d, %d\n", a, x);

	printf("\nThis is the value of the Global variable 'z' = %d\n",z);
	
	printf("\nThis is the value of the register character 'b': %c\n", b);

	printf("\nThis is the value of the extern variable 's': %d\n", s);
	
	z=5;		//Value of globle variable z is modified


	printf("\nThe modified value of 'z' %d\n", z);
		

	printf("\nThe the value of y is %d\n", fun());
	return 0;
}

int fun(void)
{
	static int y=0;

	while(z>0)	
	 {
	   
	   y++;
	   z--;
	 }
	return y;
	
}
	

	
	
