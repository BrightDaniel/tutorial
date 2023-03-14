#include <stdio.h>

int largest(int a, int b)
{
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

	largest(10, 12);
}




