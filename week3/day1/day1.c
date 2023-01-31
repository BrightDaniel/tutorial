#include <stdio.h>

//This program prints a simple terminal calculator.

int main()
{
	int num1, num2, ans;
	char opr;

	printf("Enter any 2 numbers you want to calculate: \n");

	scanf(" %d %c %d", &num1, &opr, &num2 );

	if ( opr == '+')
	{
		ans = num1 + num2;
		printf("%d \n", ans); 
	}
	if (opr == '-')
	{
		ans = num1 - num2;
		printf("%d \n", ans);
	}
       	if (opr == '*')
	{
		ans = num1 * num2;
		printf("%d \n", ans);
       	}
       	if (opr == '/')
	{
		float ans = num1 / num2;
	       	printf("%.0f \n", ans);
	}
								         
}
