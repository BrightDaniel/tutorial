#include <stdio.h>
/**
 * main - A program to check whether a number is
 * divisible by 4 and 13 or not.
 * Author: Omena Egbusiri
 * Return: success
 */
int main(void)
{
	int a = 4;
	int b = 13;
	int p = (a * b);
	int Num;

	printf("Kindly enter any number\n");
	scanf("%d", &Num);

	if ((Num % p) == 0)
		printf(" %d , is divisible by 4 and 13\n", Num);

	else
		printf(" %d, is not divisible by 4 and 13\n", Num);

	return (0);
}
