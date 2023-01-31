#include "lists.h"

/**
 * add_nodeint - Adds a node to a single linked list
 * @head: A pointer to the pointer to the first element.
 * @n: The integer to initialize with.
 * Return: The address of the item just added.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;
	
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	
	if (*head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;

	new_node->n = n;
	/*add new node at the beginning of the list*/
	*head = new_node;

	return (*head);
}
