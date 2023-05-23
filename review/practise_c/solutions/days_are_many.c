#include <stdio.h>
/**
* main- Convert the days a user inputs to years, weeks, and days.
*i eg: Input = 373 days
* Output: 1 year(s), 1 week(s), 1 day(s)
* Return: success
*/

int day(int a)
{
	int input;
	int days, weeks, years;
 	

	years = (input / 365);
	


	weeks = (input / 365);
	
	input %= 7;

	days = input;

	printf("Years: %d\n", years);
	printf("Weeks: %d\n", weeks);
	printf("Days: %d\n", days);
}

int main()
{
	int a;
	int input;
	printf("Kindly enter any number of days: ");
	scanf(" %d", &input);
	return ("%d\n", day(a));

}
