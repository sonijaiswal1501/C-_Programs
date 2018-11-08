/*Given as input an integer number of seconds, print as output the equivalent time in hours,
minutes and seconds. Recommended output format is something like 7322 seconds is
equivalent to 2 hours 2 minutes 2 seconds.*/

#include<stdio.h>

int main()
{
	int hrs, mins, secs, temp;

	printf("\nEnter an integer number of seconds : ");
	scanf("%d", &secs);

	temp = secs;
	secs = secs % 60;
	mins = temp / 60;
	hrs = mins / 60;
	mins = mins - hrs*60;

	printf("%d seconds is equivalent to %d hours %d minutes %d seconds\n", temp, hrs, mins, secs); 



	return 0;
}
