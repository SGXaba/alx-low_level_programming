#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list.
 * @h: a pointer to the list to iterato to.
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 1;

	/* return 0 as no of nodes when h is null*/

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		printf("%d\n", h->n);

		/*go to the next node*/
		h = h->next;
		/*count no of nodes*/
		node_count++;
	}

	printf("%d\n", h->n);

	return (node_count);
}
