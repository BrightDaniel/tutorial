#include <stdio.h>

int main()
{
	int a, b = 1, sum = 0;

	do {
		printf("Enter a postive number that you want to sum: ");
		scanf("%d", &a);

		sum += b;
		b++;
	


	}
	while (b <= a);

		printf("The sum is %d", sum);

	return 0;

}
