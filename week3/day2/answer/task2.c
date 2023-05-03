#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program to check whether a character
 * is an alphabet or not.
 * Author: Omena Egbusiri
 * Return: success
 */
int main(void)
{
	char character[26];
	char alpha;
	printf(" Kindly enter a single character\n");
	scanf(" %c", &alpha);
	
	if (alpha >= 'a' && alpha <= 'z')
		printf(" %c, you are an alphabet\n", alpha);

	else
		printf(" %c, sorry you are not an alphabet\n", alpha);
	return (0);
}
