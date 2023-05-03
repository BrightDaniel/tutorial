#include <stdio.h>
/**
 * main - A program to check whether a character
 * is uppercase or lowercase
 * Author: Omena Egbusiri
 * Return: success
 */
int main(void)
{
	char character[26];
	char input;

	printf("Kindly enter a character\n");
	scanf("%c", &input);
	if (input >= 'A' && input <= 'Z')
		printf("Hurray, you are an uppercase letter\n");
	else if (input >= 'a' && input <= 'z')
		printf("You are a lowercase letter\n");
	else
		printf("Oops! wrong input\n");
	return (0);
}
