#include <stdio.h>
#include <ctype.h>
/**
* main - A program that converts all lowercase characters to uppercase 
*Return: 0
*/
int main()
{
	char lowercase;
	char uppercase;
	
	for (lowercase= 'a'; lowercase <= 'z'; lowercase++)
		{
			uppercase = toupper(lowercase);
			printf("%c\n", uppercase);
			
		}


}
