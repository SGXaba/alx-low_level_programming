#include "main.h"

/**
 * _strchr: locates a character in a string
 * @s: The string is to be searched
 * @c: The character is to be located
 *
 * Return: If c is found - a poiinter to the first occurrence
 * 	If c is not found - NULL.
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (S[index] == c)
			return (s = index);
	}

	return ('\0');
}
