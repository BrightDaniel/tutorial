#include <stdio.h>
/**
 *main - This program writes a simple calculator using the four(4) major
 * operators (addition, subtraction, multiplication and division).
 *
 */
int main(void)
{
	int num1, num2;
	char operator;
	int sum, sub, mult, div;

	printf("Kindly enter an operator\n"); /* we prompt user to enter any of
						*the 4 operators of their choice
						*/
	scanf("%c", &operator); /* we use this to store users's information */
	printf(" Kindly enter two numbers\n"); /* we prompt user to enter operands */
	scanf("%d %d", &num1, &num2); /* we store user's input */

	switch (operator) /** using a switch operation we carryout
			   * command based on users' input and
			   *break out after each execution is executed
			*/
	{
		case '+':
			sum = num1 + num2;
			printf("sum = %d", sum);
			break;

		case '-':
			sub = num1 - num2;
			printf("sub = %d", sub);
			break;

		case '*':
			mult = num1 * num2;
			printf("mult = %d", mult);
			break;

		case '/':
			div = num1 / num2;
			printf("div = %d", div);
			break;

		default:
			printf(" Invalid");
	}
}
