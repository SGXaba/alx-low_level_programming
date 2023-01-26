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

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	i = 0;
	while (i < n)  /*Delacring WHILE*/
	{
		*(dest + i) = *(src + i); /*add 1 position dest and src*/
		i++;
	} /*END WHILE*/


	return (dest);
}
