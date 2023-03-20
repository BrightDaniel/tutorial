#ifndef LAST
#define LAST

int print(int x, int y)
{
	
	printf("Enter 2 numbers: ");
	scanf("%d %d", &x, &y);

	printf("The result is: %d\n", x + y);

	return x + y;
}

int call(int x, int y)
{

	printf("Enter 2 numbers: ");
	scanf("%d %d", &x, &y);
	

	printf("The result is: %d\n", x * y);

	return x * y;
}



#endif
