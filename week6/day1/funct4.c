#include <stdio.h>
void sum();
void mul();

int main()
{
	sum();
	mul();
}

void sum()
{
	int num1, num2, sum;

	printf("Enter 2 numbers: ");
	scanf("%d %d", &num1, &num2);
	sum = num1 + num2;
	printf("The sum of %d and %d is: %d\n", num1, num2, sum);
}

void mul()
{
	int num1, num2, sum;
	printf("Enter 2 numbers: ");
	scanf("%d %d", &num1, &num2);
	sum = num1 * num2;
	printf("The sum of %d and %d is: %d\n", num1, num2, sum);
}
