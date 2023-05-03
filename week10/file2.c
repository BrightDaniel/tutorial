#include <stdio.h>

int main(int argc, char *argv[])
{
	//print out the number of arguments we have in our c program
	printf("argc: %d \n", argc);

	for (int i = 0; i < argc; i++)
		printf("argv[%d]= %s \n", i, argv[i]);




	return 0;
}
