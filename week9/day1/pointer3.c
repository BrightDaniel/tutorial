#include <stdio.h>

int main()
{
	// Pointer is a variable like refrence that holds a memmory address to another variable, array etc

	int score = 80;

	//create a pointer var.
	int *pScore = &score;

	printf("address of score %p\n", &score);
	printf("address of pScore %p\n", pScore);




}
