#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: The head of the linked list
 * @index: The index of the node to return.
 * Return: A pointer to the nth element if it exists.
 * 	NULL otherwise.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	/*iterate thorugh nodes in list till the index nth node*/
	for (i = 0; i < index && head != NULL; i++)
		head = head->next;

	/*return head*/
	return (head);
}
