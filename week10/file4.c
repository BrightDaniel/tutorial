#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

	int num = atoi(argv[1]);

	for(int i = 1; i <= 12; i++)
	{

		int result = num * i;

		printf("%d * %d = %d \n", num, i, result );
	}	




}
