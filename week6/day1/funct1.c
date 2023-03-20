#include <stdio.h>

int main()
{
	int num1, num2, sum;

	printf("Enter 2 numbers: ");
	scanf("%d %d", &num1, &num2);
	sum = num1 + num2;
	printf("The sum of %d and %d is: %d\n", num1, num2, sum);


}

//imagine we want to do this 10 times.. Our program gets really lengthy.
//thats where functions come in. Lets see in example 2.
