#include <stdio.h>


int main()
{
	char name[26];
	char cohort[15];
	int score;

	printf("Hello, Welcome, What is your name? \n");
	fgets(name, 26, stdin);

	printf("What is your Cohort? \n");
	fgets(cohort, 15, stdin);

	printf("What is your Score? \n");
	scanf("%d", &score);

	if (score >= 0 && score <=165)
	{
		if (score >= 130)
		{
			printf("Congratulations, Promoted to previous cohort\n");
		}

		if (score >= 80 && score <= 129)
		{
			printf("Congratulations, You can continue with your cohort\n");
		}

		if (score >= 50 && score <= 79)
		{
			printf("Sorry, You have been defered to the next cohort\n");
		}
		else 
			printf("Sorry, you're out. Scores are too low.\n");
		
	} else 
		printf("Invalid Scores\n"); 


}
