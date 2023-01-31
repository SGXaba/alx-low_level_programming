#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: the head of the linked list.
 * Return: the head's node data if the list is not empty.
 * 	0 otherwise.
 */
int pop_listint(listint_t **head)
{
	int first_node;
	listint_t *temp, *next;

	if (*head == NULL)
		return (0);

	/*set head addr to temp*/
	temp = *head;
	/*get addr of next node*/
	next = temp->next;
	/*get element of first node*/
	first_node = temp->n;

	/*free first node*/
	free(temp);

	*head = next;

	return (first_node);
}
