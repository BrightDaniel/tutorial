#include <stdio.h>

int main()
{
	int a, b, sum = 0;

	printf("Enter the num: ");
	scanf("%d", &a);

	for(b = 1; b <= a; b++)
	{
		 sum =  sum + b;
		  //printf("sum is = %d \n",  sum); 
		 
	}
	printf("sum is = %d ",  sum);

}
