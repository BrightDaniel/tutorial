#include <stdio.h>
/**
 * A program  to make a simple calculator.
 */
int main()
{
	int x, y; // declaring our variables
	int sum;
	int sub = (x - y);
	int mult = (x * y);
	int div = (x / y);
	char operator; // declaring our operator

	printf(" Kindly enter 2 numbers\n"); // prompt user to enter operands
	scanf(" %d %d", &x, &y); // store user input
	printf(" Kindly enter an operator\n"); //prompt user to enter operator
	scanf("%c", &operator); // store user input
	
	switch (operator)
	{
		case '+':
		sum = x + y;
			printf("sum = %d\n", sum );
			break;
		
	}		

}

