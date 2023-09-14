#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t list
 * @head: reference (pointer) to the start of a doubly linked list
 * @index: position whose node is to be returned
 *
 * Return: pointer to the node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	/* don't mess with the start of the list, so head should not move */
	temp = head;

	/* find the node at index */
	while (i < index)
	{
		/* check if end of list and by extension whether idx is out of bounds */
		if (temp->next == NULL)
			return (NULL);
		/* continue otherwise */
		temp = temp->next;
		i++;
	}
	return (temp);
}
