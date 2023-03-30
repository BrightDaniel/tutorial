#include <stdio.h>


void bwave(int b)
{
	printf("%d", b);
	b++;
	if (b < 10)
	{
		bwave(b);
	}
}


int main()
{
	bwave(4);
	return 0;
}
