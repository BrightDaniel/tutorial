#include <stdio.h>
/**
 * main - A C Program to enter week number and
 * print day of week
 * Author: Omena Egbusiri
 * Return: success
 */
int main(void)
{
	int a[7] = {1, 2, 3, 4, 5, 6, 7};
	int input;

	printf("Kindly enter any number between 1 and 7\n");
	scanf(" %d", &input);
	if (input >= 1 && input <= 7)
	{
		if (input == 1)
		{
			printf("Today is Sunday\n");
		}
		if (input == 2)
		{
			printf("Today is Monday\n");
		}
		if (input == 3)
		{
			printf("Today is Tuesday\n");
		}
		if (input == 4)
		{
			printf("Today is Wednesday\n");
		}
		if (input == 5)
		{
			printf("Today is Thursday\n");
		}
		if (input == 6)
		{
			printf("Today is Friday\n");
		}

		else if (input == 7)

		{
			printf("Today is Saturday\n");
		}
	}
	else
		printf("Invalid option\n");
	return (0);
}
