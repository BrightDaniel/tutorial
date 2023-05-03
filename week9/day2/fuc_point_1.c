#include <stdio.h>

/*void scores(int score)
{
	printf("Your score is %d", score);
}	


int main()
{
	int score = 80;

	scores(score);
}
*/


void scores(int *score)
{
	printf("your score is %d ", *score); //dereffrence
}


int main()
{
	int score = 80;
	int *pScore = &score;

	scores(pScore);
}



