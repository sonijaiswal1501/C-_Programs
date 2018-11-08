/*Implement string library functions. strrev, strcpy, strcat, strcmp with same return values and all
error handling features using pointers.*/


#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void strrev(char *, char *);
void strcopy(char *, char *);
void strcatenate(char *, char *);
int strcompare(char *, char *);


int main()
{
	char str1[50], temp[50], str2[50], str3[50], str4[50];
	int value;	
	
	printf("\nEnter the first string : ");
	scanf("%[^\n]s", str1);
	printf("\nGiven string s1 is %s", str1);	

	strrev(str1, temp);
	printf("\n\na) Reversed string is %s\n", temp);

	strcopy(str1, temp);
	printf("\nb) Copied string is %s\n", temp);

	printf("\nEnter the second string s2 : ");
	scanf(" %[^\n]s", str2);	
	strcatenate(str1,str2);
	printf("\nc) Concatenate string is %s\n", str1);
	
	printf("\nEnter the Third string s3 : ");
	scanf(" %[^\n]s", str3);
	printf("\nEnter the fourth string s4 : ");
	scanf(" %[^\n]s", str4); 
	value = strcompare(str3, str4);

	if(value != 0)
	 printf("\nd) %s and %s Strings are not equal\n", str3, str4);
	else
	 printf("\nd) %s and %s Strings are equal\n", str3, str4);

	return 0;
}

void strrev(char *str, char *temp)
{
	int i, j=0, length=0;
		
	length = strlen(str);

	for(i=(length-1); i>=0; i--,j++)
	   temp[j] = str[i];	 
	
}

void strcopy(char *str, char *temp)
{
	int i, length=0;

	length = strlen(str);

	for(i=0; i<length; i++)
	   temp[i] = str[i];	
}

void strcatenate(char *str, char *str1)
{
	int i=0, j=0, length=0;

	length = strlen(str);
	
	for(j=0,i=length; str1[j] != ('\0'-1); i++,j++)
	 {
	  str[i] = str1[j];   
	 }
}

int strcompare(char *str, char *str2)
{
	int i=0, j=1, value=0, length=0, length1=0;

	length = strlen(str);
	length1 = strlen(str2);
	
	for(i=0,j=0; i<length; i++,j++)
	{
	   if(*(str+i) != *(str2+j))
	     value++;	
	}
	
	return value;

	
	
}

