#include <stdio.h>

void sum() //defining a function
{
	int num1, num2, sum;

	printf("Enter 2 numbers: ");
	scanf("%d %d", &num1, &num2);
	sum = num1 + num2;
		printf("The sum of %d and %d is: %d\n", num1, num2, sum);
}

//lets however check what happens when we try to run this program.
//Our program is correct but here we have an issue on our hands.
//Let's see how to fix this


