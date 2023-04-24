#include <stdio.h>

int main()
{
	FILE *pF = fopen("/home/bwave/tutorial/done.py", "w");

fprintf(pF, "week = int(input('What week are you: ')) \n if week == 9: print('You are almost done with C. Hurray') ");

	fclose(pF);


}
