#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: reference (pointer) to the start of the list
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	dlistint_t *temp2 = NULL;

	/* make temp start at the begining of the list */
	temp = head;

	/* iterate through the list and free */
	while (temp != NULL)
	{
		temp2 = temp->next;
		free(temp);
		temp = temp2;
	}

	/* finally, make sure head is set to NULL */
	head = NULL;
}
