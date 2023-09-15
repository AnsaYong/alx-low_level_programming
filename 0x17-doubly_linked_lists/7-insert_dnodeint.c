#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position of
 * a dlistint_t linked list
 * @h: reference (pointer to pointer) to head of the list
 * @idx: index at which to insert node
 * @n: integer
 *
 * Return: pointer to new node, or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *prev_node = NULL;
	dlistint_t *new_node = NULL;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	if (idx == 0)	/* special case for inserting at the begining */
		new_node = add_dnodeint(h, n);

	/* create new node and add its data */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	/* Traverse the list to find the given index */
	prev_node = *h;
	while (prev_node != NULL && i < idx - 1)
	{
		prev_node = prev_node->next;
		i++;
	}

	if (prev_node == NULL)	/* check if index is out of bounds */
	{
		free(new_node);
		return (NULL);
	}

	/* Update pointers to insert the new node */
	new_node->next = prev_node->next;
	new_node->prev = prev_node;
	if (prev_node->next != NULL)
		prev_node->next->prev = new_node;
	prev_node->next = new_node;

	return (new_node);
}
