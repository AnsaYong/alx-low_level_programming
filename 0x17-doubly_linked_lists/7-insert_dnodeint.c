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
	dlistint_t *prev_node;
	dlistint_t *next_node;
	dlistint_t *new_node;
	unsigned int i = 0;

	/* create new node and add its data */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	/* remember you don't have to mess with the head */
	prev_node = *h;
	next_node = prev_node->next;

	/* find the given index */
	while (i < idx)
	{
		prev_node = next_node;
		/* check if end of list and idx is not next i.e out of bounds */
		if (next_node == NULL && i < (idx - 1))
			return (NULL);
		next_node = prev_node->next;
		i++;
	}

	/* check if end of list */
	if (next_node == NULL)
	{
		new_node->next = NULL;
		new_node->prev = prev_node;
		prev_node->next = new_node;
	}
	else
	{
		new_node->next = next_node;
		next_node = new_node;
		new_node->prev = prev_node;
		if (next_node->next != NULL)
			next_node->prev = new_node;
	}
	return (new_node);
}
