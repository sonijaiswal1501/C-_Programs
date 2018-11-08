/*Given as input a floating (real) number of centimeters, print out the equivalent number of feet
(integer) and inches (floating, 1 decimal), with the inches given to an accuracy of one decimal
place.
Assume 2.54 centimeters per inch, and 12 inches per foot.
If the input value is 333.3, the output format should be:
333.3 centimeters is 10 feet 11.2 inches.*/

#include<stdio.h>


int main()
{
	float centimeter, inch, inches;
	int num, feet; 

	printf("\nEnter the measurement in centimeter : ");
	scanf("%f", &centimeter);

	inch = centimeter / 2.54;	
	feet = inch / 12;
	
	inches = (centimeter/2.54) - (feet*12);	

	printf("\n%.1f centimeters is %d feet %.1f inches\n\n", centimeter, feet, inches);

	return 0;
}



