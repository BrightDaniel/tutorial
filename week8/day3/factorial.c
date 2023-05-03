#include <stdio.h>

//Factorial of a number using the direct method

int fact(int k);

int main()
{	
	int k;
	printf("Enter a number you want to get the factorial of: ");
	scanf("%d", &k);

	printf("%d", fact(k));

	return 0;

}

int fact(int k)
{
	if (k <= 1)
		return k;

	return k * fact(k - 1);

}

