#include "main.h"
#include <stdio.h>

/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *prt;

	printf("%s", s1);
	printf("%s", s2);
	prt = _strncat(s1, s2, 1);
	printf("%s\n", s1);
	printf("%s", s2);
	printf("%s\n", prt);
	prt = _strncat(s1, s2, 1024);
	printf("%s", s1);
	printf("%s", s2);
	printf("%s", prt);
	return (0);
}
