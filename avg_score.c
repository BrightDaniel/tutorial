#include <stdio.h>
/**
* main - Calculate the average score of a student in 9 subjects using arrays.
* Author: Omena Egbusiri
*/

int main()
{
	int score[9];
	int i;
	float sum = 0;
	float avg;

	printf("Kindly Enter the scores for  9 subjects: \n");
	for (i = 0; i < 9; i++)
	{
		scanf(" %d", &score[i]);
	}
	
	for (i = 0; i < 9; i++)
	{
	sum = (sum + score[i]);
	}

	printf(" The sum of the 9 subject is: %.2f\n", sum);
	avg = (sum / 9);
	printf(" The average score is: %.2f\n", avg);
}

	
