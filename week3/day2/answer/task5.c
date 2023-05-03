#include <stdio.h>
/**
 * main - A C program to clculate profit or loss
 * Author- Omena Egbusiri
 * Return: success
 */
int main(void)
{
	int a;
	int b;

	printf("Kindly enter your total income for the month\n");
	scanf(" %d", &a);
	printf("Kindly enter your total expense for the month\n");
	scanf(" %d", &b);

	if (a > b)
	{
		printf("Congratulations, you made profit\n");
	}
	else if (a < b)
	{
		printf("Oops! you made loss\n");
	}
	else
		printf("you neither made profit nor loss\n");
	return (0);
}
