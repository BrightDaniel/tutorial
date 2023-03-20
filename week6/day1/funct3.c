#include <stdio.h>

void sum()
{
	int num1, num2, sum;

	printf("Enter 2 numbers: ");
	scanf("%d %d", &num1, &num2);
	sum = num1 + num2;
	printf("The sum of %d and %d is: %d\n", num1, num2, sum);
}

void call()
{
	sum();

}

void mul()
{
	int num1, num2, sum;

	printf("Enter 2 numbers: ");
	scanf("%d %d", &num1, &num2);
	sum = num1 * num2;
	printf("The multiplication of %d and %d is: %d\n", num1, num2, sum);
}

void div()
{
	int num1, num2, sum;

	printf("Enter 2 numbers: ");
	scanf("%d %d", &num1, &num2);
	sum = num1 / num2;
	printf("The div of %d and %d is: %d\n", num1, num2, sum);
}

int main() 
{
	call(); //calling the defined function
	mul();
	div();
}

//we have another problem tho, in our function, the main function is now coming down down down... down below..
