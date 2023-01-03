#include "main.h"

/**
 * _memcpy - Copies @n bytes fro the memory area pointed
 * 	to by @src into that pointed to by @dest.
 * @dest: A pointer to the memory area to copy @src into.
 * @src: The source buffer o copy character from.
 * @n: The number of bytes to copy from @src.
 *
 * Return: A pointer to the desitnation buffer @dest.
 */

void *_memcpy(void *dest, cont void *src, size_t n)
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (dest);
}
