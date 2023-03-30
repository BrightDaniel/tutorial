#include <stdio.h>

int main()
{
	//TODO
	int i, num, sum = 0;

	printf("Enter a number: ");
	scanf("%d", &num);

	for (i = 0; i <= num; i++)
		sum = sum + i;
		//sum  += i;
	printf("The sum of %d is %d \n", num, sum);
}
