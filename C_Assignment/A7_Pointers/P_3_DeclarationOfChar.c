/*A C program contains the following declaration
char *color[6] = {“red”, “green”, “blue”, “white”, “black”, “yellow”};
a. What is the meaning of color?
b. What is the meaning of (color+2);
c. What is the value of *color?
d. What is the value of *(color+2)?
e. How do color[5] and *(color + 5) differ?.*/

#include<stdio.h>


int main()
{
	char *color[6] = {"red", "green", "blue", "white", "black", "yellow"};
	
	printf("\nchar *color[6] = {");
	for(int i=0; i<6; i++)
	   printf("%s, ", color[i]);
	printf("};\n");

	printf("\nThe meaning of color is %p\n", color);

	printf("\nThe meaning of (color+2) is %p\n", (color+2));

	printf("\nThe value of *color is %s\n", *color);

	printf("\nThe value of *(color+2) is %s\n", *(color+2));

	printf("\nThe color[5] = %s and *(color+5) = %s\n\n", color[5], *(color+5));	

	return 0;
}
