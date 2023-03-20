#include <stdio.h>


int main()
{
	char name[] = "John";
	
	const float CGPA = 4.0;

	int year;


	year = 1;


	printf("%s cgpa was %.1f in year %d\n", name, cgpa, year);

	year = 2;
	//CGPA = 3.6;
	printf("%s cgpa was %.1f in year %d\n", name, cgpa, year);


}
