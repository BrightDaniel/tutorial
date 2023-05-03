#include <stdio.h>

int reverse(int n)
{

	if (n < 10)
	{
		return n;
	}
	return (n % 10) * 10 + reverse(n/10);
}


int main()

{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
		
	printf("the reverse of %d is %d ", n, reverse(n));

	return 0;
}
