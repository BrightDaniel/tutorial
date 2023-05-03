#include <stdio.h>

int main()
{
/*	FILE *pF = fopen("hello.py", "a");

	fprintf(pF, "print('Username is :' username)");

	fclose(pF);

*/
	if(remove("text.txt") == 0)
		printf("That file was deleted succesfully \n");
	else
		printf("Something went wrong. Error 404. File not found \n");


	return 0;
}
