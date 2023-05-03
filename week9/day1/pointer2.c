#include <stdio.h>

int main()
{
	// Pointer is a variable like refrence that holds a memmory address to another variable, array etc
	
	int score = 80;

	int book = score;

	printf("%p \n  ", &book);
	printf("%p \n", &score);




}
