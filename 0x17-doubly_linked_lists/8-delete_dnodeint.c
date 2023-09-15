#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a given index of a dlistint_t
 * linked list
 * @head: reference (pointer to pointer) to head of linked list
 * @index: index
 *
 * Return: 1 on success, else -i
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i = 0;

	/* if list is empty or head is NULL, deletion failed */
	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	/* Special case for deleting the first node (index 0) */
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	/* Traverse the list to find the node at the specified index */
	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	/* if the index is out of bounds */
	if (current == NULL)
		return (-1);

	/* Update the previous node's next pointer to skip the current node */
	if (current->prev != NULL)
		current->prev->next = current->next;
	/* Update the next node's previous pointer to skip the current node */
	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);	/* Free the memory of the deleted node */
	return (1);		/* deletion succeeded */
}
