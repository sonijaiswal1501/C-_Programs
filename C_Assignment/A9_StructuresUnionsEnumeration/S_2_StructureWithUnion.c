/*Define structure with two members (one int and other char). Also define s union with two
members (one int and other char). Print the sizes of structure and union in number of bytes.*/

#include<stdio.h>

struct size_s{
	int val;
	char ch;
}__attribute__((packed));

union size_u{
	int val_u;
	char ch_u;
}u;


int main()
{
	struct size_s s;
	
	printf("\nSize of structure in bytes is %lu\n", sizeof(s));
	printf("\nSize of union in bytes is %lu\n", sizeof(u));

	return 0;
}
