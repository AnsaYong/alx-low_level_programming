#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to start of a listint_t list
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *current;	/* to iteratet over all members of the list */

	/* iterate over all members of the list */
	while (head != NULL)
	{
		current = head; /* copy ptr to start of list to current */
		head = head->next; /* head pointer now points to the next node */
		free(current);	/* free memory allocated to the entire previous node */
	}
}
