#include <stdio.h>

//Indirect recursion to print factorial

int fact1(int a);
int fact2(int a);


int main()
{
	int a, fact;

	printf("Enter the num you want to get the factorial of: ");
	scanf("%d", &a);
	
	fact = fact1(a);

	printf("%d", fact);
}

int fact1(int a)
{
	if (a <= 1)
		return 1;
	return a * fact2(a - 1);
}

int fact2(int a)
{
	 if (a <= 1)
		 return 1;
	 return a * fact1(a - 1);
}


