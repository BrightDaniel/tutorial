#include <stdio.h>

void compare()
{
	int num1, num2;

	printf("Enter num1 ");
	scanf("%d", &num1);

	printf("Enter num2 ");
	scanf("%d", &num2);

	if ( num1 > num2) 
		printf(" %d is greater than %d \n", num1, num2);
	
	if ( num1 == num2) 
		printf(" %d and %d are equal \n", num1, num2);

	if ( num1 < num2)
		printf("%d is greater than %d \n", num2, num1); 

}


int main()
{
	compare(); 
	return 0;

}

