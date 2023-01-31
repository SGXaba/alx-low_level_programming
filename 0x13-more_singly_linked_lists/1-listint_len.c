#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - computes the length of the liked list..
 * @h: a pointer to the list to iterato to.
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t elements = 1;

	/*return 0 as no of elements when h is NULL*/
	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		/*count no of elements*/
		if (h->n != '\0')
			elements++;

		/*go to next node*/
		h = h->next;
	}

	return (elements);
}
