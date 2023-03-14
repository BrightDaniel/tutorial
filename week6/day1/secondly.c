#include <stdio.h>

void secondly(int a, int b)

{

	if (a > b)
		printf("%d is greater than %d \n", a, b);

	if ( a == b)
		printf("%d and %d are the same \n", a, b);

	if (a < b)
		 printf("%d is greater than %d \n", b, a);
}


int main()
{
	secondly(1000, 1000);
}
