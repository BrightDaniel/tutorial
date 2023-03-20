#include <stdio.h>
void sum();
void mul();
void div();
void call(); //Delaration


int main()
{
	sum(); //mul(); div(); //calling the function



}


void sum() {
	int x = 10; int y = 5;
	int z = x + y;

	printf("%d", z);
}
