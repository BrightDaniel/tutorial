#include <stdio.h>

int main() {
	  

	int score = 80;
	int* pScore = &score;

	printf("address of score %p\n", &score);
	printf("address of pScore %p\n", pScore);


	printf("Value of score %d\n", score);

	printf("Value stored at the address of pScore %d\n", *pScore);


       	return 0;
}
