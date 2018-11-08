//Develop sample programs using preprocessor operators #, ## and also conditional compilation.


#include<stdio.h>

#define TEST
#define mkstr(s) #s
#define concat(a, b) a##b
#define MUL(funname, datatype)\
        datatype funname(datatype m, datatype n)\
        {return m*n;}

MUL(mul_int, int);



int main()
{
	int xy = 10;

	printf(mkstr(soni_sneha));
	printf("\n");	
	
	printf("\nThe value of xy is %d", concat(x, y));
	printf("\n");

	#if defined(TEST)
        printf("Product of 3, 2 is %d", mul_int(3, 2));
	#endif
	
	printf("\n");

	return 0;
}
