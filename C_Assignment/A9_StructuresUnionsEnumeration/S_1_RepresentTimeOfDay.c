//Write a program to represent time of the day in hrs, mins and secs. Use structures.

#include<stdio.h>

struct time{
	int hrs;
	int mins;
	int secs;
};

int main()
{
	struct time t;
	
	printf("\nEnter the Time in hrs, mins and secs: ");
	scanf("%d%d%d", &t.hrs, &t.mins, &t.secs);

	printf("\nTime is %d:%d:%d\n", t.hrs, t.mins, t.secs);

	return 0;
}

