#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * listint_len - returns the number of elements of a listint_t list
 * @h: head (pointer to the first node) of the listint_t list
 *
 * Return: the number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
