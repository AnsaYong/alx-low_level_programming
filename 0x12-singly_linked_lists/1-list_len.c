#include <stdio.h>
#include "lists.h"
/**
 * list_len - returns the number of elements of a linked list
 * @h: header pointer to a struct list_s
 *
 * Return: the number of elements in the linked list
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
