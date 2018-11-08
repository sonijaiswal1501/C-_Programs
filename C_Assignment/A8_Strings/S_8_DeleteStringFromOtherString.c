/*Write a C program with a function deletes2 (s1, s2). This function deletes each character in
string s1 which matches any character in string s2.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void delete_2(char *, char *);

int main()
{
	char  str1[20], str2[20];
	
	printf("\nEnter a string1 : ");
	scanf("%[^\n]", str1);	

	printf("\nEnter a string2 : ");
	scanf(" %[^\n]", str2);			
	
	delete_2(str1, str2);
	
	return 0;
}

void delete_2(char *str1, char *str2)
{
	int i, j, k=0, len1=0, len2=0;	
	char temp[15];
	
	len1 = strlen(str1);
	len2 = strlen(str2);
	
	for(i=0; i<len1; i++,k++)
	 {
	  for(j=0; j<len2; j++)	   
	    if(str1[i] == str2[j])
	       i++;   	
	     
	    temp[k] =  str1[i];	   
	 }
	printf("\nNew string is %s\n", temp);
	printf("\n");
}
