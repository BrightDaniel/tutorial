#include <stdio.h>
#include <string.h>


int main()
{
	char pass[20];
	char val[20];
	int value;
	int i = 3;

	printf("Enter your password: ");
	scanf("%s", pass);

	printf("\n \nGreat one more step and your password would be validated: \n \n");

	printf("Re-enter your password: ");
	scanf("%s", val);

	value=strcmp(pass,val); 

	if (value==0)
		printf("Your password is Correct. Welcome to instant Banking");
	else
		while (i >= 0)
		{
			printf("\n Your password dont match \n \n");

			printf("Try again, Re-enter your password: ");
			scanf("%s", val);

			value=strcmp(pass,val); 
			if (value==0)
			{
				printf("Your password is Correct. Welcome to instant Banking");
				break;
			}

			if ( i > 0)
				printf("Passwords dont match. you have %d more attempts \n", i);
			else 
				printf("Your account is locked");

			i--;

		}

}

