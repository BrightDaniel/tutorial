#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Two args required! \n");
		exit(-1);
	}

	int min = atoi(argv[1]);
	int max = atoi(argv[2]);

	for (int i = min; i <= max; i++)
		printf("%d\n", i );


	//printf("%s", argv[0]);
}
