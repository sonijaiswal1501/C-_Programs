//Write a program to find out difference in days between any two dates. It must work regardless of the year, month and day. Consider Leap years while calculating the difference.

#include<stdio.h>

int month_into_days(int a);

int main()
{
	int i=0, day1, month1, year1, day2, month2, year2, reference, total_days1=0, total_days2=0, difference=0;

	printf("Enter the first date :"); 
	scanf("%d%d%d", &day1, &month1, &year1);

	printf("Enter the second date :"); 
	scanf("%d%d%d", &day2, &month2, &year2);
        
	reference = year1;
	
	if(year2 < year1)
	  reference = year2;

	for(i=reference; i<year1; i++)
	 {
	   if(year1%4 == 0)
	      total_days1 += 1;
	 }
	total_days1 = total_days1 + day1 + month_into_days(month1) + (year1 - reference)*365;
	printf("\nNo. of days of first date from the 1 january is %d = %d", year1, total_days1);	

	for(i=reference; i<year2; i++)
	 {
	   if(year2%4 == 0)
	      total_days2 += 1;
	 }
	total_days2 = total_days2 + day2 + month_into_days(month2) + (year2 - reference)*365;
	
	printf("\nNo. of days of second date from the reference years 1 january = %d", total_days2); 

	if(total_days2 > total_days1)	
	  difference = total_days2 - total_days1;
	else	
	  difference = total_days1 - total_days2;
	
	printf("\nTherefore the difference between the two dates is %d", difference); 
	printf("\n"); 

	return 0;

}

int month_into_days(int a)
{
	int b;
	switch(a)
	 {
	   case 1:b=0; break;

	   case 2:b=31; break;

	   case 3:b=59; break;

	   case 4:b=90; break;

	   case 5:b=120; break;

	   case 6:b=151; break;

	   case 7:b=181; break;

	   case 8:b=212; break;

	   case 9:b=243; break;

	   case 10:b=273; break;

	   case 11:b=304; break;

	   case 12:b=334; break;

	   default:printf("Invalid Input"); break;

	 }	
	
	return b;

}           



