#include "lists.h"
/**
 * sum_listint - Returns the sun of all the data of a listint_t linked list.
 * @head: The first element of the list.
 * Return: The sum of the data if the list is not empty.
 * 	0 otherwise.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		/* add n to sum*/
		sum += head->n;
		/*go to the next node*/
		head = head->next;
	}

	/*if list will be empty it will return sum = 0*/
	return (sum);
}
