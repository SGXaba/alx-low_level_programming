#include "lists.h"

/**
 * free_listint - Frees a listint_t.
 * @head: The head of the list to free.
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while ((current = head) != NULL)
	{
		/*set head as the next node*/
		head = head->next;
		free(current);
	}
}
