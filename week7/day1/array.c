#include <stdio.h>


int main()
{
	double prices[]=  {1.0, 22.0, 77.0 90.1, 9.9, 2.3,  2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0 };


	for (int i = 0; i < 10; i++)
	{
		printf("%.2lf", prices[i]);
		printf("\n");
	}

}
