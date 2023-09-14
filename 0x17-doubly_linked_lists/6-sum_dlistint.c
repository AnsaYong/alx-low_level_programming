#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data (n) of a dlistint_t linked list
 * @head: reference (pointer) to the start of the list
 *
 * Return: total, or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	/* check if list is empty */
	if (head == NULL)
	{
		return (0);
	}

	/* do not mess with the reference to the start of the list - make copy */
	temp = head;

	/* if list is not empty */
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
