/*Write a C program with a function delete (s1, c). This function deletes each character in s1 which
matches character c.*/

#include<stdio.h>
#include<string.h>

void delete_1(char *, char *, char);

int main()
{
	char  str[20], temp[20], ch=0;
	
	printf("\nEnter a string : ");
	scanf("%[^\n]",str);	

	printf("\nEnter character you want to delete ");
	scanf(" %c", &ch);
		
	delete_1(str, temp, ch);

	printf("\nNew string is %s\n", temp);

	return 0;
}

void delete_1(char *str, char *temp, char ch)
{
	int i, j=0, length=0;
		

	length = strlen(str);
	
	for(i=0; i<length; i++,j++)
	 {
	   if(*(str+j) == ch)
	      j++;
 
           temp[i] = str[j];
	   
	 }
}

	
	
