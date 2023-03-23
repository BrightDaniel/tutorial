#include <stdio.h>


void main()
{


	int numbers[2][3] = {
		{1, 2, 3},
		{4, 5, 6}
	};

	int rows = sizeof(numbers)/sizeof(numbers[0]);

	int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);


	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < columns; j++)
		{
			printf("%d ", numbers[i][j]);
		}
		puts("");
	}
}

