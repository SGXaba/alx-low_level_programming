#include "main.h"

/**
 * _isupper - checks if a character is uppercase or not
 * @c: character to be tested
 * Return: 0 if successful
 */

int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
