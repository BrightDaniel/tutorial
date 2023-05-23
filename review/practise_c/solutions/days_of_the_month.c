#include <stdio.h>
/**
* main - Write a c program to find number of days in a month by enttering the month number.
* eg: month 1: 31 days
* Author- Omena Egbusiri
*/
int main()
{
	int month[12];

	int input;
	printf("Kindly Enter any month of the year: ");
	scanf("%d", &input);
	if (input >= 1 && input <= 12)

	{
		if (input == 1 || input == 3 || input == 5 || input == 7 || input == 8 || input == 10 || input == 12)
			printf("month: %d  as 31 days\n", input);
		else if (input == 4 || input == 6 || input == 9 || input == 11)
			printf(" month: %d as 30 days\n", input);
		else if (input == 2)
			printf("month: %d as 28 days\n", input);
	}
	else
		printf("Invalid input\n");
	
}
