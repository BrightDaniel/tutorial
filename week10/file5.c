#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

	int score = atoi(argv[2]);

	if (score < 70)
		printf("Sorry %s, your score was below the cuttoff... it was %d have been defered \n", argv[1], score);
	else 
		printf("Congratulations, continue to fear kimba \n");

}
