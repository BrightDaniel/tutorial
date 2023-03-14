#include <stdio.h>

int main()
{
	char operator;
	int num1, num2;
	int result;

	printf("Please put  the operator or symbol you want. eg + * / - : \n");
	scanf("%c", &operator);

	printf("Enter The first number: \n");
	scanf("%d", &num1);

	printf("Enter The Second number: \n");
	scanf("%d", &num2);

	if (operator == '+')
	{
		result =  num1 + num2;
		printf("%d + %d is = %d\n", num1, num2, result);
	}
	else  if (operator == '-')
	{
		result =  num1 - num2;
		printf("%d - %d is = %d\n", num1, num2, result);
	}
	else  if (operator == '*')
	{
		result =  num1 * num2;
		printf("%d * %d is = %d\n", num1, num2, result);
	}
	else  if (operator == '/')
	{
		result =  num1 + num2;
		printf("%d / %d is = %d\n", num1, num2, result);
	}
	//else 
}


