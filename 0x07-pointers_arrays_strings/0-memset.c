/*
 * File: 0-memset.c
 */

#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area
 * 	pointed to by @s with the constant byte @c.
 * @s: A pointer to the memory area to be filled.
 * @c: The chahracter to fill the memory area with.
 * @n: The number of bytes to be filled.
 * description -memset: over there
 *
 * Return: A pointer to the filled memoery area @n.
 */
char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	/*Delacring FOR*/
	for (i = 0; i < n; i++)
	{
		*(s + i) = b; /*add 1 position s*/

	} /*END FOR*/

	return (s);
}
