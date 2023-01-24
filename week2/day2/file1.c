#include <stdio.h>


int main()
{
	//name, current level, cgpa...
	
	char name[20];
	int level;
	float cgpa;

	printf("What Is Your Name\n");
	scanf("%s", name);

	printf("What Is Your Current Level\n");
	scanf("%d", &level);

	printf("What Is Your Cgpa\n");
	scanf("%f", &cgpa);

	printf("Your name is %s, your current level is %d, and your cgpa is %.1f ", name, level, cgpa);
}
