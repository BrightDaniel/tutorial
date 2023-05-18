#include<stdio.h>
/**
 * main: A PROGRAM TO CHECK IF AN INPUT IS AN ALPHABELT
 * A DIGIT OR A SPECIAL CHARACTER.
 * Author: Omena Egbusiri
 * Return: 0
 */

int main(void)
{
	char input;

	printf("Kindly enter any input of your choice");
	scanf("%c\n", &input);

	if (input >= 'a' && input <= 'z' || input >= 'A' && input <= 'Z')
	printf("%c is an alphabet\n", input);
	else if (input >= '0' && input <= '9')
	printf("%c is a digit\n", input);
	else
	printf("%c is a special character\n", input);
}
