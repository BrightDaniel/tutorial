#include <stdio.h>

void largest(int x, int y)
{
	if (x > y)
		printf("%d is greater than %d \n", x, y);

	if ( x == y)
		printf("%d and %d are the same \n", x, y);

	if (x < y)
		printf("%d is greater than %d \n", x, y);

	return x, y;
}



int main()
{
	largest(100, 70);
}
