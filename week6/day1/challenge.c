#include <stdio.h>

int sum(int x, int y)
{
	int z;
	printf("Enter two numbers: ");
	scanf("%d %d", &x, &y);

	z = x + y;

	printf("Sum of %d and %d is = %d \n", x, y, z);

	return z;
}




void main()
{
	int x, y;
	sum(x,y);

}
