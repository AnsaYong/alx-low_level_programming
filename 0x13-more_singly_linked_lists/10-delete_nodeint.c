#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at a given position
 * @head: pointer to first node of linked list
 * @index: index at which to delete node
 *
 * Return: 1 if succeeded, -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;	/* to check the index */
	listint_t *temp1, *temp2;	/* to navigate list */

	temp1 = *head; /* copy head ptr to temp1 - use to move through list */

	if (temp1 == NULL)      /* if no node exists here */
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp1);
		return (1);
	}

	while (i < (index - 1))	/* to stop at the last node before the index */
	{
		if (temp1->next == NULL)
			return (-1);

		temp1 = temp1->next; /* temp1 now points to the next node */
		i++;
	}

	temp2 = temp1->next;	/* copy what temp1 is pointing to, to temp2 */
	if (temp1->next->next == NULL)	/* if no node after the specified index */
		temp1->next = NULL;	/* update the link before the index to NULL */
	else	/* if atleast 1 node exists after the index */
		temp1->next = temp1->next->next;	/* update link pointed to */
	temp1->next = temp2->next;
	free(temp2); /* delete node at index */

	return (1);
}
