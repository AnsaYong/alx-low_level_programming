#include "lists.h"

/**
 * delete_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer to start of list
 * @index: the node to be deleted
 *
 * Return: 1, or -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp1 = *head, *temp2 = NULL;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp1);
		return (1);
	}

	/* move to the required index */
	while (i < index && temp1 != NULL)
	{
		temp2 = temp1;
		temp1 = temp1->next;
		i++;
	}

	if (temp1 == NULL)
		return (-1);

	temp2->next = temp1->next;
	free(temp1);

	return (1);
}
