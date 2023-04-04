#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to the start of the linked list
 *
 * Return: sum of all the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)	/* as long as head is pointing to a node */
	{
		sum += head->n;	/* add data head is pointer to the running sum */
		head = head->next; /* move head to the next node */
	}
	return (sum);
}
