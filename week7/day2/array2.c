#include <stdio.h>


void main()
{
	//2D array
	//
	int numbers[2][3] = {
		{1, 2, 3}, 
		{4, 5, 6}	
	};

	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			printf("%d ", numbers[i][j]);
		}
		puts("");
	}
}

