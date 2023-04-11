#include <stdio.h>

int main()
{

	//Memmory block - a sigle unit within memmory used to hold some values
	//Memmory address - is the precise location whre a memmory block is located.


	int a = 100; 
	int b = 10;
	int c = 7;
	 int x = 10;
	         int y = 7;

	printf("%d bytes \n", sizeof(a));
	printf("%d bytes \n", sizeof(b));
	printf("%d bytes \n", sizeof(c));

	printf("%p \n", &a);
	printf("%p \n", &b);
	printf("%p \n", &c);
	 printf("%p \n", &x);
	  printf("%p \n", &y);


	return 0;

	//	printf("Enter your grade: ");
	//	scanf("%c", &a);

}
