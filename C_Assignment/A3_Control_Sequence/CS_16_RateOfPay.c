/*Read two integers, representing a rate of pay (pence per hour) and a number of hours. Print out
the total pay, with hours up to 40 being paid at basic rate, from 40 to 60 at rate-and-a-half,
above 60 at double-rate. Print the pay as rupees to two decimal places.
Terminate the loop when a zero rate is encountered.
At the end of the loop, printout the total pay.
The code for computing the pay from the rate and hours is to be written as a function.
The recommended output format is something like:
Pay at 200 pence/hr for 38 hours is 76.00 rupees
Pay at 220 pence/hr for 48 hours is 114.40 rupees
Pay at 240 pence/hr for 68 hours is 206.40 rupees
Pay at 260 pence/hr for 48 hours is 135.20 rupees
Pay at 280 pence/hr for 68 hours is 240.80 rupees
Pay at 300 pence/hr for 48 hours is 156.00 rupees
Total pay is 928.80 rupees*/

#include<stdio.h>

int calculate_pay(int, int);

int main()
{
	int rate_pay, hours;
	float  cal_pay=0, total_pay=0;	

	printf("\nEnter the rate of pay and hours: ");

	while(1)
	 {
	   scanf("%d", &rate_pay);
	   if(rate_pay == 0)
	     break;

	   scanf(" %d", &hours);

	   cal_pay = calculate_pay(rate_pay, hours);
	   printf("\nPay at %d pence/hr for %d hours is %.2f rupees\n", rate_pay, hours, cal_pay);
	   total_pay += cal_pay;
         }

	printf("Total pay is %.2f rupees\n", total_pay);

	return 0;
}

int calculate_pay(int pay, int hrs)
{	
	if(hrs <= 40)
	   pay = (pay*hrs*1)/100;

	if((hrs >= 40) && (hrs <= 60))
	   pay = ((pay*40*1) + (pay*(hrs - 40)*1.5))/100;

	if(hrs >= 60)
	   pay = ((pay*40*1) + (pay*20*1.5) + (pay*(hrs - 60)*2))/100;

	return pay;
}

	
