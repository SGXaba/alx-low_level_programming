#include "main.h"

/**
*swap_int -swap two integers' values
*@a: first integer
*@b: second integer
*Returns: returns nothing
*/

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
