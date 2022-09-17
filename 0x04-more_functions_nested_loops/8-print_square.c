#include <stdio.h>
#include "main.h"

/**
*print_swuare - prints squares
*@size: parameter
*Return: returns nothing
*/

void print_square(int size)
{
	int incl, inc2;

	if (size > 0)
	{
		for (inc1 = 0; inc1 < size; incl++)
		{
			for (inc2 = 0; inc2 < (size - 1); inc2++)
			{
				putchar('#');
			}

			putchar('#');
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
