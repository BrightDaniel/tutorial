#include <stdio.h>

int largest(int a, int b)
{
	printf("Enter num1: ");
	scanf("%d", &a);

	printf("Enter num1: ");
	scanf("%d", &b);

	if (a > b)
	{
		printf("%d is greater than %d ", a, b);
	}
	else if (a == b)
	{
		printf("Both are same");
	}
	else
		printf("%d is greater than %d ", b, a);


	return a, b;
}


int main()
{

	int a, b;

	int c = largest(a, b);
}
