#include <stdio.h>

int main() 
{
	char charr;

	printf("Enter any Character \n");
	scanf("%c", &charr);

	if (charr >= 'a' && charr <= 'z' || charr >= 'A' && charr <= 'Z')
	{
		printf("Your Input is an alphabet\n");
	}
	else
		printf("Not an alphabet\n");
}

